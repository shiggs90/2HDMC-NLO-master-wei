double bbSbb_CMS(double x,double y)
{
double limit = 100000000;
if (y>=0.15)
{
      return limit;
}
if ((300<=x)&&(x<=350)) {
      limit =18.8565+(x-300)*(13.8971-18.8565)/(350-300);
}
if ((350<=x)&&(x<=400)) {
      limit =13.8971+(x-350)*(5.70953-13.8971)/(400-350);
}
if ((400<=x)&&(x<=500)) {
      limit =5.70953+(x-400)*(3.90772-5.70953)/(500-400);
}
if ((500<=x)&&(x<=500.1)) {
      limit =3.90772+(x-500)*(1.84697-3.90772)/(500.1-500);
}
if ((500.1<=x)&&(x<=600)) {
      limit =1.84697+(x-500.1)*(2.02479-1.84697)/(600-500.1);
}
if ((600<=x)&&(x<=700)) {
      limit =2.02479+(x-600)*(1.46621-2.02479)/(700-600);
}
if ((700<=x)&&(x<=900)) {
      limit =1.46621+(x-700)*(0.889853-1.46621)/(900-700);
}
if ((900<=x)&&(x<=1100)) {
      limit =0.889853+(x-900)*(0.530027-0.889853)/(1100-900);
}
if ((1100<=x)&&(x<=1100.1)) {
      limit =0.530027+(x-1100)*(0.377441-0.530027)/(1100.1-1100);
}
if ((1100.1<=x)&&(x<=1300)) {
      limit =0.377441+(x-1100.1)*(0.462323-0.377441)/(1300-1100.1);
}
return limit;
}