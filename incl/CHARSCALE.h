
void CHARSCALE (void)
{
	for (i=1; i<=pointcount; ++i)
	{
		xtemp=xtemparray[i];
		Rrcf(xtemp,1,1);
		xcarry=STATUSbits.C;
		Rlcf(xtemp,1,1);
		if (xcarry==1)
		{
			--xtemp;
		}
		ytemp=ytemparray[i];
		Rrcf(ytemp,1,1);
		ycarry=STATUSbits.C;
		Rlcf(ytemp,1,1);
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
