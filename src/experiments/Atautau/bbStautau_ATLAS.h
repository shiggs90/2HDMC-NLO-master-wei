double bbStautau_ATLAS(double x, double y)
{
double limit = 1000000000000;
if (y>0.05)
{
      return limit;
}
if ((200<=x)&&(x<=252.644)) {
      limit =0.199165+(x-200)*(0.105779-0.199165)/(252.644-200);
}
if ((252.644<=x)&&(x<=301.753)) {
      limit =0.105779+(x-252.644)*(0.119637-0.105779)/(301.753-252.644);
}
if ((301.753<=x)&&(x<=353.38)) {
      limit =0.119637+(x-301.753)*(0.119637-0.119637)/(353.38-301.753);
}
if ((353.38<=x)&&(x<=405.007)) {
      limit =0.119637+(x-353.38)*(0.0773225-0.119637)/(405.007-353.38);
}
if ((405.007<=x)&&(x<=504.483)) {
      limit =0.0773225+(x-405.007)*(0.0280821-0.0773225)/(504.483-405.007);
}
if ((504.483<=x)&&(x<=600.181)) {
      limit =0.0280821+(x-504.483)*(0.00737225-0.0280821)/(600.181-504.483);
}
if ((600.181<=x)&&(x<=703.435)) {
      limit =0.00737225+(x-600.181)*(0.00244816-0.00737225)/(703.435-600.181);
}
if ((703.435<=x)&&(x<=802.911)) {
      limit =0.00244816+(x-703.435)*(0.00164548-0.00244816)/(802.911-703.435);
}
if ((802.911<=x)&&(x<=1000.6)) {
      limit =0.00164548+(x-802.911)*(0.00111842-0.00164548)/(1000.6-802.911);
}
if ((1000.6<=x)&&(x<=1203.33)) {
      limit =0.00111842+(x-1000.6)*(0.000945578-0.00111842)/(1203.33-1000.6);
}
if ((1203.33<=x)&&(x<=1503.02)) {
      limit =0.000945578+(x-1203.33)*(0.00101125-0.000945578)/(1503.02-1203.33);
}
if ((1503.02<=x)&&(x<=2000.4)) {
      limit =0.00101125+(x-1503.02)*(0.00102264-0.00101125)/(2000.4-1503.02);
}
if ((2000.4<=x)&&(x<=2500)) {
      limit =0.00102264+(x-2000.4)*(0.00101125-0.00102264)/(2500-2000.4);
}
return limit;
}
