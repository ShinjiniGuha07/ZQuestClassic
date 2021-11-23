#include "zdefs.h"
#include "module.h"

const char default_itype_strings[itype_max][255] = 
{ 
	"Swords", "Boomerangs", "Arrows", "Candles", "Whistles",
	"Bait", "Letters", "Potions", "Wands", "Rings", 
	"Wallets", "Amulets", "Shields", "Bows", "Rafts",
	"Ladders", "Books", "Magic Keys", "Bracelets", "Flippers", 
	"Boots", "Hookshots", "Lenses", "Hammers", "Din's Fire", 
	"Farore's Wind", "Nayru's Love", "Bombs", "Super Bombs", "Clocks", 
	"Keys", "Magic Containers", "Triforce Pieces", "Maps", "Compasses", 
	"Boss Keys", "Quivers", "Level Keys", "Canes of Byrna", "Rupees", 
	"Arrow Ammo", "Fairies", "Magic", "Hearts", "Heart Containers", 
	"Heart Pieces", "Kill All Enemies", "Bomb Ammo", "Bomb Bags", "Roc Items", 
	"Hover Boots", "Scroll: Spin Attack", "Scroll: Cross Beams", "Scroll: Quake Hammer","Whisp Rings", 
	"Charge Rings", "Scroll: Peril Beam", "Wealth Medals", "Heart Rings", "Magic Rings", 
	"Scroll: Hurricane Spin", "Scroll: Super Quake","Stones of Agony", "Stomp Boots", "Whimsical Rings", 
	"Peril Rings", "Non-gameplay Items", "zz067", "zz068", "zz069",
	"zz070", "zz071", "zz072", "zz073", "zz074",
	"zz075", "zz076", "zz077", "zz078", "zz079",
	"zz080", "zz081", "zz082", "zz083", "zz084",
	"zz085", "zz086", "Bow and Arrow (Subscreen Only)", "Letter or Potion (Subscreen Only)",
	"zz089", "zz090", "zz091", "zz092", "zz093", "zz094", "zz095", "zz096",
	"zz097", "zz098", "zz099", "zz100", "zz101", "zz102", "zz103", "zz104",
	"zz105", "zz106", "zz107", "zz108", "zz109", "zz110", "zz111", "zz112",
	"zz113", "zz114", "zz115", "zz116", "zz117", "zz118", "zz119", "zz120",
	"zz121", "zz122", "zz123", "zz124", "zz125", "zz126", "zz127", "zz128",
	"zz129", "zz130", "zz131", "zz132", "zz133", "zz134", "zz135", "zz136",
	"zz137", "zz138", "zz139", "zz140", "zz141", "zz142", "zz143", "zz144",
	"zz145", "zz146", "zz147", "zz148", "zz149", "zz150", "zz151", "zz152",
	"zz153", "zz154", "zz155", "zz156", "zz157", "zz158", "zz159", "zz160",
	"zz161", "zz162", "zz163", "zz164", "zz165", "zz166", "zz167", "zz168",
	"zz169", "zz170", "zz171", "zz172", "zz173", "zz174", "zz175", "zz176",
	"zz177", "zz178", "zz179", "zz180", "zz181", "zz182", "zz183", "zz184",
	"zz185", "zz186", "zz187", "zz188", "zz189", "zz190", "zz191", "zz192",
	"zz193", "zz194", "zz195", "zz196", "zz197", "zz198", "zz199", "zz200",
	"zz201", "zz202", "zz203", "zz204", "zz205", "zz206", "zz207", "zz208",
	"zz209", "zz210", "zz211", "zz212", "zz213", "zz214", "zz215", "zz216",
	"zz217", "zz218", "zz219", "zz220", "zz221", "zz222", "zz223", "zz224",
	"zz225", "zz226", "zz227", "zz228", "zz229", "zz230", "zz231", "zz232",
	"zz233", "zz234", "zz235", "zz236", "zz237", "zz238", "zz239", "zz240",
	"zz241", "zz242", "zz243", "zz244", "zz245", "zz246", "zz247", "zz248",
	"zz249", "zz250", "zz251", "zz252", "zz253", "zz254", "zz255",
	"Custom Weapon 01", "Custom Weapon 02", "Custom Weapon 03", "Custom Weapon 04", "Custom Weapon 05",
	"Custom Weapon 06", "Custom Weapon 07", "Custom Weapon 08", "Custom Weapon 09", "Custom Weapon 10",
	"Ice Rod", "Attack Ring", "Lanterns", "Pearls", "Bottles", "Bottle Fillers", "Bug Nets", "Mirrors"
};

