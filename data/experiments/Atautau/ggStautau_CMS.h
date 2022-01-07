double ggStautau_CMS(double x, double y)
{
double limit = 1000000000000;
if (y>0.05)
{
      return limit;
}

if ((90<=x)&&(x<=100.031)) {
      limit =17.0314+(x-90)*(25.3203-17.0314)/(100.031-90);
}
if ((100.031<=x)&&(x<=110.27)) {
      limit =25.3203+(x-100.031)*(13.6918-25.3203)/(110.27-100.031);
}
if ((110.27<=x)&&(x<=120.003)) {
      limit =13.6918+(x-110.27)*(8.45086-13.6918)/(120.003-110.27);
}
if ((120.003<=x)&&(x<=130.595)) {
      limit =8.45086+(x-120.003)*(4.82565-8.45086)/(130.595-120.003);
}
if ((130.595<=x)&&(x<=141.081)) {
      limit =4.82565+(x-130.595)*(2.82067-4.82565)/(141.081-130.595);
}
if ((141.081<=x)&&(x<=161.349)) {
      limit =2.82067+(x-141.081)*(1.80984-2.82067)/(161.349-141.081);
}
if ((161.349<=x)&&(x<=180.169)) {
      limit =1.80984+(x-161.349)*(1.29495-1.80984)/(180.169-161.349);
}
if ((180.169<=x)&&(x<=200.816)) {
      limit =1.29495+(x-180.169)*(0.830933-1.29495)/(200.816-180.169);
}
if ((200.816<=x)&&(x<=249.936)) {
      limit =0.830933+(x-200.816)*(0.576184-0.830933)/(249.936-200.816);
}
if ((249.936<=x)&&(x<=349.921)) {
      limit =0.576184+(x-249.936)*(0.111517-0.576184)/(349.921-249.936);
}
if ((349.921<=x)&&(x<=399.456)) {
      limit =0.111517+(x-349.921)*(0.0738151-0.111517)/(399.456-349.921);
}
if ((399.456<=x)&&(x<=450.17)) {
      limit =0.0738151+(x-399.456)*(0.062673-0.0738151)/(450.17-399.456);
}
if ((450.17<=x)&&(x<=498.08)) {
      limit =0.062673+(x-450.17)*(0.0570743-0.062673)/(498.08-450.17);
}
if ((498.08<=x)&&(x<=596.431)) {
      limit =0.0570743+(x-498.08)*(0.0492126-0.0570743)/(596.431-498.08);
}
if ((596.431<=x)&&(x<=702.481)) {
      limit =0.0492126+(x-596.431)*(0.0352078-0.0492126)/(702.481-596.431);
}
if ((702.481<=x)&&(x<=800.45)) {
      limit =0.0352078+(x-702.481)*(0.0244184-0.0352078)/(800.45-702.481);
}
if ((800.45<=x)&&(x<=900.417)) {
      limit =0.0244184+(x-800.45)*(0.0172015-0.0244184)/(900.417-800.45);
}
if ((900.417<=x)&&(x<=1001.76)) {
      limit =0.0172015+(x-900.417)*(0.0135122-0.0172015)/(1001.76-900.417);
}
if ((1001.76<=x)&&(x<=1206.2)) {
      limit =0.0135122+(x-1001.76)*(0.00880487-0.0135122)/(1206.2-1001.76);
}
if ((1206.2<=x)&&(x<=1399.92)) {
      limit =0.00880487+(x-1206.2)*(0.00649851-0.00880487)/(1399.92-1206.2);
}
if ((1399.92<=x)&&(x<=1601.04)) {
      limit =0.00649851+(x-1399.92)*(0.00502563-0.00649851)/(1601.04-1399.92);
}
if ((1601.04<=x)&&(x<=1797.68)) {
      limit =0.00502563+(x-1601.04)*(0.00423399-0.00502563)/(1797.68-1601.04);
}
if ((1797.68<=x)&&(x<=2007.37)) {
      limit =0.00423399+(x-1797.68)*(0.00382581-0.00423399)/(2007.37-1797.68);
}
if ((2007.37<=x)&&(x<=2295.75)) {
      limit =0.00382581+(x-2007.37)*(0.00370751-0.00382581)/(2295.75-2007.37);
}
if ((2295.75<=x)&&(x<=2596.74)) {
      limit =0.00370751+(x-2295.75)*(0.00356511-0.00370751)/(2596.74-2295.75);
}
if ((2596.74<=x)&&(x<=2904.98)) {
      limit =0.00356511+(x-2596.74)*(0.00350922-0.00356511)/(2904.98-2596.74);
}
if ((2904.98<=x)&&(x<=3200)) {
      limit =0.00350922+(x-2904.98)*(0.00332252-0.00350922)/(3200-2904.98);
}
return limit;
}
