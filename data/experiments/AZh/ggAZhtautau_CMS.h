double ggAZhtautau_CMS(double x, double y)
{
double limit = 100000;
if (y>=0.02)
{
      return limit;
}

if ((220<=x)&&(x<=240.113)) {
      limit =26.529+(x-220)*(23.4475-26.529)/(240.113-220);
}
if ((240.113<=x)&&(x<=260.041)) {
      limit =23.4475+(x-240.113)*(11.5349-23.4475)/(260.041-240.113);
}
if ((260.041<=x)&&(x<=280.124)) {
      limit =11.5349+(x-260.041)*(5.68539-11.5349)/(280.124-260.041);
}
if ((280.124<=x)&&(x<=300.051)) {
      limit =5.68539+(x-280.124)*(4.00995-5.68539)/(300.051-280.124);
}
if ((300.051<=x)&&(x<=320.288)) {
      limit =4.00995+(x-300.051)*(4.70701-4.00995)/(320.288-300.051);
}
if ((320.288<=x)&&(x<=339.907)) {
      limit =4.70701+(x-320.288)*(6.81023-4.70701)/(339.907-320.288);
}
if ((339.907<=x)&&(x<=350.103)) {
      limit =6.81023+(x-339.907)*(6.32394-6.81023)/(350.103-339.907);
}
if ((350.103<=x)&&(x<=400)) {
      limit =6.32394+(x-350.103)*(4.33217-6.32394)/(400-350.103);
}
return limit/1000.0;
}