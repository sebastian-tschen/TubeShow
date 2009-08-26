/*
 * CHARSELECT.c
 *
 *  Created on: Aug 26, 2009
 *      Author: sebastian
 */

#include <charlibrary.h>

#include <vardef.h>

void CHARSELECT(void)
{
     switch (character)
      {
        case 0x41:
       for (i=0; i<=21 ; ++i)
        {
          xtemparray[i]=xa[i];
          ytemparray[i]=ya[i];
        }
        break;
        case 0x42:
       for (i=0; i<=25 ; ++i)
        {
          xtemparray[i]=xb[i];
          ytemparray[i]=yb[i];
        }
        break;
        case 0x43:
       for (i=0; i<=18 ; ++i)
        {
          xtemparray[i]=xc[i];
          ytemparray[i]=yc[i];
        }
        break;
        case 0x44:
       for (i=0; i<=23 ; ++i)
        {
          xtemparray[i]=xd[i];
          ytemparray[i]=yd[i];
        }
        break;
        case 0x45:
       for (i=0; i<=20 ; ++i)
        {
          xtemparray[i]=xe[i];
          ytemparray[i]=ye[i];
        }
        break;
        case 0x46:
       for (i=0; i<=17 ; ++i)
        {
          xtemparray[i]=xf[i];
          ytemparray[i]=yf[i];
        }
        break;
        case 0x47:
       for (i=0; i<=22 ; ++i)
        {
          xtemparray[i]=xg[i];
          ytemparray[i]=yg[i];
        }
        break;
        case 0x48:
       for (i=0; i<=22 ; ++i)
        {
          xtemparray[i]=xh[i];
          ytemparray[i]=yh[i];
        }
        break;
        case 0x49:
       for (i=0; i<=16 ; ++i)
        {
          xtemparray[i]=xi[i];
          ytemparray[i]=yi[i];
        }
        break;
        case 0x4a:
       for (i=0; i<=16 ; ++i)
        {
          xtemparray[i]=xj[i];
          ytemparray[i]=yj[i];
        }
        break;
        case 0x4b:
       for (i=0; i<=19 ; ++i)
        {
          xtemparray[i]=xk[i];
          ytemparray[i]=yk[i];
        }
        break;
        case 0x4c:
       for (i=0; i<=15 ; ++i)
        {
          xtemparray[i]=xl[i];
          ytemparray[i]=yl[i];
        }
        break;
        case 0x4d:
       for (i=0; i<=22 ; ++i)
        {
          xtemparray[i]=xm[i];
          ytemparray[i]=ym[i];
        }
        break;
        case 0x4e:
       for (i=0; i<=22 ; ++i)
        {
          xtemparray[i]=xn[i];
          ytemparray[i]=yn[i];
        }
        break;
        case 0x4f:
       for (i=0; i<=21 ; ++i)
        {
          xtemparray[i]=xo[i];
          ytemparray[i]=yo[i];
        }
        break;
        case 0x50:
       for (i=0; i<=20 ; ++i)
        {
          xtemparray[i]=xp[i];
          ytemparray[i]=yp[i];
        }
        break;
        case 0x51:
       for (i=0; i<=24 ; ++i)
        {
          xtemparray[i]=xq[i];
          ytemparray[i]=yq[i];
        }
        break;
        case 0x52:
       for (i=0; i<=23 ; ++i)
        {
          xtemparray[i]=xr[i];
          ytemparray[i]=yr[i];
        }
        break;
        case 0x53:
       for (i=0; i<=20 ; ++i)
        {
          xtemparray[i]=xs[i];
          ytemparray[i]=ys[i];
        }
        break;
        case 0x54:
       for (i=0; i<=16 ; ++i)
        {
          xtemparray[i]=xt[i];
          ytemparray[i]=yt[i];
        }
        break;
        case 0x55:
       for (i=0; i<=20 ; ++i)
        {
          xtemparray[i]=xu[i];
          ytemparray[i]=yu[i];
        }
        break;
        case 0x56:
       for (i=0; i<=18 ; ++i)
        {
          xtemparray[i]=xv[i];
          ytemparray[i]=yv[i];
        }
        break;
        case 0x57:
       for (i=0; i<=20 ; ++i)
        {
          xtemparray[i]=xw[i];
          ytemparray[i]=yw[i];
        }
        break;
        case 0x58:
       for (i=0; i<=18 ; ++i)
        {
          xtemparray[i]=xx[i];
          ytemparray[i]=yx[i];
        }
        break;
        case 0x59:
       for (i=0; i<=16 ; ++i)
        {
          xtemparray[i]=xy[i];
          ytemparray[i]=yy[i];
        }
        break;
        case 0x5a:
       for (i=0; i<=20 ; ++i)
        {
          xtemparray[i]=xz[i];
          ytemparray[i]=yz[i];
        }
        break;
        case 0x30:
       for (i=0; i<=24 ; ++i)
        {
          xtemparray[i]=x0klein[i];
          ytemparray[i]=y0klein[i];
        }
        break;
        case 0x31:
       for (i=0; i<=14 ; ++i)
        {
          xtemparray[i]=x1klein[i];
          ytemparray[i]=y1klein[i];
        }
        break;
        case 0x32:
       for (i=0; i<=19 ; ++i)
        {
          xtemparray[i]=x2klein[i];
          ytemparray[i]=y2klein[i];
        }
        break;
        case 0x33:
       for (i=0; i<=18 ; ++i)
        {
          xtemparray[i]=x3klein[i];
          ytemparray[i]=y3klein[i];
        }
        break;
        case 0x34:
       for (i=0; i<=19 ; ++i)
        {
          xtemparray[i]=x4klein[i];
          ytemparray[i]=y4klein[i];
        }
        break;
        case 0x35:
       for (i=0; i<=21 ; ++i)
        {
          xtemparray[i]=x5klein[i];
          ytemparray[i]=y5klein[i];
        }
        break;
        case 0x36:
       for (i=0; i<=22 ; ++i)
        {
          xtemparray[i]=x6klein[i];
          ytemparray[i]=y6klein[i];
        }
        break;
        case 0x37:
       for (i=0; i<=16 ; ++i)
        {
          xtemparray[i]=x7klein[i];
          ytemparray[i]=y7klein[i];
        }
        break;
        case 0x38:
       for (i=0; i<=22 ; ++i)
        {
          xtemparray[i]=x8klein[i];
          ytemparray[i]=y8klein[i];
        }
        break;
        case 0x39:
       for (i=0; i<=22 ; ++i)
        {
          xtemparray[i]=x9klein[i];
          ytemparray[i]=y9klein[i];
        }
        break;
        case 0x61:
       for (i=0; i<=19 ; ++i)
        {
          xtemparray[i]=xaklein[i];
          ytemparray[i]=yaklein[i];
        }
        break;
        case 0x62:
       for (i=0; i<=20 ; ++i)
        {
          xtemparray[i]=xbklein[i];
          ytemparray[i]=ybklein[i];
        }
        break;
        case 0x63:
       for (i=0; i<=16 ; ++i)
        {
          xtemparray[i]=xcklein[i];
          ytemparray[i]=ycklein[i];
        }
        break;
        case 0x64:
       for (i=0; i<=20 ; ++i)
        {
          xtemparray[i]=xdklein[i];
          ytemparray[i]=ydklein[i];
        }
        break;
        case 0x65:
       for (i=0; i<=18 ; ++i)
        {
          xtemparray[i]=xeklein[i];
          ytemparray[i]=yeklein[i];
        }
        break;
        case 0x66:
       for (i=0; i<=14 ; ++i)
        {
          xtemparray[i]=xfklein[i];
          ytemparray[i]=yfklein[i];
        }
        break;
        case 0x67:
       for (i=0; i<=22 ; ++i)
        {
          xtemparray[i]=xgklein[i];
          ytemparray[i]=ygklein[i];
        }
        break;
        case 0x68:
       for (i=0; i<=17 ; ++i)
        {
          xtemparray[i]=xhklein[i];
          ytemparray[i]=yhklein[i];
        }
        break;
        case 0x69:
       for (i=0; i<=10 ; ++i)
        {
          xtemparray[i]=xiklein[i];
          ytemparray[i]=yiklein[i];
        }
        break;
        case 0x6a:
       for (i=0; i<=11 ; ++i)
        {
          xtemparray[i]=xjklein[i];
          ytemparray[i]=yjklein[i];
        }
        break;
        case 0x6b:
       for (i=0; i<=15 ; ++i)
        {
          xtemparray[i]=xkklein[i];
          ytemparray[i]=ykklein[i];
        }
        break;
        case 0x6c:
       for (i=0; i<=11 ; ++i)
        {
          xtemparray[i]=xlklein[i];
          ytemparray[i]=ylklein[i];
        }
        break;
        case 0x6d:
       for (i=0; i<=17 ; ++i)
        {
          xtemparray[i]=xmklein[i];
          ytemparray[i]=ymklein[i];
        }
        break;
        case 0x6e:
       for (i=0; i<=14 ; ++i)
        {
          xtemparray[i]=xnklein[i];
          ytemparray[i]=ynklein[i];
        }
        break;
        case 0x6f:
       for (i=0; i<=17 ; ++i)
        {
          xtemparray[i]=xoklein[i];
          ytemparray[i]=yoklein[i];
        }
        break;
        case 0x70:
       for (i=0; i<=17 ; ++i)
        {
          xtemparray[i]=xpklein[i];
          ytemparray[i]=ypklein[i];
        }
        break;
        case 0x71:
       for (i=0; i<=19 ; ++i)
        {
          xtemparray[i]=xqklein[i];
          ytemparray[i]=yqklein[i];
        }
        break;
        case 0x72:
       for (i=0; i<=11 ; ++i)
        {
          xtemparray[i]=xrklein[i];
          ytemparray[i]=yrklein[i];
        }
        break;
        case 0x73:
       for (i=0; i<=15 ; ++i)
        {
          xtemparray[i]=xsklein[i];
          ytemparray[i]=ysklein[i];
        }
        break;
        case 0x74:
       for (i=0; i<=13 ; ++i)
        {
          xtemparray[i]=xtklein[i];
          ytemparray[i]=ytklein[i];
        }
        break;
        case 0x75:
       for (i=0; i<=13 ; ++i)
        {
          xtemparray[i]=xuklein[i];
          ytemparray[i]=yuklein[i];
        }
        break;
        case 0x76:
       for (i=0; i<=12 ; ++i)
        {
          xtemparray[i]=xvklein[i];
          ytemparray[i]=yvklein[i];
        }
        break;
        case 0x77:
       for (i=0; i<=14 ; ++i)
        {
          xtemparray[i]=xwklein[i];
          ytemparray[i]=ywklein[i];
        }
        break;
        case 0x78:
       for (i=0; i<=14 ; ++i)
        {
          xtemparray[i]=xxklein[i];
          ytemparray[i]=yxklein[i];
        }
        break;
        case 0x79:
       for (i=0; i<=15 ; ++i)
        {
          xtemparray[i]=xyklein[i];
          ytemparray[i]=yyklein[i];
        }
        break;
        case 0x7a:
       for (i=0; i<=14 ; ++i)
        {
          xtemparray[i]=xzklein[i];
          ytemparray[i]=yzklein[i];
        }
        break;
        case 0x3f:
       for (i=0; i<=15 ; ++i)
        {
          xtemparray[i]=xfrag[i];
          ytemparray[i]=yfrag[i];
        }
        break;
        case 0x21:
       for (i=0; i<=11 ; ++i)
        {
          xtemparray[i]=xaus[i];
          ytemparray[i]=yaus[i];
        }
        break;
      }
}
