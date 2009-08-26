
void LDAC (char xDaten, char yDaten)

{
	printf("%d %d ;",xDaten,yDaten);
	fflush(stdout);
// x-daten in DAC laden
  PORTAbits.RA4=1;		//  Channnel A 
  PORTAbits.RA5=0;		//  WR=0
  PORTD=xDaten;			//  Output
  PORTAbits.RA5=1;;		//  WR=1
  
// y-daten in DAC laden
  PORTAbits.RA4=0;		//  Channnel B 

  PORTAbits.RA5=0;		//  WR=0


  PORTD = yDaten;		//  Output

  PORTAbits.RA5=1;		//  WR=1

// Schreiben
  
  PORTAbits.RA7=0;		//  LDAC laden

  PORTAbits.RA7=1;		//

}
