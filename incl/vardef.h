static unsigned char testcount;
static unsigned char istwert;
static unsigned char xdaten=0;
static unsigned char ydaten=0;
static unsigned char kanalwert;
static unsigned char moduswert;
static unsigned char triggerport=1;
static unsigned char vergleichswert;
static unsigned int oscitemp;
static unsigned char xcarry;
static unsigned char ycarry;
static unsigned char counter;
#ifdef __dingens
static rom far char *xpicpointer;
static rom far char *ypicpointer;
static rom far char *textpointer;
#endif /* __dingens */

#ifdef __x86_64
static unsigned char *xpicpointer;
static unsigned char *ypicpointer;
static unsigned char *textpointer;
#endif /* __x86_64 */

static unsigned char picscale;
static unsigned char xpicoffset;
static unsigned char ypicoffset;
static unsigned int i=0;
static unsigned int j=0;
static unsigned int anitime;
static unsigned char character;
static unsigned char pointcount;
static unsigned int scale;
static unsigned int xtemp;
static unsigned int ytemp;
static unsigned char xoffset;
static unsigned char yoffset;
static unsigned char chararray[30];
static unsigned char scalearray[30];
static unsigned char xoffsetarray[30];
static unsigned char yoffsetarray[30];
static unsigned char appendcount;
static unsigned char charcount;
static unsigned char constscale;
static unsigned int k;
static unsigned char xconstoff;
static unsigned char yconstoff;
static unsigned char xtemparray[30];
static unsigned char ytemparray[30];
static unsigned char EXIT_FLAG=0;

