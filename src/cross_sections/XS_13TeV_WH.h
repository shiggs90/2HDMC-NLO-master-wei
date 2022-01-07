double XS_13TeV_wh(double x)
{
double limit = 0;
if ((10<=x)&&(x<=30)) {
      limit =1.032+(x-10)*(0.3138-1.032)/(30-10);
}
if ((30<=x)&&(x<=50)) {
      limit =0.3138+(x-30)*(0.137-0.3138)/(50-30);
}
if ((50<=x)&&(x<=70)) {
      limit =0.137+(x-50)*(0.06976-0.137)/(70-50);
}
if ((70<=x)&&(x<=90)) {
      limit =0.06976+(x-70)*(0.03907-0.06976)/(90-70);
}
if ((90<=x)&&(x<=110)) {
      limit =0.03907+(x-90)*(0.0238-0.03907)/(110-90);
}
if ((110<=x)&&(x<=125)) {
      limit =0.0238+(x-110)*(0.01713-0.0238)/(125-110);
}
if ((125<=x)&&(x<=135)) {
      limit =0.01713+(x-125)*(0.014-0.01713)/(135-125);
}
if ((135<=x)&&(x<=150)) {
      limit =0.014+(x-135)*(0.0107-0.014)/(150-135);
}
if ((150<=x)&&(x<=200)) {
      limit =0.0107+(x-150)*(0.005425-0.0107)/(200-150);
}
if ((200<=x)&&(x<=250)) {
      limit =0.005425+(x-200)*(0.003493-0.005425)/(250-200);
}
if ((250<=x)&&(x<=350)) {
      limit =0.003493+(x-250)*(0.002073-0.003493)/(350-250);
}
if ((350<=x)&&(x<=450)) {
      limit =0.002073+(x-350)*(0.00144-0.002073)/(450-350);
}
if ((450<=x)&&(x<=550)) {
      limit =0.00144+(x-450)*(0.001039-0.00144)/(550-450);
}
if ((550<=x)&&(x<=650)) {
      limit =0.001039+(x-550)*(0.0007613-0.001039)/(650-550);
}
if ((650<=x)&&(x<=750)) {
      limit =0.0007613+(x-650)*(0.0005616-0.0007613)/(750-650);
}
if ((750<=x)&&(x<=1050)) {
      limit =0.0005616+(x-750)*(0.000233-0.0005616)/(1050-750);
}
if ((1050<=x)&&(x<=2050)) {
      limit =0.000233+(x-1050)*(1.562e-05-0.000233)/(2050-1050);
}
if ((2050<=x)&&(x<=3050)) {
      limit =1.562e-05+(x-2050)*(1.178e-06-1.562e-05)/(3050-2050);
}
return limit;
}
