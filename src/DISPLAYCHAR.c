/*
 * DISPLAYCHAR.c
 *
 *  Created on: Aug 26, 2009
 *      Author: sebastian
 */

#include <vardef.h>

#include <main.h>

void DISPLAYCHAR (unsigned char *xArray, unsigned char *yArray)
{



for (i=0; i<=255; ++i)
  {

    LDAC(*xArray,*yArray);
    yArray++;
    xArray++;
  }
#ifdef __x86_64
printf("\n");
usleep(10000);
#endif /*__x86_64*/


}
