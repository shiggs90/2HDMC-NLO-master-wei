double Htt_CMS_0.5(double x)
{
double limit = 0;
if ((400<=x)&&(x<=425.33)) {
      limit =0.844029+(x-400)*(0.715635-0.844029)/(425.33-400);
}
if ((425.33<=x)&&(x<=449.472)) {
      limit =0.715635+(x-425.33)*(0.696021-0.715635)/(449.472-425.33);
}
if ((449.472<=x)&&(x<=474.802)) {
      limit =0.696021+(x-449.472)*(0.65626-0.696021)/(474.802-449.472);
}
if ((474.802<=x)&&(x<=499.934)) {
      limit =0.65626+(x-474.802)*(0.65506-0.65626)/(499.934-474.802);
}
if ((499.934<=x)&&(x<=524.868)) {
      limit =0.65506+(x-499.934)*(0.705085-0.65506)/(524.868-499.934);
}
if ((524.868<=x)&&(x<=550.396)) {
      limit =0.705085+(x-524.868)*(0.715395-0.705085)/(550.396-524.868);
}
if ((550.396<=x)&&(x<=574.934)) {
      limit =0.715395+(x-550.396)*(0.704989-0.715395)/(574.934-550.396);
}
if ((574.934<=x)&&(x<=600.066)) {
      limit =0.704989+(x-574.934)*(0.634724-0.704989)/(600.066-574.934);
}
if ((600.066<=x)&&(x<=624.802)) {
      limit =0.634724+(x-600.066)*(0.613382-0.634724)/(624.802-600.066);
}
if ((624.802<=x)&&(x<=649.934)) {
      limit =0.613382+(x-624.802)*(0.625996-0.613382)/(649.934-624.802);
}
if ((649.934<=x)&&(x<=725.33)) {
      limit =0.625996+(x-649.934)*(0.87506-0.625996)/(725.33-649.934);
}
if ((725.33<=x)&&(x<=750)) {
      limit =0.87506+(x-725.33)*(0.933718-0.87506)/(750-725.33);
}
return limit;
}