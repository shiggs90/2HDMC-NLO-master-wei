double Xyy_high_low_ATLAS(double x,double y)
{
double limit = 1000000;
if (y<=0.02)
{     
      if ((65<=x)&&(x<=65.6707)) {
            limit =88.2895+(x-65)*(96.3158-88.2895)/(65.6707-65);
      }
      if ((65.6707<=x)&&(x<=66.029)) {
            limit =96.3158+(x-65.6707)*(99.0789-96.3158)/(66.029-65.6707);
      }
      if ((66.029<=x)&&(x<=66.4709)) {
            limit =99.0789+(x-66.029)*(100.658-99.0789)/(66.4709-66.029);
      }
      if ((66.4709<=x)&&(x<=66.8696)) {
            limit =100.658+(x-66.4709)*(99.7368-100.658)/(66.8696-66.4709);
      }
      if ((66.8696<=x)&&(x<=67.1837)) {
            limit =99.7368+(x-66.8696)*(97.2368-99.7368)/(67.1837-66.8696);
      }
      if ((67.1837<=x)&&(x<=67.5384)) {
            limit =97.2368+(x-67.1837)*(91.3158-97.2368)/(67.5384-67.1837);
      }
      if ((67.5384<=x)&&(x<=67.8929)) {
            limit =91.3158+(x-67.5384)*(85.1316-91.3158)/(67.8929-67.5384);
      }
      if ((67.8929<=x)&&(x<=68.2878)) {
            limit =85.1316+(x-67.8929)*(74.8684-85.1316)/(68.2878-67.8929);
      }
      if ((68.2878<=x)&&(x<=68.6401)) {
            limit =74.8684+(x-68.2878)*(63.5526-74.8684)/(68.6401-68.2878);
      }
      if ((68.6401<=x)&&(x<=68.8256)) {
            limit =63.5526+(x-68.6401)*(55-63.5526)/(68.8256-68.6401);
      }
      if ((68.8256<=x)&&(x<=69.4532)) {
            limit =55+(x-68.8256)*(48.5526-55)/(69.4532-68.8256);
      }
      if ((69.4532<=x)&&(x<=69.9568)) {
            limit =48.5526+(x-69.4532)*(47.2368-48.5526)/(69.9568-69.4532);
      }
      if ((69.9568<=x)&&(x<=70.2518)) {
            limit =47.2368+(x-69.9568)*(49.3421-47.2368)/(70.2518-69.9568);
      }
      if ((70.2518<=x)&&(x<=71.8369)) {
            limit =49.3421+(x-70.2518)*(71.8421-49.3421)/(71.8369-70.2518);
      }
      if ((71.8369<=x)&&(x<=72.2362)) {
            limit =71.8421+(x-71.8369)*(72.2368-71.8421)/(72.2362-71.8369);
      }
      if ((72.2362<=x)&&(x<=72.5928)) {
            limit =72.2368+(x-72.2362)*(70.7895-72.2368)/(72.5928-72.2362);
      }
      if ((72.5928<=x)&&(x<=73.095)) {
            limit =70.7895+(x-72.5928)*(66.0526-70.7895)/(73.095-72.5928);
      }
      if ((73.095<=x)&&(x<=74.0352)) {
            limit =66.0526+(x-73.095)*(53.6842-66.0526)/(74.0352-73.095);
      }
      if ((74.0352<=x)&&(x<=74.8099)) {
            limit =53.6842+(x-74.0352)*(47.5-53.6842)/(74.8099-74.0352);
      }
      if ((74.8099<=x)&&(x<=75.7746)) {
            limit =47.5+(x-74.8099)*(43.5526-47.5)/(75.7746-74.8099);
      }
      if ((75.7746<=x)&&(x<=76.7196)) {
            limit =43.5526+(x-75.7746)*(42.6316-43.5526)/(76.7196-75.7746);
      }
      if ((76.7196<=x)&&(x<=77.4761)) {
            limit =42.6316+(x-76.7196)*(43.1579-42.6316)/(77.4761-76.7196);
      }
      if ((77.4761<=x)&&(x<=78.6952)) {
            limit =43.1579+(x-77.4761)*(44.6053-43.1579)/(78.6952-77.4761);
      }
      if ((78.6952<=x)&&(x<=79.7039)) {
            limit =44.6053+(x-78.6952)*(45.3947-44.6053)/(79.7039-78.6952);
      }
      if ((79.7039<=x)&&(x<=80.5859)) {
            limit =45.3947+(x-79.7039)*(44.4737-45.3947)/(80.5859-79.7039);
      }
      if ((80.5859<=x)&&(x<=81.6986)) {
            limit =44.4737+(x-80.5859)*(42.6316-44.4737)/(81.6986-80.5859);
      }
      if ((81.6986<=x)&&(x<=82.3283)) {
            limit =42.6316+(x-81.6986)*(41.4474-42.6316)/(82.3283-81.6986);
      }
      if ((82.3283<=x)&&(x<=82.9587)) {
            limit =41.4474+(x-82.3283)*(41.7105-41.4474)/(82.9587-82.3283);
      }
      if ((82.9587<=x)&&(x<=83.5897)) {
            limit =41.7105+(x-82.9587)*(43.5526-41.7105)/(83.5897-82.9587);
      }
      if ((83.5897<=x)&&(x<=84.3049)) {
            limit =43.5526+(x-83.5897)*(45.6579-43.5526)/(84.3049-83.5897);
      }
      if ((84.3049<=x)&&(x<=84.9367)) {
            limit =45.6579+(x-84.3049)*(49.3421-45.6579)/(84.9367-84.3049);
      }
      if ((84.9367<=x)&&(x<=85.7988)) {
            limit =49.3421+(x-84.9367)*(51.0526-49.3421)/(85.7988-84.9367);
      }
      if ((85.7988<=x)&&(x<=86.3655)) {
            limit =51.0526+(x-85.7988)*(49.8684-51.0526)/(86.3655-85.7988);
      }
      if ((86.3655<=x)&&(x<=86.8057)) {
            limit =49.8684+(x-86.3655)*(47.6316-49.8684)/(86.8057-86.3655);
      }
      if ((86.8057<=x)&&(x<=87.3097)) {
            limit =47.6316+(x-86.8057)*(46.9737-47.6316)/(87.3097-86.8057);
      }
      if ((87.3097<=x)&&(x<=87.835)) {
            limit =46.9737+(x-87.3097)*(47.3684-46.9737)/(87.835-87.3097);
      }
      if ((87.835<=x)&&(x<=88.2147)) {
            limit =47.3684+(x-87.835)*(51.0526-47.3684)/(88.2147-87.835);
      }
      if ((88.2147<=x)&&(x<=88.5129)) {
            limit =51.0526+(x-88.2147)*(60.6579-51.0526)/(88.5129-88.2147);
      }
      if ((88.5129<=x)&&(x<=88.8751)) {
            limit =60.6579+(x-88.5129)*(72.7632-60.6579)/(88.8751-88.5129);
      }
      if ((88.8751<=x)&&(x<=89.6566)) {
            limit =72.7632+(x-88.8751)*(82.6316-72.7632)/(89.6566-88.8751);
      }
      if ((89.6566<=x)&&(x<=90.0563)) {
            limit =82.6316+(x-89.6566)*(84.0789-82.6316)/(90.0563-89.6566);
      }
      if ((90.0563<=x)&&(x<=90.3079)) {
            limit =84.0789+(x-90.0563)*(82.8947-84.0789)/(90.3079-90.0563);
      }
      if ((90.3079<=x)&&(x<=90.8092)) {
            limit =82.8947+(x-90.3079)*(75.9211-82.8947)/(90.8092-90.3079);
      }
      if ((90.8092<=x)&&(x<=91.3526)) {
            limit =75.9211+(x-90.8092)*(69.0789-75.9211)/(91.3526-90.8092);
      }
      if ((91.3526<=x)&&(x<=92.2527)) {
            limit =69.0789+(x-91.3526)*(61.4474-69.0789)/(92.2527-91.3526);
      }
      if ((92.2527<=x)&&(x<=92.9881)) {
            limit =61.4474+(x-92.2527)*(61.7105-61.4474)/(92.9881-92.2527);
      }
      if ((92.9881<=x)&&(x<=94.8368)) {
            limit =61.7105+(x-92.9881)*(61.5789-61.7105)/(94.8368-92.9881);
      }
      if ((94.8368<=x)&&(x<=96.2638)) {
            limit =61.5789+(x-94.8368)*(57.8947-61.5789)/(96.2638-94.8368);
      }
      if ((96.2638<=x)&&(x<=97.5426)) {
            limit =57.8947+(x-96.2638)*(51.3158-57.8947)/(97.5426-96.2638);
      }
      if ((97.5426<=x)&&(x<=98.2752)) {
            limit =51.3158+(x-97.5426)*(44.8684-51.3158)/(98.2752-97.5426);
      }
      if ((98.2752<=x)&&(x<=98.8806)) {
            limit =44.8684+(x-98.2752)*(35.7895-44.8684)/(98.8806-98.2752);
      }
      if ((98.8806<=x)&&(x<=99.4882)) {
            limit =35.7895+(x-98.8806)*(31.8421-35.7895)/(99.4882-98.8806);
      }
      if ((99.4882<=x)&&(x<=100.202)) {
            limit =31.8421+(x-99.4882)*(30-31.8421)/(100.202-99.4882);
      }
      if ((100.202<=x)&&(x<=100.769)) {
            limit =30+(x-100.202)*(30.6579-30)/(100.769-100.202);
      }
      if ((100.769<=x)&&(x<=103.882)) {
            limit =30.6579+(x-100.769)*(38.8158-30.6579)/(103.882-100.769);
      }
      if ((103.882<=x)&&(x<=104.849)) {
            limit =38.8158+(x-103.882)*(40.1316-38.8158)/(104.849-103.882);
      }
      if ((104.849<=x)&&(x<=105.94)) {
            limit =40.1316+(x-104.849)*(36.9737-40.1316)/(105.94-104.849);
      }
      if ((105.94<=x)&&(x<=106.653)) {
            limit =36.9737+(x-105.94)*(34.7368-36.9737)/(106.653-105.94);
      }
      if ((106.653<=x)&&(x<=107.535)) {
            limit =34.7368+(x-106.653)*(33.9474-34.7368)/(107.535-106.653);
      }
      if ((107.535<=x)&&(x<=108.229)) {
            limit =33.9474+(x-107.535)*(35-33.9474)/(108.229-107.535);
      }
      if ((108.229<=x)&&(x<=108.839)) {
            limit =35+(x-108.229)*(36.8421-35)/(108.839-108.229);
      }
      if ((108.839<=x)&&(x<=110)) {
            limit =36.8421+(x-108.839)*(37.2368-36.8421)/(110-108.839);
      }
//  high begins ----------------------------------
      if ((200<=x)&&(x<=221.071)) {
            limit =13.864+(x-200)*(10.1452-13.864)/(221.071-200);
      }
      if ((221.071<=x)&&(x<=252.375)) {
            limit =10.1452+(x-221.071)*(8.02672-10.1452)/(252.375-221.071);
      }
      if ((252.375<=x)&&(x<=261.01)) {
            limit =8.02672+(x-252.375)*(6.74372-8.02672)/(261.01-252.375);
      }
      if ((261.01<=x)&&(x<=270.725)) {
            limit =6.74372+(x-261.01)*(5.24026-6.74372)/(270.725-261.01);
      }
      if ((270.725<=x)&&(x<=303.109)) {
            limit =5.24026+(x-270.725)*(7.78928-5.24026)/(303.109-270.725);
      }
      if ((303.109<=x)&&(x<=317.142)) {
            limit =7.78928+(x-303.109)*(2.23348-7.78928)/(317.142-303.109);
      }
      if ((317.142<=x)&&(x<=345.207)) {
            limit =2.23348+(x-317.142)*(5.0548-2.23348)/(345.207-317.142);
      }
      if ((345.207<=x)&&(x<=368.955)) {
            limit =5.0548+(x-345.207)*(2.72304-5.0548)/(368.955-345.207);
      }
      if ((368.955<=x)&&(x<=389.465)) {
            limit =2.72304+(x-368.955)*(3.99928-2.72304)/(389.465-368.955);
      }
      if ((389.465<=x)&&(x<=413.212)) {
            limit =3.99928+(x-389.465)*(2.24694-3.99928)/(413.212-389.465);
      }
      if ((413.212<=x)&&(x<=426.166)) {
            limit =2.24694+(x-413.212)*(2.4294-2.24694)/(426.166-413.212);
      }
      if ((426.166<=x)&&(x<=459.629)) {
            limit =2.4294+(x-426.166)*(1.69435-2.4294)/(459.629-426.166);
      }
      if ((459.629<=x)&&(x<=479.059)) {
            limit =1.69435+(x-459.629)*(2.75595-1.69435)/(479.059-459.629);
      }
      if ((479.059<=x)&&(x<=515.76)) {
            limit =2.75595+(x-479.059)*(1.47575-2.75595)/(515.76-479.059);
      }
      if ((515.76<=x)&&(x<=531.952)) {
            limit =1.47575+(x-515.76)*(1.55772-1.47575)/(531.952-515.76);
      }
      if ((531.952<=x)&&(x<=579.447)) {
            limit =1.55772+(x-531.952)*(1.2931-1.55772)/(579.447-531.952);
      }
      if ((579.447<=x)&&(x<=601.036)) {
            limit =1.2931+(x-579.447)*(1.67412-1.2931)/(601.036-579.447);
      }
      if ((601.036<=x)&&(x<=622.625)) {
            limit =1.67412+(x-601.036)*(1.4494-1.67412)/(622.625-601.036);
      }
      if ((622.625<=x)&&(x<=639.896)) {
            limit =1.4494+(x-622.625)*(0.912756-1.4494)/(639.896-622.625);
      }
      if ((639.896<=x)&&(x<=672.28)) {
            limit =0.912756+(x-639.896)*(0.946246-0.912756)/(672.28-639.896);
      }
      if ((672.28<=x)&&(x<=699.266)) {
            limit =0.946246+(x-672.28)*(1.4494-0.946246)/(699.266-672.28);
      }
      if ((699.266<=x)&&(x<=726.252)) {
            limit =1.4494+(x-699.266)*(1.47575-1.4494)/(726.252-699.266);
      }
      if ((726.252<=x)&&(x<=751.079)) {
            limit =1.47575+(x-726.252)*(0.617759-1.47575)/(751.079-726.252);
      }
      if ((751.079<=x)&&(x<=767.271)) {
            limit =0.617759+(x-751.079)*(0.739718-0.617759)/(767.271-751.079);
      }
      if ((767.271<=x)&&(x<=800.734)) {
            limit =0.739718+(x-767.271)*(0.72651-0.739718)/(800.734-767.271);
      }
      if ((800.734<=x)&&(x<=833.117)) {
            limit =0.72651+(x-800.734)*(0.963449-0.72651)/(833.117-800.734);
      }
      if ((833.117<=x)&&(x<=862.263)) {
            limit =0.963449+(x-833.117)*(0.625224-0.963449)/(862.263-833.117);
      }
      if ((862.263<=x)&&(x<=894.646)) {
            limit =0.625224+(x-862.263)*(0.347079-0.625224)/(894.646-862.263);
      }
      if ((894.646<=x)&&(x<=917.314)) {
            limit =0.347079+(x-894.646)*(0.364161-0.347079)/(917.314-894.646);
      }
      if ((917.314<=x)&&(x<=961.572)) {
            limit =0.364161+(x-917.314)*(0.272959-0.364161)/(961.572-917.314);
      }
      if ((961.572<=x)&&(x<=985.32)) {
            limit =0.272959+(x-961.572)*(0.403305-0.272959)/(985.32-961.572);
      }
      if ((985.32<=x)&&(x<=1007.99)) {
            limit =0.403305+(x-985.32)*(0.373015-0.403305)/(1007.99-985.32);
      }
      if ((1007.99<=x)&&(x<=1037.13)) {
            limit =0.373015+(x-1007.99)*(0.446657-0.373015)/(1037.13-1007.99);
      }
      if ((1037.13<=x)&&(x<=1077.07)) {
            limit =0.446657+(x-1037.13)*(0.311515-0.446657)/(1077.07-1037.13);
      }
      if ((1077.07<=x)&&(x<=1117.01)) {
            limit =0.311515+(x-1077.07)*(0.342935-0.311515)/(1117.01-1077.07);
      }
      if ((1117.01<=x)&&(x<=1174.22)) {
            limit =0.342935+(x-1117.01)*(0.23632-0.342935)/(1174.22-1117.01);
      }
      if ((1174.22<=x)&&(x<=1199.05)) {
            limit =0.23632+(x-1174.22)*(0.250947-0.23632)/(1199.05-1174.22);
      }
      if ((1199.05<=x)&&(x<=1242.23)) {
            limit =0.250947+(x-1199.05)*(0.357659-0.250947)/(1242.23-1199.05);
      }
      if ((1242.23<=x)&&(x<=1281.09)) {
            limit =0.357659+(x-1242.23)*(0.227956-0.357659)/(1281.09-1242.23);
      }
      if ((1281.09<=x)&&(x<=1343.7)) {
            limit =0.227956+(x-1281.09)*(0.305953-0.227956)/(1343.7-1281.09);
      }
      if ((1343.7<=x)&&(x<=1394.43)) {
            limit =0.305953+(x-1343.7)*(0.223886-0.305953)/(1394.43-1343.7);
      }
      if ((1394.43<=x)&&(x<=1427.89)) {
            limit =0.223886+(x-1394.43)*(0.252459-0.223886)/(1427.89-1394.43);
      }
      if ((1427.89<=x)&&(x<=1518.57)) {
            limit =0.252459+(x-1427.89)*(0.13682-0.252459)/(1518.57-1427.89);
      }
      if ((1518.57<=x)&&(x<=1596.29)) {
            limit =0.13682+(x-1518.57)*(0.342935-0.13682)/(1596.29-1518.57);
      }
      if ((1596.29<=x)&&(x<=1675.09)) {
            limit =0.342935+(x-1596.29)*(0.14793-0.342935)/(1675.09-1596.29);
      }
      if ((1675.09<=x)&&(x<=1708.55)) {
            limit =0.14793+(x-1675.09)*(0.154282-0.14793)/(1708.55-1675.09);
      }
      if ((1708.55<=x)&&(x<=1750.65)) {
            limit =0.154282+(x-1708.55)*(0.139308-0.154282)/(1750.65-1708.55);
      }
      if ((1750.65<=x)&&(x<=1787.35)) {
            limit =0.139308+(x-1750.65)*(0.15244-0.139308)/(1787.35-1750.65);
      }
      if ((1787.35<=x)&&(x<=1833.77)) {
            limit =0.15244+(x-1787.35)*(0.138474-0.15244)/(1833.77-1787.35);
      }
      if ((1833.77<=x)&&(x<=1863.99)) {
            limit =0.138474+(x-1833.77)*(0.151527-0.138474)/(1863.99-1833.77);
      }
      if ((1863.99<=x)&&(x<=1914.72)) {
            limit =0.151527+(x-1863.99)*(0.117745-0.151527)/(1914.72-1863.99);
      }
      if ((1914.72<=x)&&(x<=1985.97)) {
            limit =0.117745+(x-1914.72)*(0.105048-0.117745)/(1985.97-1914.72);
      }
      if ((1985.97<=x)&&(x<=2053.97)) {
            limit =0.105048+(x-1985.97)*(0.115643-0.105048)/(2053.97-1985.97);
      }
      if ((2053.97<=x)&&(x<=2091.75)) {
            limit =0.115643+(x-2053.97)*(0.14793-0.115643)/(2091.75-2053.97);
      }
      if ((2091.75<=x)&&(x<=2119.82)) {
            limit =0.14793+(x-2091.75)*(0.164818-0.14793)/(2119.82-2091.75);
      }
      if ((2119.82<=x)&&(x<=2165.16)) {
            limit =0.164818+(x-2119.82)*(0.16681-0.164818)/(2165.16-2119.82);
      }
      if ((2165.16<=x)&&(x<=2233.16)) {
            limit =0.16681+(x-2165.16)*(0.214669-0.16681)/(2233.16-2165.16);
      }
      if ((2233.16<=x)&&(x<=2297.93)) {
            limit =0.214669+(x-2233.16)*(0.233498-0.214669)/(2297.93-2233.16);
      }
      if ((2297.93<=x)&&(x<=2351.9)) {
            limit =0.233498+(x-2297.93)*(0.219888-0.233498)/(2351.9-2297.93);
      }
      if ((2351.9<=x)&&(x<=2390.76)) {
            limit =0.219888+(x-2351.9)*(0.192673-0.219888)/(2390.76-2351.9);
      }
      if ((2390.76<=x)&&(x<=2459.84)) {
            limit =0.192673+(x-2390.76)*(0.146164-0.192673)/(2459.84-2390.76);
      }
      if ((2459.84<=x)&&(x<=2488.99)) {
            limit =0.146164+(x-2459.84)*(0.140991-0.146164)/(2488.99-2459.84);
      }
      if ((2488.99<=x)&&(x<=2541.88)) {
            limit =0.140991+(x-2488.99)*(0.158985-0.140991)/(2541.88-2488.99);
      }
      if ((2541.88<=x)&&(x<=2612.05)) {
            limit =0.158985+(x-2541.88)*(0.151527-0.158985)/(2612.05-2541.88);
      }
      if ((2612.05<=x)&&(x<=2657.38)) {
            limit =0.151527+(x-2612.05)*(0.128845-0.151527)/(2657.38-2612.05);
      }
      if ((2657.38<=x)&&(x<=2688.69)) {
            limit =0.128845+(x-2657.38)*(0.118455-0.128845)/(2688.69-2657.38);
      }
      if ((2688.69<=x)&&(x<=2700)) {
            limit =0.118455+(x-2688.69)*(0.120608-0.118455)/(2700-2688.69);
      }
}
if ((0.02<y)&&(y<=0.06))
{
      if ((200<=x)&&(x<=215.955)) {
            limit =23.1863+(x-200)*(12.9092-23.1863)/(215.955-200);
      }
      if ((215.955<=x)&&(x<=239.326)) {
            limit =12.9092+(x-215.955)*(12.9747-12.9092)/(239.326-215.955);
      }
      if ((239.326<=x)&&(x<=258.202)) {
            limit =12.9747+(x-239.326)*(10.5679-12.9747)/(258.202-239.326);
      }
      if ((258.202<=x)&&(x<=276.18)) {
            limit =10.5679+(x-258.202)*(7.04565-10.5679)/(276.18-258.202);
      }
      if ((276.18<=x)&&(x<=303.146)) {
            limit =7.04565+(x-276.18)*(10.1035-7.04565)/(303.146-276.18);
      }
      if ((303.146<=x)&&(x<=322.022)) {
            limit =10.1035+(x-303.146)*(4.46832-10.1035)/(322.022-303.146);
      }
      if ((322.022<=x)&&(x<=344.494)) {
            limit =4.46832+(x-322.022)*(8.31255-4.46832)/(344.494-322.022);
      }
      if ((344.494<=x)&&(x<=370.562)) {
            limit =8.31255+(x-344.494)*(4.93942-8.31255)/(370.562-344.494);
      }
      if ((370.562<=x)&&(x<=385.843)) {
            limit =4.93942+(x-370.562)*(5.94466-4.93942)/(385.843-370.562);
      }
      if ((385.843<=x)&&(x<=415.506)) {
            limit =5.94466+(x-385.843)*(3.71374-5.94466)/(415.506-385.843);
      }
      if ((415.506<=x)&&(x<=427.191)) {
            limit =3.71374+(x-415.506)*(3.47987-3.71374)/(427.191-415.506);
      }
      if ((427.191<=x)&&(x<=451.461)) {
            limit =3.47987+(x-427.191)*(2.92081-3.47987)/(451.461-427.191);
      }
      if ((451.461<=x)&&(x<=480.225)) {
            limit =2.92081+(x-451.461)*(4.02406-2.92081)/(480.225-451.461);
      }
      if ((480.225<=x)&&(x<=515.281)) {
            limit =4.02406+(x-480.225)*(2.53923-4.02406)/(515.281-480.225);
      }
      if ((515.281<=x)&&(x<=571.91)) {
            limit =2.53923+(x-515.281)*(2.24087-2.53923)/(571.91-515.281);
      }
      if ((571.91<=x)&&(x<=600.674)) {
            limit =2.24087+(x-571.91)*(2.59114-2.24087)/(600.674-571.91);
      }
      if ((600.674<=x)&&(x<=639.326)) {
            limit =2.59114+(x-600.674)*(1.71899-2.59114)/(639.326-600.674);
      }
      if ((639.326<=x)&&(x<=654.607)) {
            limit =1.71899+(x-639.326)*(1.61883-1.71899)/(654.607-639.326);
      }
      if ((654.607<=x)&&(x<=679.775)) {
            limit =1.61883+(x-654.607)*(1.95811-1.61883)/(679.775-654.607);
      }
      if ((679.775<=x)&&(x<=704.944)) {
            limit =1.95811+(x-679.775)*(2.29843-1.95811)/(704.944-679.775);
      }
      if ((704.944<=x)&&(x<=729.213)) {
            limit =2.29843+(x-704.944)*(1.93885-2.29843)/(729.213-704.944);
      }
      if ((729.213<=x)&&(x<=757.978)) {
            limit =1.93885+(x-729.213)*(1.33208-1.93885)/(757.978-729.213);
      }
      if ((757.978<=x)&&(x<=779.551)) {
            limit =1.33208+(x-757.978)*(1.47981-1.33208)/(779.551-757.978);
      }
      if ((779.551<=x)&&(x<=800.225)) {
            limit =1.47981+(x-779.551)*(1.35917-1.47981)/(800.225-779.551);
      }
      if ((800.225<=x)&&(x<=827.191)) {
            limit =1.35917+(x-800.225)*(1.34572-1.35917)/(827.191-800.225);
      }
      if ((827.191<=x)&&(x<=846.067)) {
            limit =1.34572+(x-827.191)*(1.19943-1.34572)/(846.067-827.191);
      }
      if ((846.067<=x)&&(x<=890.112)) {
            limit =1.19943+(x-846.067)*(0.549405-1.19943)/(890.112-846.067);
      }
      if ((890.112<=x)&&(x<=950.337)) {
            limit =0.549405+(x-890.112)*(0.42356-0.549405)/(950.337-890.112);
      }
      if ((950.337<=x)&&(x<=965.618)) {
            limit =0.42356+(x-950.337)*(0.421461-0.42356)/(965.618-950.337);
      }
      if ((965.618<=x)&&(x<=1029.44)) {
            limit =0.421461+(x-965.618)*(0.566353-0.421461)/(1029.44-965.618);
      }
      if ((1029.44<=x)&&(x<=1078.88)) {
            limit =0.566353+(x-1029.44)*(0.470659-0.566353)/(1078.88-1029.44);
      }
      if ((1078.88<=x)&&(x<=1117.53)) {
            limit =0.470659+(x-1078.88)*(0.443263-0.470659)/(1117.53-1078.88);
      }
      if ((1117.53<=x)&&(x<=1172.36)) {
            limit =0.443263+(x-1117.53)*(0.357473-0.443263)/(1172.36-1117.53);
      }
      if ((1172.36<=x)&&(x<=1197.53)) {
            limit =0.357473+(x-1172.36)*(0.370244-0.357473)/(1197.53-1172.36);
      }
      if ((1197.53<=x)&&(x<=1236.18)) {
            limit =0.370244+(x-1197.53)*(0.417545-0.370244)/(1236.18-1197.53);
      }
      if ((1236.18<=x)&&(x<=1278.43)) {
            limit =0.417545+(x-1236.18)*(0.377808-0.417545)/(1278.43-1236.18);
      }
      if ((1278.43<=x)&&(x<=1337.75)) {
            limit =0.377808+(x-1278.43)*(0.399253-0.377808)/(1337.75-1278.43);
      }
      if ((1337.75<=x)&&(x<=1380)) {
            limit =0.399253+(x-1337.75)*(0.354096-0.399253)/(1380-1337.75);
      }
      if ((1380<=x)&&(x<=1406.97)) {
            limit =0.354096+(x-1380)*(0.33181-0.354096)/(1406.97-1380);
      }
      if ((1406.97<=x)&&(x<=1439.33)) {
            limit =0.33181+(x-1406.97)*(0.312491-0.33181)/(1439.33-1406.97);
      }
      if ((1439.33<=x)&&(x<=1496.85)) {
            limit =0.312491+(x-1439.33)*(0.244556-0.312491)/(1496.85-1439.33);
      }
      if ((1496.85<=x)&&(x<=1522.02)) {
            limit =0.244556+(x-1496.85)*(0.242135-0.244556)/(1522.02-1496.85);
      }
      if ((1522.02<=x)&&(x<=1583.15)) {
            limit =0.242135+(x-1522.02)*(0.345519-0.242135)/(1583.15-1522.02);
      }
      if ((1583.15<=x)&&(x<=1611.91)) {
            limit =0.345519+(x-1583.15)*(0.350772-0.345519)/(1611.91-1583.15);
      }
      if ((1611.91<=x)&&(x<=1628.99)) {
            limit =0.350772+(x-1611.91)*(0.311078-0.350772)/(1628.99-1611.91);
      }
      if ((1628.99<=x)&&(x<=1657.75)) {
            limit =0.311078+(x-1628.99)*(0.2598-0.311078)/(1657.75-1628.99);
      }
      if ((1657.75<=x)&&(x<=1712.58)) {
            limit =0.2598+(x-1657.75)*(0.212688-0.2598)/(1712.58-1657.75);
      }
      if ((1712.58<=x)&&(x<=1756.63)) {
            limit =0.212688+(x-1712.58)*(0.200311-0.212688)/(1756.63-1712.58);
      }
      if ((1756.63<=x)&&(x<=1787.19)) {
            limit =0.200311+(x-1756.63)*(0.194399-0.200311)/(1787.19-1756.63);
      }
      if ((1787.19<=x)&&(x<=1864.49)) {
            limit =0.194399+(x-1787.19)*(0.181277-0.194399)/(1864.49-1787.19);
      }
      if ((1864.49<=x)&&(x<=1937.3)) {
            limit =0.181277+(x-1864.49)*(0.153703-0.181277)/(1937.3-1864.49);
      }
      if ((1937.3<=x)&&(x<=1989.44)) {
            limit =0.153703+(x-1937.3)*(0.149924-0.153703)/(1989.44-1937.3);
      }
      if ((1989.44<=x)&&(x<=2028.99)) {
            limit =0.149924+(x-1989.44)*(0.157635-0.149924)/(2028.99-1989.44);
      }
      if ((2028.99<=x)&&(x<=2083.82)) {
            limit =0.157635+(x-2028.99)*(0.193572-0.157635)/(2083.82-2028.99);
      }
      if ((2083.82<=x)&&(x<=2141.35)) {
            limit =0.193572+(x-2083.82)*(0.232991-0.193572)/(2141.35-2083.82);
      }
      if ((2141.35<=x)&&(x<=2215.96)) {
            limit =0.232991+(x-2141.35)*(0.268096-0.232991)/(2215.96-2141.35);
      }
      if ((2215.96<=x)&&(x<=2304.94)) {
            limit =0.268096+(x-2215.96)*(0.284757-0.268096)/(2304.94-2215.96);
      }
      if ((2304.94<=x)&&(x<=2353.48)) {
            limit =0.284757+(x-2304.94)*(0.273612-0.284757)/(2353.48-2304.94);
      }
      if ((2353.48<=x)&&(x<=2442.47)) {
            limit =0.273612+(x-2353.48)*(0.251348-0.273612)/(2442.47-2353.48);
      }
      if ((2442.47<=x)&&(x<=2498.2)) {
            limit =0.251348+(x-2442.47)*(0.22517-0.251348)/(2498.2-2442.47);
      }
      if ((2498.2<=x)&&(x<=2535.06)) {
            limit =0.22517+(x-2498.2)*(0.214196-0.22517)/(2535.06-2498.2);
      }
      if ((2535.06<=x)&&(x<=2609.66)) {
            limit =0.214196+(x-2535.06)*(0.194799-0.214196)/(2609.66-2535.06);
      }
      if ((2609.66<=x)&&(x<=2668.09)) {
            limit =0.194799+(x-2609.66)*(0.182554-0.194799)/(2668.09-2609.66);
      }
      if ((2668.09<=x)&&(x<=2700)) {
            limit =0.182554+(x-2668.09)*(0.183486-0.182554)/(2700-2668.09);
      }
}
if ((0.06<y)&&(y<=0.1))
{
      if ((200<=x)&&(x<=226.249)) {
            limit =31.9099+(x-200)*(17.8012-31.9099)/(226.249-200);
      }
      if ((226.249<=x)&&(x<=237.914)) {
            limit =17.8012+(x-226.249)*(16.9262-17.8012)/(237.914-226.249);
      }
      if ((237.914<=x)&&(x<=275.758)) {
            limit =16.9262+(x-237.914)*(9.99579-16.9262)/(275.758-237.914);
      }
      if ((275.758<=x)&&(x<=290.685)) {
            limit =9.99579+(x-275.758)*(12.2119-9.99579)/(290.685-275.758);
      }
      if ((290.685<=x)&&(x<=317.793)) {
            limit =12.2119+(x-290.685)*(7.43502-12.2119)/(317.793-290.685);
      }
      if ((317.793<=x)&&(x<=338.671)) {
            limit =7.43502+(x-317.793)*(10.5112-7.43502)/(338.671-317.793);
      }
      if ((338.671<=x)&&(x<=367.985)) {
            limit =10.5112+(x-338.671)*(7.43636-10.5112)/(367.985-338.671);
      }
      if ((367.985<=x)&&(x<=380.717)) {
            limit =7.43636+(x-367.985)*(7.499-7.43636)/(380.717-367.985);
      }
      if ((380.717<=x)&&(x<=449.052)) {
            limit =7.499+(x-380.717)*(4.18342-7.499)/(449.052-380.717);
      }
      if ((449.052<=x)&&(x<=478.219)) {
            limit =4.18342+(x-449.052)*(4.98483-4.18342)/(478.219-449.052);
      }
      if ((478.219<=x)&&(x<=518.015)) {
            limit =4.98483+(x-478.219)*(3.60108-4.98483)/(518.015-478.219);
      }
      if ((518.015<=x)&&(x<=561.499)) {
            limit =3.60108+(x-518.015)*(3.17806-3.60108)/(561.499-518.015);
      }
      if ((561.499<=x)&&(x<=589.951)) {
            limit =3.17806+(x-561.499)*(3.35547-3.17806)/(589.951-561.499);
      }
      if ((589.951<=x)&&(x<=612.441)) {
            limit =3.35547+(x-589.951)*(3.16542-3.35547)/(612.441-589.951);
      }
      if ((612.441<=x)&&(x<=636.477)) {
            limit =3.16542+(x-612.441)*(2.52732-3.16542)/(636.477-612.441);
      }
      if ((636.477<=x)&&(x<=655.219)) {
            limit =2.52732+(x-636.477)*(2.40411-2.52732)/(655.219-636.477);
      }
      if ((655.219<=x)&&(x<=700.862)) {
            limit =2.40411+(x-655.219)*(2.91302-2.40411)/(700.862-655.219);
      }
      if ((700.862<=x)&&(x<=734.618)) {
            limit =2.91302+(x-700.862)*(2.48638-2.91302)/(734.618-700.862);
      }
      if ((734.618<=x)&&(x<=755.654)) {
            limit =2.48638+(x-734.618)*(2.00177-2.48638)/(755.654-734.618);
      }
      if ((755.654<=x)&&(x<=804.388)) {
            limit =2.00177+(x-755.654)*(1.73743-2.00177)/(804.388-755.654);
      }
      if ((804.388<=x)&&(x<=840.417)) {
            limit =1.73743+(x-804.388)*(1.34733-1.73743)/(840.417-804.388);
      }
      if ((840.417<=x)&&(x<=902.052)) {
            limit =1.34733+(x-840.417)*(0.646825-1.34733)/(902.052-840.417);
      }
      if ((902.052<=x)&&(x<=927.566)) {
            limit =0.646825+(x-902.052)*(0.554382-0.646825)/(927.566-902.052);
      }
      if ((927.566<=x)&&(x<=954.544)) {
            limit =0.554382+(x-927.566)*(0.536243-0.554382)/(954.544-927.566);
      }
      if ((954.544<=x)&&(x<=1016.68)) {
            limit =0.536243+(x-954.544)*(0.628474-0.536243)/(1016.68-954.544);
      }
      if ((1016.68<=x)&&(x<=1051.15)) {
            limit =0.628474+(x-1016.68)*(0.610467-0.628474)/(1051.15-1016.68);
      }
      if ((1051.15<=x)&&(x<=1087.88)) {
            limit =0.610467+(x-1051.15)*(0.550095-0.610467)/(1087.88-1051.15);
      }
      if ((1087.88<=x)&&(x<=1141.85)) {
            limit =0.550095+(x-1087.88)*(0.495724-0.550095)/(1141.85-1087.88);
      }
      if ((1141.85<=x)&&(x<=1184.57)) {
            limit =0.495724+(x-1141.85)*(0.465734-0.495724)/(1184.57-1141.85);
      }
      if ((1184.57<=x)&&(x<=1234.75)) {
            limit =0.465734+(x-1184.57)*(0.479618-0.465734)/(1234.75-1184.57);
      }
      if ((1234.75<=x)&&(x<=1277.46)) {
            limit =0.479618+(x-1234.75)*(0.46202-0.479618)/(1277.46-1234.75);
      }
      if ((1277.46<=x)&&(x<=1309.67)) {
            limit =0.46202+(x-1277.46)*(0.462074-0.46202)/(1309.67-1277.46);
      }
      if ((1309.67<=x)&&(x<=1340.39)) {
            limit =0.462074+(x-1309.67)*(0.454479-0.462074)/(1340.39-1309.67);
      }
      if ((1340.39<=x)&&(x<=1399.61)) {
            limit =0.454479+(x-1340.39)*(0.402791-0.454479)/(1399.61-1340.39);
      }
      if ((1399.61<=x)&&(x<=1443.83)) {
            limit =0.402791+(x-1399.61)*(0.366007-0.402791)/(1443.83-1399.61);
      }
      if ((1443.83<=x)&&(x<=1506.8)) {
            limit =0.366007+(x-1443.83)*(0.323035-0.366007)/(1506.8-1443.83);
      }
      if ((1506.8<=x)&&(x<=1546.48)) {
            limit =0.323035+(x-1506.8)*(0.351186-0.323035)/(1546.48-1506.8);
      }
      if ((1546.48<=x)&&(x<=1575.68)) {
            limit =0.351186+(x-1546.48)*(0.372341-0.351186)/(1575.68-1546.48);
      }
      if ((1575.68<=x)&&(x<=1607.89)) {
            limit =0.372341+(x-1575.68)*(0.366224-0.372341)/(1607.89-1575.68);
      }
      if ((1607.89<=x)&&(x<=1630.39)) {
            limit =0.366224+(x-1607.89)*(0.342611-0.366224)/(1630.39-1607.89);
      }
      if ((1630.39<=x)&&(x<=1698.64)) {
            limit =0.342611+(x-1630.39)*(0.258072-0.342611)/(1698.64-1630.39);
      }
      if ((1698.64<=x)&&(x<=1769.08)) {
            limit =0.258072+(x-1698.64)*(0.235506-0.258072)/(1769.08-1698.64);
      }
      if ((1769.08<=x)&&(x<=1868.74)) {
            limit =0.235506+(x-1769.08)*(0.213151-0.235506)/(1868.74-1769.08);
      }
      if ((1868.74<=x)&&(x<=1970.65)) {
            limit =0.213151+(x-1868.74)*(0.192117-0.213151)/(1970.65-1868.74);
      }
      if ((1970.65<=x)&&(x<=2028.32)) {
            limit =0.192117+(x-1970.65)*(0.204562-0.192117)/(2028.32-1970.65);
      }
      if ((2028.32<=x)&&(x<=2078.46)) {
            limit =0.204562+(x-2028.32)*(0.242754-0.204562)/(2078.46-2028.32);
      }
      if ((2078.46<=x)&&(x<=2139.12)) {
            limit =0.242754+(x-2078.46)*(0.266139-0.242754)/(2139.12-2078.46);
      }
      if ((2139.12<=x)&&(x<=2204.27)) {
            limit =0.266139+(x-2139.12)*(0.289359-0.266139)/(2204.27-2139.12);
      }
      if ((2204.27<=x)&&(x<=2268.68)) {
            limit =0.289359+(x-2204.27)*(0.306828-0.289359)/(2268.68-2204.27);
      }
      if ((2268.68<=x)&&(x<=2354.09)) {
            limit =0.306828+(x-2268.68)*(0.294385-0.306828)/(2354.09-2268.68);
      }
      if ((2354.09<=x)&&(x<=2458.25)) {
            limit =0.294385+(x-2354.09)*(0.267559-0.294385)/(2458.25-2354.09);
      }
      if ((2458.25<=x)&&(x<=2564.65)) {
            limit =0.267559+(x-2458.25)*(0.240156-0.267559)/(2564.65-2458.25);
      }
      if ((2564.65<=x)&&(x<=2618.6)) {
            limit =0.240156+(x-2564.65)*(0.229432-0.240156)/(2618.6-2564.65);
      }
      if ((2618.6<=x)&&(x<=2655.31)) {
            limit =0.229432+(x-2618.6)*(0.228507-0.229432)/(2655.31-2618.6);
      }
      if ((2655.31<=x)&&(x<=2701.02)) {
            limit =0.228507+(x-2655.31)*(0.222897-0.228507)/(2701.02-2655.31);
      }
}

return limit/1000;
// because of fb to pb
}
