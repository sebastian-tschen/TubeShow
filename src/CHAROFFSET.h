void CHAROFFSET (void)
{
	for (i=1; i<=pointcount; ++i)
	{
		xtemparray[i]=xtemparray[i]+xoffset;
		ytemparray[i]=ytemparray[i]+yoffset;
	}
}
