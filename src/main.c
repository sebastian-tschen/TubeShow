/* Compile options:  -ml (Large code model) */

#ifdef __dingens
#include <p18f4520.h>

#endif /* __dingens */

#ifdef __is_PC
#include <myp18f4520.h>
#include <stdio.h>
#include <stdlib.h>
#include <client.h>

#include<pcspec.h>
#endif /*__is_PC*/

#include <main.h>

#include <charlibrary.h>
#include <vardef.h>
//#include <kanallibrary.h>
#include <CHARSELECT.h>
//#include <kanalselect.h>
#include <CHARSCALE.h>
#include <CHAROFFSET.h>
#include <CHARAPPEND.h>
#include <LDAC.h>
#include <DISPLAYCHAR.h>
//#include <CHARINIT.h>
#include <picturelibrary.h>
#include <displayPicture.h>
//#include <math.h>


unsigned char vergleichswert;
//********************************************************************************//

void INIT(void) {

	//#pragma udata bank1=0x100
	static unsigned char yarray[255];
	//#pragma udata bank2=0x200
	static unsigned char xarray[255];

	ADCON1 = 0b00111111;
	PORTA = 0b11110000;
	PORTD = 1;
	TRISA = 0b00001111;
	TRISD = 0x00;
	OSCCON = 0b11111111;
	//TRISB=0b11111111;
	TRISB = 0b10001111;
	TRISC = 0b11110000;
	//PORTB=0b00001111;
	//for (i=0; i<=87; ++i)
	//  {
	//	xdaten=xarray[i];
	//	ydaten=yarray[i];
	//	xarray[i]=xdaten+1;
	//	yarray[i]=ydaten+1;
	//  }
	triggerport = 1;
	xdaten = 0;
	ydaten = 0;
	testcount = 0;
	vergleichswert = 0;

#include <textlib.h>
	yconstoff = 100;
	xconstoff = 24;
	constscale = 2;

}
int modusChange(void) {
	//	fprintf(stderr,"error reading byte");
#ifdef __is_PC

	char modus[1];
	modus[0]=0;
	int num;
	num = client_read(commandSocket, modus);
	if (num > 0) {
//		vergleichswert = modus[0];
		PORTC=(PORTC & 0b00001111) + (modus[0] & 0b11110000);
		PORTB=(PORTB & 0b11110000) + (modus[0] & 0b00001111);
		fprintf(stdout, "modus: %X\n", modus[0]);
		return 1;
	} else if (num == 0) {
		fprintf(stderr, "eof\n");
		return 0;
	} else {

//		fprintf(stdout, "blubb\n");
	return 0;
	}

#endif

#ifdef __dingens
return (vergleichswert != (PORTC & 0b11110000) + (PORTB & 0b00001111));
#endif
}
//********************************************************************************//
void SCHRIFT(void) {

appendcount = 0;

i = *textpointer;

charcount = i;

for (j = 0; j < i; ++j) {
	++xpicpointer;
	chararray[j] = *textpointer;
	++xpicpointer;
	scalearray[j] = *textpointer;
	++xpicpointer;
	xoffsetarray[j] = *textpointer;
	++xpicpointer;
	yoffsetarray[j] = *textpointer;
}

for (j = 0; j < charcount; ++j) {
	character = chararray[j];
	CHARSELECT();
	pointcount = xtemparray[0];
	scale = scalearray[j];
	CHARSCALE();
	xoffset = xoffsetarray[j];
	yoffset = yoffsetarray[j];
	CHAROFFSET();
	CHARAPPEND();
}

//k=200;

for (i = appendcount; i <= 255; ++i) {
	xarray[i] = k;
	yarray[i] = 20;
}
while (!modusChange()) {

	DISPLAYCHAR(&xarray, &yarray);
}
}

//********************************************************************************//

void LAUFSCHRIFT(void) {

appendcount = 0;

for (j = 0; j < charcount; ++j) {
	character = chararray[j];
	CHARSELECT();
	pointcount = xtemparray[0];
	scale = scalearray[j];
	CHARSCALE();
	xoffset = xoffsetarray[j];
	yoffset = yoffsetarray[j];
	CHAROFFSET();
	CHARAPPEND();
}

for (i = appendcount; i <= 255; ++i) {
	xarray[i] = i - 45;
	yarray[i] = 0;
}

for (j = 0; j <= 31; ++j) {
	for (i = 0; i <= 255; i++) {
		xarray[i] = xarray[i] - 8;
	}

	while (!modusChange()) {
		DISPLAYCHAR(&xarray, &yarray);
	}
}
}

//********************************************************************************//

void BILD(unsigned char *xpicPointer, unsigned char *ypicPointer) {

int gi = *xpicPointer;

k = gi;

for (j = 0; j < gi; ++j) {
	++xpicPointer;
	++ypicPointer;
	xarray[j] = *xpicPointer;
	yarray[j] = *ypicPointer;
}

for (gi = k + 1; gi <= 255; ++gi) {
	xarray[gi] = 0;
	yarray[gi] = 0;
}

while (!modusChange()) {
	DISPLAYCHAR(&xarray, &yarray);
}

}

//********************************************************************************//

void ANIBILD(void) {

counter = *xpicpointer;

k = counter;

for (j = 0; j < counter; ++j) {
	++xpicpointer;
	++ypicpointer;
	xarray[j] = *xpicpointer;
	yarray[j] = *ypicpointer;
}

for (i = k + 1; i <= 255; ++i) {
	xarray[i] = 0;
	yarray[i] = 0;
}

for (k = 0; k <= anitime; ++k) {
#ifdef __is_PC
	if (1)
#endif
#ifdef __dingens
	if (!modusChange())
#endif
	{
		DISPLAYCHAR(&xarray, &yarray);
	} else {
		// break;
		k = anitime;
	}
}
}

//********************************************************************************//

void OSCI(void) {
xdaten = 1;
ydaten = 129;
while (!modusChange()) {

	if (triggerport == 1) {
		for (j = 0; j < 127; ++j) {
			// for (i=0; i<=oscitemp; ++i)
			//{
			LDAC(xdaten, ydaten);
			// }
			++xdaten;
			++xdaten;
		}
	}

	LDAC(xdaten, ydaten);
	--ydaten;
	LDAC(xdaten, ydaten);
//	for (j = 0; j <= 19; ++j) {
//		//      Nop(); TODO
//	}

	++ydaten;
	++xdaten;
	++xdaten;
}

}

//********************************************************************************//

void ANIMATION(void) {

anitime = 9;
//#ifdef __is_PC
//	while (1)
//#endif
//#ifdef __dingens
while (!modusChange())
//#endif
{

	xpicpointer = &xtheriddle_frame_000[0];
	ypicpointer = &ytheriddle_frame_000[0];
	ANIBILD();
	xpicpointer = &xtheriddle_frame_001[0];
	ypicpointer = &ytheriddle_frame_001[0];
	ANIBILD();
	xpicpointer = &xtheriddle_frame_002[0];
	ypicpointer = &ytheriddle_frame_002[0];
	ANIBILD();
	xpicpointer = &xtheriddle_frame_003[0];
	ypicpointer = &ytheriddle_frame_003[0];
	ANIBILD();
	xpicpointer = &xtheriddle_frame_004[0];
	ypicpointer = &ytheriddle_frame_004[0];
	ANIBILD();
	xpicpointer = &xtheriddle_frame_005[0];
	ypicpointer = &ytheriddle_frame_005[0];
	ANIBILD();
	xpicpointer = &xtheriddle_frame_006[0];
	ypicpointer = &ytheriddle_frame_006[0];
	ANIBILD();

}

}

//********************************************************************************//

void KANALANZEIGE(void) {
if (triggerport == 1) {
	xpicpointer = &xpicture2[0];
	ypicpointer = &ypicture2[0];
	BILD(ypicpointer, xpicpointer);
}

}

//********************************************************************************//


void INTRO(void) {
ANIMATION();
}

//********************************************************************************//

//void MODUS (void)


//********************************************************************************//

//#pragma code INTERRUPT = 0x08
//void INTERRUPT (void)
//{
//++testcount;
//_asm
//goto MODUS
//_endasm
//
//}

//********************************************************************************//

int main(void) {

INIT();
#ifdef __is_PC

pcInit();

#endif //__is_PC
//LAUFSCHRIFT();
displayPicture(&xpicture2, &ypicture2);
while (1) {
	//#ifdef __is_PC
	//		istwert = 40;
	//#endif
//	#ifdef __dingens
	istwert = (PORTC & 0b11110000) + (PORTB & 0b00001111);
	vergleichswert = istwert;
//	#endif
	//vergleichswert = 0b00001111;
	kanalwert = vergleichswert & 0b00000111;
	moduswert = vergleichswert & 0b11111000;

	switch (moduswert) {
	case 0b00000000:
		KANALANZEIGE();
		break;

	case 0b00001000:
		OSCI();
		break;

	case 0b00010000:

		//textpointer=&charTEXT[0];
		//SCHRIFT();
		INTRO();
		break;

	case 0b00011000:
		INTRO();
		break;

	case 0b00100000:
		INTRO();
		break;

	case 0b00101000:
		INTRO();
		break;

	case 0b00110000:
		INTRO();
		break;

	case 0b00111000:
		INTRO();
		break;

	case 0b01000000:
		INTRO();
		break;

	case 0b01001000:
		INTRO();
		break;

	case 0b01010000:
		INTRO();
		break;

	case 0b01011000:
		INTRO();
		break;

	case 0b01100000:
		INTRO();
		break;

	case 0b01101000:
		INTRO();
		break;

	case 0b01110000:
		INTRO();
		break;

	case 0b01111000:
		INTRO();
		break;

	case 0b10000000:
		KANALANZEIGE();
		break;

	case 0b10001000:
		OSCI();
		break;

	case 0b10010000:
		INTRO();
		break;

	case 0b10011000:
		INTRO();
		break;

	case 0b10100000:
		INTRO();
		break;

	case 0b10101000:
		INTRO();
		break;

	case 0b10110000:
		INTRO();
		break;

	case 0b10111000:
		INTRO();
		break;

	case 0b11000000:
		INTRO();
		break;

	case 0b11001000:
		INTRO();
		break;

	case 0b11010000:
		INTRO();
		break;

	case 0b11011000:
		INTRO();
		break;

	case 0b11100000:
		INTRO();
		break;

	case 0b11101000:
		INTRO();
		break;

	case 0b11110000:
		INTRO();
		break;

	case 0b11111000:
		INTRO();
		break;

	}

}

}

