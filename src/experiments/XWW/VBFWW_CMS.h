double VBFWW_CMS(double x,double y)
{
double limit = 100000;
if (y>=0.2)
{
      return limit;
}
if ((200<=x)&&(x<=251.104)) {
      limit =0.599484+(x-200)*(1.25893-0.599484)/(251.104-200);
}
if ((251.104<=x)&&(x<=299.973)) {
      limit =1.25893+(x-251.104)*(1.84785-1.25893)/(299.973-251.104);
}
if ((299.973<=x)&&(x<=345.612)) {
      limit =1.84785+(x-299.973)*(1.12202-1.84785)/(345.612-299.973);
}
if ((345.612<=x)&&(x<=399.544)) {
      limit =1.12202+(x-345.612)*(0.328599-1.12202)/(399.544-345.612);
}
if ((399.544<=x)&&(x<=453.836)) {
      limit =0.328599+(x-399.544)*(0.229674-0.328599)/(453.836-399.544);
}
if ((453.836<=x)&&(x<=505.386)) {
      limit =0.229674+(x-453.836)*(0.215443-0.229674)/(505.386-453.836);
}
if ((505.386<=x)&&(x<=653.783)) {
      limit =0.215443+(x-505.386)*(0.050764-0.215443)/(653.783-505.386);
}
if ((653.783<=x)&&(x<=702.446)) {
      limit =0.050764+(x-653.783)*(0.0452434-0.050764)/(702.446-653.783);
}
if ((702.446<=x)&&(x<=902.77)) {
      limit =0.0452434+(x-702.446)*(0.0247996-0.0452434)/(902.77-702.446);
}
if ((902.77<=x)&&(x<=1509.75)) {
      limit =0.0247996+(x-902.77)*(0.00794328-0.0247996)/(1509.75-902.77);
}
if ((1509.75<=x)&&(x<=3000)) {
      limit =0.00794328+(x-1509.75)*(0.0030824-0.00794328)/(3000-1509.75);
}
return limit;
}