double Htt_CMS_1(double x)
{
double limit = 0;
if ((400<=x)&&(x<=425.156)) {
      limit =1.05288+(x-400)*(0.886567-1.05288)/(425.156-400);
}
if ((425.156<=x)&&(x<=449.603)) {
      limit =0.886567+(x-425.156)*(0.855864-0.886567)/(449.603-425.156);
}
if ((449.603<=x)&&(x<=475.221)) {
      limit =0.855864+(x-449.603)*(0.796162-0.855864)/(475.221-449.603);
}
if ((475.221<=x)&&(x<=499.681)) {
      limit =0.796162+(x-475.221)*(0.78678-0.796162)/(499.681-475.221);
}
if ((499.681<=x)&&(x<=525.132)) {
      limit =0.78678+(x-499.681)*(0.846482-0.78678)/(525.132-499.681);
}
if ((525.132<=x)&&(x<=575.262)) {
      limit =0.846482+(x-525.132)*(0.865245-0.846482)/(575.262-525.132);
}
if ((575.262<=x)&&(x<=599.906)) {
      limit =0.865245+(x-575.262)*(0.765458-0.865245)/(599.906-575.262);
}
if ((599.906<=x)&&(x<=625.067)) {
      limit =0.765458+(x-599.906)*(0.736461-0.765458)/(625.067-599.906);
}
if ((625.067<=x)&&(x<=650.246)) {
      limit =0.736461+(x-625.067)*(0.738166-0.736461)/(650.246-625.067);
}
if ((650.246<=x)&&(x<=675.239)) {
      limit =0.738166+(x-650.246)*(0.826013-0.738166)/(675.239-650.246);
}
if ((675.239<=x)&&(x<=724.776)) {
      limit =0.826013+(x-675.239)*(1.04606-0.826013)/(724.776-675.239);
}
if ((724.776<=x)&&(x<=750)) {
      limit =1.04606+(x-724.776)*(1.11514-1.04606)/(750-724.776);
}
return limit;
}
