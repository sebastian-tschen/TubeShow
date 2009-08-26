// Implementiert die funktionen um ein einzelnes Bild anzuzeigen


//void displayPicture(char *picPointer, char iterations)


#include <vardef.h>
#ifdef __dingens
#include <p18f4520.h>
#endif /* __dingens */
#ifdef __x86_64
#include <myp18f4520.h>
#endif /* __x86_64 */

void displayPicture(unsigned char *xpicPointer, unsigned char *ypicPointer) {

#pragma udata bank1=0x100
	static unsigned char yarray[255];
#pragma udata bank2=0x200
	static unsigned char xarray[255];

	unsigned int pixelCount=*xpicPointer;
	unsigned int ii = 0;


	for (ii = 0; ii < pixelCount; ii++) {
		xarray[ii] = *xpicPointer;
		yarray[ii] = *xpicPointer;
	}

	for (ii = pixelCount + 1; ii <= 255; ii++) {
		xarray[ii] = 0;
		yarray[ii] = 0;
	}

	while (EXIT_FLAG = 0) {
		for (ii = 0; ii <= 255; ++ii) {

			// x-daten in DAC laden
			PORTAbits.RA4 = 1; //  Channnel A
			PORTAbits.RA5 = 0; //  WR=0
			PORTD = xarray[ii]; //  Output
			PORTAbits.RA5 = 1;
			; //  WR=1

			// y-daten in DAC laden
			PORTAbits.RA4 = 0; //  Channnel B

			PORTAbits.RA5 = 0; //  WR=0
			PORTD = yarray[ii]; //  Output
			PORTAbits.RA5 = 1; //  WR=1

			// Schreiben

			PORTAbits.RA7 = 0; //  LDAC laden
			PORTAbits.RA7 = 1; //
		}
	}
}
