 void MODUS (void)
{ 

vergleichswert = PORTB;
kanalwert = vergleichswert && 0b00000111;
moduswert = vergleichswert && 0b11111000;


switch (moduswert)
{
	case 0b00000000 :
	KANALANZEIGE();
	break;

	case 0b00001000 :
	OSCI();
	break;

	case 0b00010000:
	INTRO();
	break;
}
while(1)
  { 
    
    //SCHRIFT ();
    //xpicpointer=&xpicture2[0];
    //ypicpointer=&ypicture2[0];
    //BILD();
    //triggerport=1;
    //oscitemp=8;
    //OSCI();
    //ANIMATION();
    
  }


}
