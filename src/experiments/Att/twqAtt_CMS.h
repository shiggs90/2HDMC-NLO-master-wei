double twqAtt_CMS(double x,double y)
{
double limit = 1000000;
if (y>0.05)
{
      return limit;
}
if ((350<=x)&&(x<=369.946)) {
      limit =26.408+(x-350)*(25.6-26.408)/(369.946-350);
}
if ((369.946<=x)&&(x<=390.377)) {
      limit =25.6+(x-369.946)*(25.7245-25.6)/(390.377-369.946);
}
if ((390.377<=x)&&(x<=409.451)) {
      limit =25.7245+(x-390.377)*(24.7998-25.7245)/(409.451-390.377);
}
if ((409.451<=x)&&(x<=430.578)) {
      limit =24.7998+(x-409.451)*(22.2449-24.7998)/(430.578-409.451);
}
if ((430.578<=x)&&(x<=450.334)) {
      limit =22.2449+(x-430.578)*(21.2041-22.2449)/(450.334-430.578);
}
if ((450.334<=x)&&(x<=470.092)) {
      limit =21.2041+(x-450.334)*(19.9302-21.2041)/(470.092-450.334);
}
if ((470.092<=x)&&(x<=490.871)) {
      limit =19.9302+(x-470.092)*(18.5402-19.9302)/(490.871-470.092);
}
if ((490.871<=x)&&(x<=510.282)) {
      limit =18.5402+(x-490.871)*(18.3147-18.5402)/(510.282-490.871);
}
if ((510.282<=x)&&(x<=530.371)) {
      limit =18.3147+(x-510.282)*(18.7885-18.3147)/(530.371-510.282);
}
if ((530.371<=x)&&(x<=549.448)) {
      limit =18.7885+(x-530.371)*(17.3979-18.7885)/(549.448-530.371);
}
if ((549.448<=x)&&(x<=569.879)) {
      limit =17.3979+(x-549.448)*(17.4058-17.3979)/(569.879-549.448);
}
if ((569.879<=x)&&(x<=589.633)) {
      limit =17.4058+(x-569.879)*(16.831-17.4058)/(589.633-569.879);
}
if ((589.633<=x)&&(x<=610.408)) {
      limit =16.831+(x-589.633)*(16.14-16.831)/(610.408-589.633);
}
if ((610.408<=x)&&(x<=629.478)) {
      limit =16.14+(x-610.408)*(16.0309-16.14)/(629.478-610.408);
}
if ((629.478<=x)&&(x<=650)) {
      limit =16.0309+(x-629.478)*(15.9222-16.0309)/(650-629.478);
}
return limit/1000.;
}
