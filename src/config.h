#define MOD1                   XCB_MOD_MASK_4
#define MOD2                   XCB_MOD_MASK_SHIFT
#define WINDOW_WIDTH           600      /* pixels */
#define WINDOW_HEIGHT          400      /* pixels */
#define WINDOW_MIN_WIDTH       60       /* pixels */
#define WINDOW_MIN_HEIGHT      40       /* pixels */
#define BORDER_WIDTH           1        /* 0 = no border effect */
#define BORDER_COLOR_UNFOCUSED 0x696969 /* 0xRRGGBB */
#define BORDER_COLOR_FOCUSED   0xFFFFFF /* 0xRRGGBB */

static char *termcmd[] = { "st", NULL };
static char *menucmd[] = { "dmenu_run", NULL };
static char *browcmd[] = { "surf", "https://startpage.com", NULL };


static Key keys[] = {
	{ MOD1,      0x0062, spawn,      browcmd }, /* 0x0062 = XK_b */
	{ MOD1,      0xff0d, spawn,      termcmd }, /* 0xff0d = XK_Enter */
	{ MOD1,      0x0020, spawn,      menucmd }, /* 0x0020 = XK_space */
	{ MOD1,      0x0066, fullclient, NULL },    /* 0x0066 = XK_f */
	{ MOD1,      0x0071, killclient, NULL },    /* 0x0071 = XK_q */
	{ MOD1|MOD2, 0x0071, closewm,    NULL }     /* 0x0071 = XK_q */
};
