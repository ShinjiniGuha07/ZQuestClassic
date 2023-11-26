#include "app/zapp.h"
#include "base/zc_alleg.h"
#include "base/zsys.h"
#include "sfx.h"
#include <al5_img.h>
#include <loadpng.h>

DATAFILE *sfxdata;

void zapp_setup_allegro()
{
	register_trace_handler(zc_trace_handler);
	all_disable_threaded_display();

	Z_message("Initializing Allegro... ");
	if(!al_init())
	{
		Z_error_fatal("Failed Init!");
	}
	if(allegro_init() != 0)
	{
		Z_error_fatal("Failed Init!");
	}

	// Merge old a4 config into a5 system config.
	ALLEGRO_CONFIG *tempcfg = al_load_config_file(get_config_file_name());
	if (tempcfg) {
		al_merge_config_into(al_get_system_config(), tempcfg);
		al_destroy_config(tempcfg);
	}

#ifdef __EMSCRIPTEN__
	em_mark_initializing_status();
	em_init_fs();
#endif

	if(!al_init_image_addon())
	{
		Z_error_fatal("Failed al_init_image_addon");
	}

	if(!al_init_font_addon())
	{
		Z_error_fatal("Failed al_init_font_addon");
	}

	if(!al_init_primitives_addon())
	{
		Z_error_fatal("Failed al_init_primitives_addon");
	}

	al5img_init();
	register_png_file_type();

    if(install_timer() < 0)
	{
		Z_error_fatal(allegro_error);
	}
	
	if(install_keyboard() < 0)
	{
		Z_error_fatal(allegro_error);
	}
	poll_keyboard();
	
	if(install_mouse() < 0)
	{
		Z_error_fatal(allegro_error);
	}
	
	if(install_joystick(JOY_TYPE_AUTODETECT) < 0)
	{
		Z_error_fatal(allegro_error);
	}

    Z_message("SFX.Dat...");

    char sfxdat_sig[52];
	if((sfxdata=load_datafile("sfx.dat"))==NULL)
	{
		Z_error_fatal("failed to load sfx_dat");
	}
	if (sfxdata[Z35].type != DAT_ID('S', 'A', 'M', 'P'))
	{
		Z_error_fatal("failed to load sfx_dat");
	}
	
	Z_message("OK\n");

    // initialize sound driver
	Z_message("Initializing sound driver... ");
	
    bool sound = false;
    // used_switch(argc,argv,"-s") || used_switch(argc,argv,"-nosound") || zc_get_config("zeldadx","nosound",0) || is_headless()
	if (!sound)
	{
		Z_message("skipped\n");
	}
	else
	{
		if(!al_install_audio())
		{
			// We can continue even with no audio.
			Z_error("Failed al_install_audio");
		}

		if(!al_init_acodec_addon())
		{
			Z_error("Failed al_init_acodec_addon");
		}

		if(install_sound(DIGI_AUTODETECT,MIDI_AUTODETECT,NULL))
		{
			//      Z_error_fatal(allegro_error);
			Z_message("Sound driver not available.  Sound disabled.\n");
		}
		else
		{
			Z_message("OK\n");
		}
	}
}
