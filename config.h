/* user and group to drop privileges to */
static const char *user  = "your-user-name";
static const char *group = "your-group-name";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
static const int timetocancel = 2;
