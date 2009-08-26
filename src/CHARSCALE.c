/*
 * CHARSCALE.c
 *
 *  Created on: Aug 26, 2009
 *      Author: sebastian
 */

#include <vardef.h>
#ifdef __dingens
#include <p18f4520.h>
#endif /* __dingens */

#ifdef __x86_64
#include <myp18f4520.h>
#endif /*__x86_64*/


void CHARSCALE (void)
{
	for (i=1; i<=pointcount; ++i)
	{
		xtemp=xtemparray[i];
//		Rrcf(xtemp,1,1); TODO
		xcarry=STATUSbits.C;
//		Rlcf(xtemp,1,1);	TODO
		if (xcarry==1)
		{
			--xtemp;
		}
		ytemp=ytemparray[i];
//		Rrcf(ytemp,1,1);	TODO
		ycarry=STATUSbits.C;
//		Rlcf(ytemp,1,1); TODO
		if (ycarry==1)
		{
			--ytemp;
		}
		xtemp=scale*xtemp;
		ytemp=scale*ytemp;


		if (ycarry==1)
		{
			++ytemp;
		}

		if (xcarry==1)
		{
			++xtemp;
		}

		xtemparray[i]=xtemp;
		ytemparray[i]=ytemp;

	}
}
