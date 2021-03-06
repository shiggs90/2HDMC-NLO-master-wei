double XS_13TeV_tth(double x)
{
double limit = 0;
if ((10<=x)&&(x<=15)) {
      limit =1.952+(x-10)*(1.348-1.952)/(15-10);
}
if ((15<=x)&&(x<=20)) {
      limit =1.348+(x-15)*(0.9907-1.348)/(20-15);
}
if ((20<=x)&&(x<=30)) {
      limit =0.9907+(x-20)*(0.5962-0.9907)/(30-20);
}
if ((30<=x)&&(x<=45)) {
      limit =0.5962+(x-30)*(0.3293-0.5962)/(45-30);
}
if ((45<=x)&&(x<=70)) {
      limit =0.3293+(x-45)*(0.1636-0.3293)/(70-45);
}
if ((70<=x)&&(x<=100)) {
      limit =0.1636+(x-70)*(0.09882-0.1636)/(100-70);
}
if ((100<=x)&&(x<=150)) {
      limit =0.09882+(x-100)*(0.06578-0.09882)/(150-100);
}
if ((150<=x)&&(x<=200)) {
      limit =0.06578+(x-150)*(0.05284-0.06578)/(200-150);
}
if ((200<=x)&&(x<=300)) {
      limit =0.05284+(x-200)*(0.03774-0.05284)/(300-200);
}
if ((300<=x)&&(x<=450)) {
      limit =0.03774+(x-300)*(0.0231-0.03774)/(450-300);
}
if ((450<=x)&&(x<=700)) {
      limit =0.0231+(x-450)*(0.01043-0.0231)/(700-450);
}
if ((700<=x)&&(x<=1000)) {
      limit =0.01043+(x-700)*(0.004275-0.01043)/(1000-700);
}
if ((1000<=x)&&(x<=1500)) {
      limit =0.004275+(x-1000)*(0.001101-0.004275)/(1500-1000);
}
if ((1500<=x)&&(x<=2000)) {
      limit =0.001101+(x-1500)*(0.0003111-0.001101)/(2000-1500);
}
if ((2000<=x)&&(x<=3000)) {
      limit =0.0003111+(x-2000)*(2.82e-05-0.0003111)/(3000-2000);
}
return limit;
}
