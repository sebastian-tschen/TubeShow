
#ifdef __dingens
#include <p18f4520.h>
#endif /* __dingens */

#include <charlibrary.h>
#include <incl/vardef.h>
//#include <kanallibrary.h>
#include <incl/CHARSELECT.h>
//#include <kanalselect.h>
#include <incl/CHARSCALE.h>
#include <incl/CHAROFFSET.h>
#include <incl/CHARAPPEND.h>
#include <incl/LDAC.h>
#include <incl/DISPLAYCHAR.h>
//#include <CHARINIT.h>
#include <incl/picturelibrary.h>
//#include <math.h>


void ANIMATION (void)
{

anitime=9;

  while (1)
  {

  xpicpointer=&xtheriddle_frame_000[0];
  ypicpointer=&ytheriddle_frame_000[0];
  ANIBILD();
  xpicpointer=&xtheriddle_frame_001[0];
  ypicpointer=&ytheriddle_frame_001[0];
  ANIBILD();
  xpicpointer=&xtheriddle_frame_002[0];
  ypicpointer=&ytheriddle_frame_002[0];
  ANIBILD();
  xpicpointer=&xtheriddle_frame_003[0];
  ypicpointer=&ytheriddle_frame_003[0];
  ANIBILD();
  xpicpointer=&xtheriddle_frame_004[0];
  ypicpointer=&ytheriddle_frame_004[0];
  ANIBILD();
  xpicpointer=&xtheriddle_frame_005[0];
  ypicpointer=&ytheriddle_frame_005[0];
  ANIBILD();
  xpicpointer=&xtheriddle_frame_006[0];
  ypicpointer=&ytheriddle_frame_006[0];
  ANIBILD();

  
  }
  


}
