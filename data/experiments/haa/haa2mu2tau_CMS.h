double haa2mu2tau_CMS(double x)
{
//1805.04865
double limit = 10000;
double SMXS=50.5764;
if ((15<=x)&&(x<=16)) {
      limit =0.0002786+(x-15)*(0.0002806-0.0002786)/(16-15);
}
if ((16<=x)&&(x<=17)) {
      limit =0.0002806+(x-16)*(0.0002607-0.0002806)/(17-16);
}
if ((17<=x)&&(x<=18)) {
      limit =0.0002607+(x-17)*(0.00026-0.0002607)/(18-17);
}
if ((18<=x)&&(x<=19)) {
      limit =0.00026+(x-18)*(0.0002607-0.00026)/(19-18);
}
if ((19<=x)&&(x<=20)) {
      limit =0.0002607+(x-19)*(0.0002209-0.0002607)/(20-19);
}
if ((20<=x)&&(x<=21)) {
      limit =0.0002209+(x-20)*(0.0002497-0.0002209)/(21-20);
}
if ((21<=x)&&(x<=22)) {
      limit =0.0002497+(x-21)*(0.0003115-0.0002497)/(22-21);
}
if ((22<=x)&&(x<=23)) {
      limit =0.0003115+(x-22)*(0.0002429-0.0003115)/(23-22);
}
if ((23<=x)&&(x<=24)) {
      limit =0.0002429+(x-23)*(0.0002237-0.0002429)/(24-23);
}
if ((24<=x)&&(x<=25)) {
      limit =0.0002237+(x-24)*(0.0002003-0.0002237)/(25-24);
}
if ((25<=x)&&(x<=26)) {
      limit =0.0002003+(x-25)*(0.0001997-0.0002003)/(26-25);
}
if ((26<=x)&&(x<=27)) {
      limit =0.0001997+(x-26)*(0.0001997-0.0001997)/(27-26);
}
if ((27<=x)&&(x<=28)) {
      limit =0.0001997+(x-27)*(0.0002497-0.0001997)/(28-27);
}
if ((28<=x)&&(x<=29)) {
      limit =0.0002497+(x-28)*(0.0002326-0.0002497)/(29-28);
}
if ((29<=x)&&(x<=30)) {
      limit =0.0002326+(x-29)*(0.0003293-0.0002326)/(30-29);
}
if ((30<=x)&&(x<=31)) {
      limit =0.0003293+(x-30)*(0.0003259-0.0003293)/(31-30);
}
if ((31<=x)&&(x<=32)) {
      limit =0.0003259+(x-31)*(0.000376-0.0003259)/(32-31);
}
if ((32<=x)&&(x<=33)) {
      limit =0.000376+(x-32)*(0.0003136-0.000376)/(33-32);
}
if ((33<=x)&&(x<=34)) {
      limit =0.0003136+(x-33)*(0.0002175-0.0003136)/(34-33);
}
if ((34<=x)&&(x<=35)) {
      limit =0.0002175+(x-34)*(0.0002003-0.0002175)/(35-34);
}
if ((35<=x)&&(x<=36)) {
      limit =0.0002003+(x-35)*(0.0003129-0.0002003)/(36-35);
}
if ((36<=x)&&(x<=37)) {
      limit =0.0003129+(x-36)*(0.0002003-0.0003129)/(37-36);
}
if ((37<=x)&&(x<=38)) {
      limit =0.0002003+(x-37)*(0.0002998-0.0002003)/(38-37);
}
if ((38<=x)&&(x<=39)) {
      limit =0.0002998+(x-38)*(0.0002779-0.0002998)/(39-38);
}
if ((39<=x)&&(x<=40)) {
      limit =0.0002779+(x-39)*(0.0002003-0.0002779)/(40-39);
}
if ((40<=x)&&(x<=41)) {
      limit =0.0002003+(x-40)*(0.0001804-0.0002003)/(41-40);
}
if ((41<=x)&&(x<=42)) {
      limit =0.0001804+(x-41)*(0.0001811-0.0001804)/(42-41);
}
if ((42<=x)&&(x<=43)) {
      limit =0.0001811+(x-42)*(0.0002086-0.0001811)/(43-42);
}
if ((43<=x)&&(x<=44)) {
      limit =0.0002086+(x-43)*(0.0002196-0.0002086)/(44-43);
}
if ((44<=x)&&(x<=45)) {
      limit =0.0002196+(x-44)*(0.0001688-0.0002196)/(45-44);
}
if ((45<=x)&&(x<=46)) {
      limit =0.0001688+(x-45)*(0.0003383-0.0001688)/(46-45);
}
if ((46<=x)&&(x<=47)) {
      limit =0.0003383+(x-46)*(0.0004405-0.0003383)/(47-46);
}
if ((47<=x)&&(x<=48)) {
      limit =0.0004405+(x-47)*(0.00026-0.0004405)/(48-47);
}
if ((48<=x)&&(x<=49)) {
      limit =0.00026+(x-48)*(0.0003211-0.00026)/(49-48);
}
if ((49<=x)&&(x<=50)) {
      limit =0.0003211+(x-49)*(0.0002278-0.0003211)/(50-49);
}
if ((50<=x)&&(x<=51)) {
      limit =0.0002278+(x-50)*(0.0002593-0.0002278)/(51-50);
}
if ((51<=x)&&(x<=52)) {
      limit =0.0002593+(x-51)*(0.0002285-0.0002593)/(52-51);
}
if ((52<=x)&&(x<=53)) {
      limit =0.0002285+(x-52)*(0.0001695-0.0002285)/(53-52);
}
if ((53<=x)&&(x<=54)) {
      limit =0.0001695+(x-53)*(0.0001482-0.0001695)/(54-53);
}
if ((54<=x)&&(x<=55)) {
      limit =0.0001482+(x-54)*(0.0002408-0.0001482)/(55-54);
}
if ((55<=x)&&(x<=56)) {
      limit =0.0002408+(x-55)*(0.0002401-0.0002408)/(56-55);
}
if ((56<=x)&&(x<=57)) {
      limit =0.0002401+(x-56)*(0.0001791-0.0002401)/(57-56);
}
if ((57<=x)&&(x<=58)) {
      limit =0.0001791+(x-57)*(0.0001784-0.0001791)/(58-57);
}
if ((58<=x)&&(x<=59)) {
      limit =0.0001784+(x-58)*(0.0001187-0.0001784)/(59-58);
}
if ((59<=x)&&(x<=60)) {
      limit =0.0001187+(x-59)*(0.0001187-0.0001187)/(60-59);
}
if ((60<=x)&&(x<=61)) {
      limit =0.0001187+(x-60)*(0.0001784-0.0001187)/(61-60);
}
return limit*SMXS;
}
