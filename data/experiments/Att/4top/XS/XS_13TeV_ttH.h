double XS_13TeV_tth(double x)
{
double limit = 0;
if ((10<=x)&&(x<=30)) {
      limit =26.69+(x-10)*(8.867-26.69)/(30-10);
}
if ((30<=x)&&(x<=70)) {
      limit =8.867+(x-30)*(2.113-8.867)/(70-30);
}
if ((70<=x)&&(x<=100)) {
      limit =2.113+(x-70)*(0.9146-2.113)/(100-70);
}
if ((100<=x)&&(x<=120)) {
      limit =0.9146+(x-100)*(0.5598-0.9146)/(120-100);
}
if ((120<=x)&&(x<=125)) {
      limit =0.5598+(x-120)*(0.4987-0.5598)/(125-120);
}
if ((125<=x)&&(x<=130)) {
      limit =0.4987+(x-125)*(0.4465-0.4987)/(130-125);
}
if ((130<=x)&&(x<=150)) {
      limit =0.4465+(x-130)*(0.2925-0.4465)/(150-130);
}
if ((150<=x)&&(x<=200)) {
      limit =0.2925+(x-150)*(0.1222-0.2925)/(200-150);
}
if ((200<=x)&&(x<=250)) {
      limit =0.1222+(x-200)*(0.06398-0.1222)/(250-200);
}
if ((250<=x)&&(x<=300)) {
      limit =0.06398+(x-250)*(0.03948-0.06398)/(300-250);
}
if ((300<=x)&&(x<=400)) {
      limit =0.03948+(x-300)*(0.01985-0.03948)/(400-300);
}
if ((400<=x)&&(x<=500)) {
      limit =0.01985+(x-400)*(0.01162-0.01985)/(500-400);
}
if ((500<=x)&&(x<=750)) {
      limit =0.01162+(x-500)*(0.00365-0.01162)/(750-500);
}
if ((750<=x)&&(x<=1000)) {
      limit =0.00365+(x-750)*(0.001263-0.00365)/(1000-750);
}
if ((1000<=x)&&(x<=1500)) {
      limit =0.001263+(x-1000)*(0.000186-0.001263)/(1500-1000);
}
if ((1500<=x)&&(x<=2000)) {
      limit =0.000186+(x-1500)*(3.308e-05-0.000186)/(2000-1500);
}
if ((2000<=x)&&(x<=2500)) {
      limit =3.308e-05+(x-2000)*(6.711e-06-3.308e-05)/(2500-2000);
}
if ((2500<=x)&&(x<=3000)) {
      limit =6.711e-06+(x-2500)*(1.466e-06-6.711e-06)/(3000-2500);
}
return limit;
}
