#include "zinfo.h"

struct DATAFILE;
enum App;

extern DATAFILE *sfxdata;
extern zcmodule moduledata;

void zapp_setup_allegro(App id, int argc, char **argv);
void zapp_create_window();
