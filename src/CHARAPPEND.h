void CHARAPPEND (void)
{
	for (i=1; i<=pointcount; ++i)
	{
		xarray[appendcount]=xtemparray[i];
		yarray[appendcount]=ytemparray[i];
		++appendcount;
	}
}
