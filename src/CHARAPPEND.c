/*
 * CHARAPPEND.c
 *
 *  Created on: Aug 26, 2009
 *      Author: sebastian
 */

#include <vardef.h>
#include <main.h>
//
//#ifdef __is_PC
//static unsigned char yarray[255];
//static unsigned char xarray[255];
//#endif /*__is_PC*/

void CHARAPPEND (void)
{
	for (i=1; i<=pointcount; ++i)
	{
		xarray[appendcount]=xtemparray[i];
		yarray[appendcount]=ytemparray[i];
		++appendcount;
	}
}
