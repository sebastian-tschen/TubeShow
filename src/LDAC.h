
void LDAC (void)

{


// x-daten in DAC laden
  PORTAbits.RA4=1;		//  Channnel A 
  PORTAbits.RA5=0;		//  WR=0
  PORTD=xdaten;			//  Output
  PORTAbits.RA5=1;;		//  WR=1
  
// y-daten in DAC laden
  PORTAbits.RA4=0;		//  Channnel B 

  PORTAbits.RA5=0;		//  WR=0


  PORTD = ydaten;		//  Output

  PORTAbits.RA5=1;		//  WR=1

// Schreiben
  
  PORTAbits.RA7=0;		//  LDAC laden

  PORTAbits.RA7=1;		//

}
