double ggAzhbb_ATLAS(double x, double y)
{
double limit = 100000;  // mean no constraints;
if(y<=0.1){
    if ((216.68<=x)&&(x<=237.884)) {
          limit =0.544938+(x-216.68)*(0.80848-0.544938)/(237.884-216.68);
    }
    if ((237.884<=x)&&(x<=260.097)) {
          limit =0.80848+(x-237.884)*(0.676638-0.80848)/(260.097-237.884);
    }
    if ((260.097<=x)&&(x<=280.291)) {
          limit =0.676638+(x-260.097)*(0.42395-0.676638)/(280.291-260.097);
    }
    if ((280.291<=x)&&(x<=300.485)) {
          limit =0.42395+(x-280.291)*(0.293183-0.42395)/(300.485-280.291);
    }
    if ((300.485<=x)&&(x<=320.679)) {
          limit =0.293183+(x-300.485)*(0.407278-0.293183)/(320.679-300.485);
    }
    if ((320.679<=x)&&(x<=340.872)) {
          limit =0.407278+(x-320.679)*(0.157845-0.407278)/(340.872-320.679);
    }
    if ((340.872<=x)&&(x<=359.047)) {
          limit =0.157845+(x-340.872)*(0.184796-0.157845)/(359.047-340.872);
    }
    if ((359.047<=x)&&(x<=378.455)) {
          limit =0.184796+(x-359.047)*(0.241907-0.184796)/(378.455-359.047);
    }
    if ((378.455<=x)&&(x<=400.893)) {
          limit =0.241907+(x-378.455)*(0.226836-0.241907)/(400.893-378.455);
    }
    if ((400.893<=x)&&(x<=421.227)) {
          limit =0.226836+(x-400.893)*(0.230946-0.226836)/(421.227-400.893);
    }
    if ((421.227<=x)&&(x<=439.458)) {
          limit =0.230946+(x-421.227)*(0.208797-0.230946)/(439.458-421.227);
    }
    if ((439.458<=x)&&(x<=463.298)) {
          limit =0.208797+(x-439.458)*(0.132161-0.208797)/(463.298-439.458);
    }
    if ((463.298<=x)&&(x<=479.425)) {
          limit =0.132161+(x-463.298)*(0.0810292-0.132161)/(479.425-463.298);
    }
    if ((479.425<=x)&&(x<=499.759)) {
          limit =0.0810292+(x-479.425)*(0.111538-0.0810292)/(499.759-479.425);
    }
    if ((499.759<=x)&&(x<=550.243)) {
          limit =0.111538+(x-499.759)*(0.0553906-0.111538)/(550.243-499.759);
    }
    if ((550.243<=x)&&(x<=600.728)) {
          limit =0.0553906+(x-550.243)*(0.0189976-0.0553906)/(600.728-550.243);
    }
    if ((600.728<=x)&&(x<=650.512)) {
          limit =0.0189976+(x-600.728)*(0.0185538-0.0189976)/(650.512-600.728);
    }
    if ((650.512<=x)&&(x<=698.192)) {
          limit =0.0185538+(x-650.512)*(0.0141585-0.0185538)/(698.192-650.512);
    }
    if ((698.192<=x)&&(x<=747.975)) {
          limit =0.0141585+(x-698.192)*(0.0130302-0.0141585)/(747.975-698.192);
    }
    if ((747.975<=x)&&(x<=798.46)) {
          limit =0.0130302+(x-747.975)*(0.00843472-0.0130302)/(798.46-747.975);
    }
    if ((798.46<=x)&&(x<=847.542)) {
          limit =0.00843472+(x-798.46)*(0.00984487-0.00843472)/(847.542-798.46);
    }
    if ((847.542<=x)&&(x<=898.728)) {
          limit =0.00984487+(x-847.542)*(0.0115959-0.00984487)/(898.728-847.542);
    }
    if ((898.728<=x)&&(x<=949.914)) {
          limit =0.0115959+(x-898.728)*(0.0126953-0.0115959)/(949.914-898.728);
    }
    if ((949.914<=x)&&(x<=1001.8)) {
          limit =0.0126953+(x-949.914)*(0.0101401-0.0126953)/(1001.8-949.914);
    }
    if ((1001.8<=x)&&(x<=1097.86)) {
          limit =0.0101401+(x-1001.8)*(0.00541374-0.0101401)/(1097.86-1001.8);
    }
    if ((1097.86<=x)&&(x<=1200.23)) {
          limit =0.00541374+(x-1097.86)*(0.00764933-0.00541374)/(1200.23-1097.86);
    }
    if ((1200.23<=x)&&(x<=1299.1)) {
          limit =0.00764933+(x-1200.23)*(0.00602209-0.00764933)/(1299.1-1200.23);
    }
    if ((1299.1<=x)&&(x<=1400.07)) {
          limit =0.00602209+(x-1299.1)*(0.00478438-0.00602209)/(1400.07-1299.1);
    }
    if ((1400.07<=x)&&(x<=1498.93)) {
          limit =0.00478438+(x-1400.07)*(0.00337536-0.00478438)/(1498.93-1400.07);
    }
    if ((1498.93<=x)&&(x<=1600.6)) {
          limit =0.00337536+(x-1498.93)*(0.00240305-0.00337536)/(1600.6-1498.93);
    }
    if ((1600.6<=x)&&(x<=1700.17)) {
          limit =0.00240305+(x-1600.6)*(0.00211112-0.00240305)/(1700.17-1600.6);
    }
    if ((1700.17<=x)&&(x<=1796.23)) {
          limit =0.00211112+(x-1700.17)*(0.0020983-0.00211112)/(1796.23-1700.17);
    }
    if ((1796.23<=x)&&(x<=1902.11)) {
          limit =0.0020983+(x-1796.23)*(0.0019921-0.0020983)/(1902.11-1796.23);
    }
    if ((1902.11<=x)&&(x<=1998.87)) {
          limit =0.0019921+(x-1902.11)*(0.00181533-0.0019921)/(1998.87-1902.11);
    }
}
return limit;
}
