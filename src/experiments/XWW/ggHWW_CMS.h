double ggHWW_CMS(double x,double y)
{
double limit = 10000;
if (y>=0.2)
{
      return limit;
}

if ((200<=x)&&(x<=245.267)) {
      limit =6.81872+(x-200)*(7.59042-6.81872)/(245.267-200);
}
if ((245.267<=x)&&(x<=303.787)) {
      limit =7.59042+(x-245.267)*(4.1133-7.59042)/(303.787-245.267);
}
if ((303.787<=x)&&(x<=341.652)) {
      limit =4.1133+(x-303.787)*(1.71804-4.1133)/(341.652-303.787);
}
if ((341.652<=x)&&(x<=455.25)) {
      limit =1.71804+(x-341.652)*(0.69594-1.71804)/(455.25-341.652);
}
if ((455.25<=x)&&(x<=551.635)) {
      limit =0.69594+(x-455.25)*(0.606324-0.69594)/(551.635-455.25);
}
if ((551.635<=x)&&(x<=696.213)) {
      limit =0.606324+(x-551.635)*(0.204372-0.606324)/(696.213-551.635);
}
if ((696.213<=x)&&(x<=892.427)) {
      limit =0.204372+(x-696.213)*(0.0732394-0.204372)/(892.427-696.213);
}
if ((892.427<=x)&&(x<=1501.72)) {
      limit =0.0732394+(x-892.427)*(0.0250676-0.0732394)/(1501.72-892.427);
}
if ((1501.72<=x)&&(x<=1997.42)) {
      limit =0.0250676+(x-1501.72)*(0.0160771-0.0250676)/(1997.42-1501.72);
}
if ((1997.42<=x)&&(x<=3000)) {
      limit =0.0160771+(x-1997.42)*(0.0148919-0.0160771)/(3000-1997.42);
}
return limit;
}
