double haa2b2mu_ATLAS(double x)
{
double limit = 10000;
double SMXS=50.5764;
if ((20<=x)&&(x<=20.5)) {
      limit =0.0003258+(x-20)*(0.0003584-0.0003258)/(20.5-20);
}
if ((20.5<=x)&&(x<=21)) {
      limit =0.0003584+(x-20.5)*(0.0003909-0.0003584)/(21-20.5);
}
if ((21<=x)&&(x<=21.5)) {
      limit =0.0003909+(x-21)*(0.0003533-0.0003909)/(21.5-21);
}
if ((21.5<=x)&&(x<=22)) {
      limit =0.0003533+(x-21.5)*(0.0003157-0.0003533)/(22-21.5);
}
if ((22<=x)&&(x<=22.5)) {
      limit =0.0003157+(x-22)*(0.0002459-0.0003157)/(22.5-22);
}
if ((22.5<=x)&&(x<=23)) {
      limit =0.0002459+(x-22.5)*(0.000176-0.0002459)/(23-22.5);
}
if ((23<=x)&&(x<=23.5)) {
      limit =0.000176+(x-23)*(0.0001535-0.000176)/(23.5-23);
}
if ((23.5<=x)&&(x<=24)) {
      limit =0.0001535+(x-23.5)*(0.000131-0.0001535)/(24-23.5);
}
if ((24<=x)&&(x<=24.5)) {
      limit =0.000131+(x-24)*(0.0001249-0.000131)/(24.5-24);
}
if ((24.5<=x)&&(x<=25)) {
      limit =0.0001249+(x-24.5)*(0.0001189-0.0001249)/(25-24.5);
}
if ((25<=x)&&(x<=25.5)) {
      limit =0.0001189+(x-25)*(0.0001243-0.0001189)/(25.5-25);
}
if ((25.5<=x)&&(x<=26)) {
      limit =0.0001243+(x-25.5)*(0.0001298-0.0001243)/(26-25.5);
}
if ((26<=x)&&(x<=26.5)) {
      limit =0.0001298+(x-26)*(0.0001292-0.0001298)/(26.5-26);
}
if ((26.5<=x)&&(x<=27)) {
      limit =0.0001292+(x-26.5)*(0.0001286-0.0001292)/(27-26.5);
}
if ((27<=x)&&(x<=27.5)) {
      limit =0.0001286+(x-27)*(0.0002144-0.0001286)/(27.5-27);
}
if ((27.5<=x)&&(x<=28)) {
      limit =0.0002144+(x-27.5)*(0.0003003-0.0002144)/(28-27.5);
}
if ((28<=x)&&(x<=28.5)) {
      limit =0.0003003+(x-28)*(0.00031-0.0003003)/(28.5-28);
}
if ((28.5<=x)&&(x<=29)) {
      limit =0.00031+(x-28.5)*(0.0003197-0.00031)/(29-28.5);
}
if ((29<=x)&&(x<=29.5)) {
      limit =0.0003197+(x-29)*(0.0002578-0.0003197)/(29.5-29);
}
if ((29.5<=x)&&(x<=30)) {
      limit =0.0002578+(x-29.5)*(0.0001959-0.0002578)/(30-29.5);
}
if ((30<=x)&&(x<=30.5)) {
      limit =0.0001959+(x-30)*(0.0002385-0.0001959)/(30.5-30);
}
if ((30.5<=x)&&(x<=31)) {
      limit =0.0002385+(x-30.5)*(0.0002811-0.0002385)/(31-30.5);
}
if ((31<=x)&&(x<=31.5)) {
      limit =0.0002811+(x-31)*(0.0002509-0.0002811)/(31.5-31);
}
if ((31.5<=x)&&(x<=32)) {
      limit =0.0002509+(x-31.5)*(0.0002207-0.0002509)/(32-31.5);
}
if ((32<=x)&&(x<=32.5)) {
      limit =0.0002207+(x-32)*(0.0002176-0.0002207)/(32.5-32);
}
if ((32.5<=x)&&(x<=33)) {
      limit =0.0002176+(x-32.5)*(0.0002145-0.0002176)/(33-32.5);
}
if ((33<=x)&&(x<=33.5)) {
      limit =0.0002145+(x-33)*(0.0002215-0.0002145)/(33.5-33);
}
if ((33.5<=x)&&(x<=34)) {
      limit =0.0002215+(x-33.5)*(0.0002285-0.0002215)/(34-33.5);
}
if ((34<=x)&&(x<=34.5)) {
      limit =0.0002285+(x-34)*(0.0002458-0.0002285)/(34.5-34);
}
if ((34.5<=x)&&(x<=35)) {
      limit =0.0002458+(x-34.5)*(0.0002631-0.0002458)/(35-34.5);
}
if ((35<=x)&&(x<=35.5)) {
      limit =0.0002631+(x-35)*(0.0003539-0.0002631)/(35.5-35);
}
if ((35.5<=x)&&(x<=36)) {
      limit =0.0003539+(x-35.5)*(0.0004447-0.0003539)/(36-35.5);
}
if ((36<=x)&&(x<=36.5)) {
      limit =0.0004447+(x-36)*(0.0005164-0.0004447)/(36.5-36);
}
if ((36.5<=x)&&(x<=37)) {
      limit =0.0005164+(x-36.5)*(0.0005881-0.0005164)/(37-36.5);
}
if ((37<=x)&&(x<=37.5)) {
      limit =0.0005881+(x-37)*(0.0006275-0.0005881)/(37.5-37);
}
if ((37.5<=x)&&(x<=38)) {
      limit =0.0006275+(x-37.5)*(0.0006668-0.0006275)/(38-37.5);
}
if ((38<=x)&&(x<=38.5)) {
      limit =0.0006668+(x-38)*(0.0005462-0.0006668)/(38.5-38);
}
if ((38.5<=x)&&(x<=39)) {
      limit =0.0005462+(x-38.5)*(0.0004255-0.0005462)/(39-38.5);
}
if ((39<=x)&&(x<=39.5)) {
      limit =0.0004255+(x-39)*(0.0004688-0.0004255)/(39.5-39);
}
if ((39.5<=x)&&(x<=40)) {
      limit =0.0004688+(x-39.5)*(0.0005122-0.0004688)/(40-39.5);
}
if ((40<=x)&&(x<=40.5)) {
      limit =0.0005122+(x-40)*(0.0006167-0.0005122)/(40.5-40);
}
if ((40.5<=x)&&(x<=41)) {
      limit =0.0006167+(x-40.5)*(0.0007213-0.0006167)/(41-40.5);
}
if ((41<=x)&&(x<=41.5)) {
      limit =0.0007213+(x-41)*(0.0007561-0.0007213)/(41.5-41);
}
if ((41.5<=x)&&(x<=42)) {
      limit =0.0007561+(x-41.5)*(0.0006282-0.0007561)/(42-41.5);
}
if ((42<=x)&&(x<=42.5)) {
      limit =0.0006282+(x-42)*(0.0004971-0.0006282)/(42.5-42);
}
if ((42.5<=x)&&(x<=43)) {
      limit =0.0004971+(x-42.5)*(0.000366-0.0004971)/(43-42.5);
}
if ((43<=x)&&(x<=43.5)) {
      limit =0.000366+(x-43)*(0.0003226-0.000366)/(43.5-43);
}
if ((43.5<=x)&&(x<=44)) {
      limit =0.0003226+(x-43.5)*(0.0002793-0.0003226)/(44-43.5);
}
if ((44<=x)&&(x<=44.5)) {
      limit =0.0002793+(x-44)*(0.000275-0.0002793)/(44.5-44);
}
if ((44.5<=x)&&(x<=45)) {
      limit =0.000275+(x-44.5)*(0.0003217-0.000275)/(45-44.5);
}
if ((45<=x)&&(x<=45.5)) {
      limit =0.0003217+(x-45)*(0.0004162-0.0003217)/(45.5-45);
}
if ((45.5<=x)&&(x<=46)) {
      limit =0.0004162+(x-45.5)*(0.0005106-0.0004162)/(46-45.5);
}
if ((46<=x)&&(x<=46.5)) {
      limit =0.0005106+(x-46)*(0.0005606-0.0005106)/(46.5-46);
}
if ((46.5<=x)&&(x<=47)) {
      limit =0.0005606+(x-46.5)*(0.0006107-0.0005606)/(47-46.5);
}
if ((47<=x)&&(x<=47.5)) {
      limit =0.0006107+(x-47)*(0.0006295-0.0006107)/(47.5-47);
}
if ((47.5<=x)&&(x<=48)) {
      limit =0.0006295+(x-47.5)*(0.0006482-0.0006295)/(48-47.5);
}
if ((48<=x)&&(x<=48.5)) {
      limit =0.0006482+(x-48)*(0.0006472-0.0006482)/(48.5-48);
}
if ((48.5<=x)&&(x<=49)) {
      limit =0.0006472+(x-48.5)*(0.0006462-0.0006472)/(49-48.5);
}
if ((49<=x)&&(x<=49.5)) {
      limit =0.0006462+(x-49)*(0.0007518-0.0006462)/(49.5-49);
}
if ((49.5<=x)&&(x<=50)) {
      limit =0.0007518+(x-49.5)*(0.0008573-0.0007518)/(50-49.5);
}
if ((50<=x)&&(x<=50.5)) {
      limit =0.0008573+(x-50)*(0.0008655-0.0008573)/(50.5-50);
}
if ((50.5<=x)&&(x<=51)) {
      limit =0.0008655+(x-50.5)*(0.0007876-0.0008655)/(51-50.5);
}
if ((51<=x)&&(x<=51.5)) {
      limit =0.0007876+(x-51)*(0.0006991-0.0007876)/(51.5-51);
}
if ((51.5<=x)&&(x<=52)) {
      limit =0.0006991+(x-51.5)*(0.0006107-0.0006991)/(52-51.5);
}
if ((52<=x)&&(x<=52.5)) {
      limit =0.0006107+(x-52)*(0.0005148-0.0006107)/(52.5-52);
}
if ((52.5<=x)&&(x<=53)) {
      limit =0.0005148+(x-52.5)*(0.0004189-0.0005148)/(53-52.5);
}
if ((53<=x)&&(x<=53.5)) {
      limit =0.0004189+(x-53)*(0.0003582-0.0004189)/(53.5-53);
}
if ((53.5<=x)&&(x<=54)) {
      limit =0.0003582+(x-53.5)*(0.0002974-0.0003582)/(54-53.5);
}
if ((54<=x)&&(x<=54.5)) {
      limit =0.0002974+(x-54)*(0.0002924-0.0002974)/(54.5-54);
}
if ((54.5<=x)&&(x<=55)) {
      limit =0.0002924+(x-54.5)*(0.0002873-0.0002924)/(55-54.5);
}
if ((55<=x)&&(x<=55.5)) {
      limit =0.0002873+(x-55)*(0.0003012-0.0002873)/(55.5-55);
}
if ((55.5<=x)&&(x<=56)) {
      limit =0.0003012+(x-55.5)*(0.000315-0.0003012)/(56-55.5);
}
if ((56<=x)&&(x<=56.5)) {
      limit =0.000315+(x-56)*(0.0003289-0.000315)/(56.5-56);
}
if ((56.5<=x)&&(x<=57)) {
      limit =0.0003289+(x-56.5)*(0.0003504-0.0003289)/(57-56.5);
}
if ((57<=x)&&(x<=57.5)) {
      limit =0.0003504+(x-57)*(0.0003719-0.0003504)/(57.5-57);
}
if ((57.5<=x)&&(x<=58)) {
      limit =0.0003719+(x-57.5)*(0.0003934-0.0003719)/(58-57.5);
}
if ((58<=x)&&(x<=58.5)) {
      limit =0.0003934+(x-58)*(0.0003885-0.0003934)/(58.5-58);
}
if ((58.5<=x)&&(x<=59)) {
      limit =0.0003885+(x-58.5)*(0.0003836-0.0003885)/(59-58.5);
}
if ((59<=x)&&(x<=59.5)) {
      limit =0.0003836+(x-59)*(0.0003599-0.0003836)/(59.5-59);
}
if ((59.5<=x)&&(x<=60)) {
      limit =0.0003599+(x-59.5)*(0.0003362-0.0003599)/(60-59.5);
}
return limit*SMXS;
}
