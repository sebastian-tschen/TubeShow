/*
 * DISPLAYCHAR.c
 *
 *  Created on: Aug 26, 2009
 *      Author: sebastian
 */

#include <vardef.h>
#include <client.h>
#include <main.h>

void DISPLAYCHAR (unsigned char *xArray, unsigned char *yArray)
{



for (i=0; i<=255; ++i)
  {

    LDAC(*xArray,*yArray);
    yArray++;
    xArray++;
  }
#ifdef __is_PC
//printf("\n");
usleep(10000);
char buffer[3];
buffer[0] = 'e';
	buffer[1] = 'o';
	buffer[2] = 'c';
//	printf("%d",displaySocket);
client_send(displaySocket, buffer);
#endif /*__is_PC*/


}
