double bbSmumu_CMS(double x, double y)
{
double limit = 10000000000;
if(y<=0.02){
    if ((130<=x)&&(x<=135.226)) {
      limit =0.0225824+(x-130.323)*(0.0174364-0.0225824)/(135.226-130.323);
    }
    if ((135.226<=x)&&(x<=140.13)) {
          limit =0.0174364+(x-135.226)*(0.0154603-0.0174364)/(140.13-135.226);
    }
    if ((140.13<=x)&&(x<=146.014)) {
          limit =0.0154603+(x-140.13)*(0.013874-0.0154603)/(146.014-140.13);
    }
    if ((146.014<=x)&&(x<=151.162)) {
          limit =0.013874+(x-146.014)*(0.0163693-0.013874)/(151.162-146.014);
    }
    if ((151.162<=x)&&(x<=156.311)) {
          limit =0.0163693+(x-151.162)*(0.0174889-0.0163693)/(156.311-151.162);
    }
    if ((156.311<=x)&&(x<=160.969)) {
          limit =0.0174889+(x-156.311)*(0.00822171-0.0174889)/(160.969-156.311);
    }
    if ((160.969<=x)&&(x<=165.627)) {
          limit =0.00822171+(x-160.969)*(0.008679-0.00822171)/(165.627-160.969);
    }
    if ((165.627<=x)&&(x<=170.531)) {
          limit =0.008679+(x-165.627)*(0.0197837-0.008679)/(170.531-165.627);
    }
    if ((170.531<=x)&&(x<=175.679)) {
          limit =0.0197837+(x-170.531)*(0.0193716-0.0197837)/(175.679-170.531);
    }
    if ((175.679<=x)&&(x<=180.337)) {
          limit =0.0193716+(x-175.679)*(0.0107124-0.0193716)/(180.337-175.679);
    }
    if ((180.337<=x)&&(x<=185.486)) {
          limit =0.0107124+(x-180.337)*(0.00638646-0.0107124)/(185.486-180.337);
    }
    if ((185.486<=x)&&(x<=190.88)) {
          limit =0.00638646+(x-185.486)*(0.00764925-0.00638646)/(190.88-185.486);
    }
    if ((190.88<=x)&&(x<=195.783)) {
          limit =0.00764925+(x-190.88)*(0.00660125-0.00764925)/(195.783-190.88);
    }
    if ((195.783<=x)&&(x<=200.932)) {
          limit =0.00660125+(x-195.783)*(0.00608646-0.00660125)/(200.932-195.783);
    }
    if ((200.932<=x)&&(x<=204.854)) {
          limit =0.00608646+(x-200.932)*(0.00559497-0.00608646)/(204.854-200.932);
    }
    if ((204.854<=x)&&(x<=210.003)) {
          limit =0.00559497+(x-204.854)*(0.0064057-0.00559497)/(210.003-204.854);
    }
    if ((210.003<=x)&&(x<=215.397)) {
          limit =0.0064057+(x-210.003)*(0.00819703-0.0064057)/(215.397-210.003);
    }
    if ((215.397<=x)&&(x<=221.036)) {
          limit =0.00819703+(x-215.397)*(0.00990679-0.00819703)/(221.036-215.397);
    }
    if ((221.036<=x)&&(x<=226.184)) {
          limit =0.00990679+(x-221.036)*(0.0137494-0.00990679)/(226.184-221.036);
    }
    if ((226.184<=x)&&(x<=231.087)) {
          limit =0.0137494+(x-226.184)*(0.0116535-0.0137494)/(231.087-226.184);
    }
    if ((231.087<=x)&&(x<=235.255)) {
          limit =0.0116535+(x-231.087)*(0.00728993-0.0116535)/(235.255-231.087);
    }
    if ((235.255<=x)&&(x<=239.423)) {
          limit =0.00728993+(x-235.255)*(0.00487217-0.00728993)/(239.423-235.255);
    }
    if ((239.423<=x)&&(x<=245.062)) {
          limit =0.00487217+(x-239.423)*(0.00556142-0.00487217)/(245.062-239.423);
    }
    if ((245.062<=x)&&(x<=249.475)) {
          limit =0.00556142+(x-245.062)*(0.00788277-0.00556142)/(249.475-245.062);
    }
    if ((249.475<=x)&&(x<=255.85)) {
          limit =0.00788277+(x-249.475)*(0.00764925-0.00788277)/(255.85-249.475);
    }
    if ((255.85<=x)&&(x<=260.998)) {
          limit =0.00764925+(x-255.85)*(0.00604996-0.00764925)/(260.998-255.85);
    }
    if ((260.998<=x)&&(x<=264.676)) {
          limit =0.00604996+(x-260.998)*(0.0069894-0.00604996)/(264.676-260.998);
    }
    if ((264.676<=x)&&(x<=270.069)) {
          limit =0.0069894+(x-264.676)*(0.00676198-0.0069894)/(270.069-264.676);
    }
    if ((270.069<=x)&&(x<=276.444)) {
          limit =0.00676198+(x-270.069)*(0.00656167-0.00676198)/(276.444-270.069);
    }
    if ((276.444<=x)&&(x<=280.367)) {
          limit =0.00656167+(x-276.444)*(0.00674168-0.00656167)/(280.367-276.444);
    }
    if ((280.367<=x)&&(x<=286.006)) {
          limit =0.00674168+(x-280.367)*(0.00638646-0.00674168)/(286.006-280.367);
    }
    if ((286.006<=x)&&(x<=290.664)) {
          limit =0.00638646+(x-286.006)*(0.00517419-0.00638646)/(290.664-286.006);
    }
    if ((290.664<=x)&&(x<=294.832)) {
          limit =0.00517419+(x-290.664)*(0.00369465-0.00517419)/(294.832-290.664);
    }
    if ((294.832<=x)&&(x<=301.696)) {
          limit =0.00369465+(x-294.832)*(0.003553-0.00369465)/(301.696-294.832);
    }
    if ((301.696<=x)&&(x<=304.393)) {
          limit =0.003553+(x-301.696)*(0.00409443-0.003553)/(304.393-301.696);
    }
    if ((304.393<=x)&&(x<=309.91)) {
          limit =0.00409443+(x-304.393)*(0.00448098-0.00409443)/(309.91-304.393);
    }
    if ((309.91<=x)&&(x<=315.017)) {
          limit =0.00448098+(x-309.91)*(0.00408419-0.00448098)/(315.017-309.91);
    }
    if ((315.017<=x)&&(x<=320.534)) {
          limit =0.00408419+(x-315.017)*(0.00330893-0.00408419)/(320.534-315.017);
    }
    if ((320.534<=x)&&(x<=324.62)) {
          limit =0.00330893+(x-320.534)*(0.00356727-0.00330893)/(324.62-320.534);
    }
    if ((324.62<=x)&&(x<=330.136)) {
          limit =0.00356727+(x-324.62)*(0.00471128-0.00356727)/(330.136-324.62);
    }
    if ((330.136<=x)&&(x<=335.857)) {
          limit =0.00471128+(x-330.136)*(0.00491632-0.00471128)/(335.857-330.136);
    }
    if ((335.857<=x)&&(x<=340.556)) {
          limit =0.00491632+(x-335.857)*(0.00445858-0.00491632)/(340.556-335.857);
    }
    if ((340.556<=x)&&(x<=345.868)) {
          limit =0.00445858+(x-340.556)*(0.00430487-0.00445858)/(345.868-340.556);
    }
    if ((345.868<=x)&&(x<=349.341)) {
          limit =0.00430487+(x-345.868)*(0.00479466-0.00430487)/(349.341-345.868);
    }
    if ((349.341<=x)&&(x<=355.266)) {
          limit =0.00479466+(x-349.341)*(0.00548942-0.00479466)/(355.266-349.341);
    }
    if ((355.266<=x)&&(x<=360.987)) {
          limit =0.00548942+(x-355.266)*(0.004676-0.00548942)/(360.987-355.266);
    }
    if ((360.987<=x)&&(x<=364.46)) {
          limit =0.004676+(x-360.987)*(0.00383617-0.004676)/(364.46-360.987);
    }
    if ((364.46<=x)&&(x<=370.589)) {
          limit =0.00383617+(x-364.46)*(0.00354056-0.00383617)/(370.589-364.46);
    }
    if ((370.589<=x)&&(x<=377.127)) {
          limit =0.00354056+(x-370.589)*(0.00354056-0.00354056)/(377.127-370.589);
    }
    if ((377.127<=x)&&(x<=381.009)) {
          limit =0.00354056+(x-377.127)*(0.00445858-0.00354056)/(381.009-377.127);
    }
    if ((381.009<=x)&&(x<=386.321)) {
          limit =0.00445858+(x-381.009)*(0.0053268-0.00445858)/(386.321-381.009);
    }
    if ((386.321<=x)&&(x<=389.385)) {
          limit =0.0053268+(x-386.321)*(0.00631643-0.0053268)/(389.385-386.321);
    }
    if ((389.385<=x)&&(x<=397.558)) {
          limit =0.00631643+(x-389.385)*(0.00664107-0.00631643)/(397.558-389.385);
    }
    if ((397.558<=x)&&(x<=401.235)) {
          limit =0.00664107+(x-397.558)*(0.00571399-0.00664107)/(401.235-397.558);
    }
    if ((401.235<=x)&&(x<=405.321)) {
          limit =0.00571399+(x-401.235)*(0.00445858-0.00571399)/(405.321-401.235);
    }
    if ((405.321<=x)&&(x<=411.655)) {
          limit =0.00445858+(x-405.321)*(0.00314718-0.00445858)/(411.655-405.321);
    }
    if ((411.655<=x)&&(x<=415.741)) {
          limit =0.00314718+(x-411.655)*(0.00224388-0.00314718)/(415.741-411.655);
    }
    if ((415.741<=x)&&(x<=419.827)) {
          limit =0.00224388+(x-415.741)*(0.00196973-0.00224388)/(419.827-415.741);
    }
    if ((419.827<=x)&&(x<=425.752)) {
          limit =0.00196973+(x-419.827)*(0.00204006-0.00196973)/(425.752-419.827);
    }
    if ((425.752<=x)&&(x<=430.043)) {
          limit =0.00204006+(x-425.752)*(0.00248045-0.00204006)/(430.043-425.752);
    }
    if ((430.043<=x)&&(x<=434.946)) {
          limit =0.00248045+(x-430.043)*(0.00324325-0.00248045)/(434.946-430.043);
    }
    if ((434.946<=x)&&(x<=439.032)) {
          limit =0.00324325+(x-434.946)*(0.00426193-0.00324325)/(439.032-434.946);
    }
    if ((439.032<=x)&&(x<=445.774)) {
          limit =0.00426193+(x-439.032)*(0.00458319-0.00426193)/(445.774-439.032);
    }
    if ((445.774<=x)&&(x<=449.861)) {
          limit =0.00458319+(x-445.774)*(0.0039632-0.00458319)/(449.861-445.774);
    }
    if ((449.861<=x)&&(x<=455.99)) {
          limit =0.0039632+(x-449.861)*(0.0027696-0.0039632)/(455.99-449.861);
    }
    if ((455.99<=x)&&(x<=460.485)) {
          limit =0.0027696+(x-455.99)*(0.00185941-0.0027696)/(460.485-455.99);
    }
    if ((460.485<=x)&&(x<=465.592)) {
          limit =0.00185941+(x-460.485)*(0.00134244-0.00185941)/(465.592-460.485);
    }
    if ((465.592<=x)&&(x<=470.496)) {
          limit =0.00134244+(x-465.592)*(0.0011696-0.00134244)/(470.496-465.592);
    }
    if ((470.496<=x)&&(x<=476.421)) {
          limit =0.0011696+(x-470.496)*(0.00122357-0.0011696)/(476.421-470.496);
    }
    if ((476.421<=x)&&(x<=481.528)) {
          limit =0.00122357+(x-476.421)*(0.00126725-0.00122357)/(481.528-476.421);
    }
    if ((481.528<=x)&&(x<=486.432)) {
          limit =0.00126725+(x-481.528)*(0.00134581-0.00126725)/(486.432-481.528);
    }
    if ((486.432<=x)&&(x<=489.701)) {
          limit =0.00134581+(x-486.432)*(0.00146183-0.00134581)/(489.701-486.432);
    }
    if ((489.701<=x)&&(x<=496.647)) {
          limit =0.00146183+(x-489.701)*(0.00159984-0.00146183)/(496.647-489.701);
    }
    if ((496.647<=x)&&(x<=500.733)) {
          limit =0.00159984+(x-496.647)*(0.00188285-0.00159984)/(500.733-496.647);
    }
    if ((500.733<=x)&&(x<=504.002)) {
          limit =0.00188285+(x-500.733)*(0.00218834-0.00188285)/(504.002-500.733);
    }
    if ((504.002<=x)&&(x<=508.701)) {
          limit =0.00218834+(x-504.002)*(0.00238895-0.00218834)/(508.701-504.002);
    }
    if ((508.701<=x)&&(x<=515.035)) {
          limit =0.00238895+(x-508.701)*(0.00240095-0.00238895)/(515.035-508.701);
    }
    if ((515.035<=x)&&(x<=521.369)) {
          limit =0.00240095+(x-515.035)*(0.00215029-0.00240095)/(521.369-515.035);
    }
    if ((521.369<=x)&&(x<=525.863)) {
          limit =0.00215029+(x-521.369)*(0.00180433-0.00215029)/(525.863-521.369);
    }
    if ((525.863<=x)&&(x<=530.562)) {
          limit =0.00180433+(x-525.863)*(0.00155245-0.00180433)/(530.562-525.863);
    }
    if ((530.562<=x)&&(x<=535.67)) {
          limit =0.00155245+(x-530.562)*(0.00133573-0.00155245)/(535.67-530.562);
    }
    if ((535.67<=x)&&(x<=542.208)) {
          limit =0.00133573+(x-535.67)*(0.00142923-0.00133573)/(542.208-535.67);
    }
    if ((542.208<=x)&&(x<=546.09)) {
          limit =0.00142923+(x-542.208)*(0.00176409-0.00142923)/(546.09-542.208);
    }
    if ((546.09<=x)&&(x<=548.541)) {
          limit =0.00176409+(x-546.09)*(0.00203495-0.00176409)/(548.541-546.09);
    }
    if ((548.541<=x)&&(x<=555.284)) {
          limit =0.00203495+(x-548.541)*(0.00227787-0.00203495)/(555.284-548.541);
    }
    if ((555.284<=x)&&(x<=569.177)) {
          limit =0.00227787+(x-555.284)*(0.00210761-0.00227787)/(569.177-555.284);
    }
    if ((569.177<=x)&&(x<=575.51)) {
          limit =0.00210761+(x-569.177)*(0.00218287-0.00210761)/(575.51-569.177);
    }
    if ((575.51<=x)&&(x<=579.392)) {
          limit =0.00218287+(x-575.51)*(0.00207616-0.00218287)/(579.392-575.51);
    }
    if ((579.392<=x)&&(x<=584.704)) {
          limit =0.00207616+(x-579.392)*(0.00184087-0.00207616)/(584.704-579.392);
    }
    if ((584.704<=x)&&(x<=602.683)) {
          limit =0.00184087+(x-584.704)*(0.00153696-0.00184087)/(602.683-584.704);
    }
    if ((602.683<=x)&&(x<=610.447)) {
          limit =0.00153696+(x-602.683)*(0.00143282-0.00153696)/(610.447-602.683);
    }
    if ((610.447<=x)&&(x<=619.028)) {
          limit =0.00143282+(x-610.447)*(0.00162815-0.00143282)/(619.028-610.447);
    }
    if ((619.028<=x)&&(x<=629.652)) {
          limit =0.00162815+(x-619.028)*(0.00197467-0.00162815)/(629.652-619.028);
    }
    if ((629.652<=x)&&(x<=640.276)) {
          limit =0.00197467+(x-629.652)*(0.00176409-0.00197467)/(640.276-629.652);
    }
    if ((640.276<=x)&&(x<=650.696)) {
          limit =0.00176409+(x-640.276)*(0.0012205-0.00176409)/(650.696-640.276);
    }
    if ((650.696<=x)&&(x<=660.911)) {
          limit =0.0012205+(x-650.696)*(0.000938136-0.0012205)/(660.911-650.696);
    }
    if ((660.911<=x)&&(x<=669.696)) {
          limit =0.000938136+(x-660.911)*(0.00137996-0.000938136)/(669.696-660.911);
    }
    if ((669.696<=x)&&(x<=678.89)) {
          limit =0.00137996+(x-669.696)*(0.00169476-0.00137996)/(678.89-669.696);
    }
    if ((678.89<=x)&&(x<=690.536)) {
          limit =0.00169476+(x-678.89)*(0.00142209-0.00169476)/(690.536-678.89);
    }
    if ((690.536<=x)&&(x<=700.342)) {
          limit =0.00142209+(x-690.536)*(0.00100633-0.00142209)/(700.342-690.536);
    }
    if ((700.342<=x)&&(x<=711.375)) {
          limit =0.00100633+(x-700.342)*(0.00070149-0.00100633)/(711.375-700.342);
    }
    if ((711.375<=x)&&(x<=720.978)) {
          limit =0.00070149+(x-711.375)*(0.000550117-0.00070149)/(720.978-711.375);
    }
    if ((720.978<=x)&&(x<=730.784)) {
          limit =0.000550117+(x-720.978)*(0.00056976-0.000550117)/(730.784-720.978);
    }
    if ((730.784<=x)&&(x<=741.613)) {
          limit =0.00056976+(x-730.784)*(0.000750596-0.00056976)/(741.613-730.784);
    }
    if ((741.613<=x)&&(x<=750.398)) {
          limit =0.000750596+(x-741.613)*(0.000885594-0.000750596)/(750.398-741.613);
    }
    if ((750.398<=x)&&(x<=759.796)) {
          limit =0.000885594+(x-750.398)*(0.00092878-0.000885594)/(759.796-750.398);
    }
    if ((759.796<=x)&&(x<=770.012)) {
          limit =0.00092878+(x-759.796)*(0.00089901-0.00092878)/(770.012-759.796);
    }
    if ((770.012<=x)&&(x<=781.044)) {
          limit =0.00089901+(x-770.012)*(0.000777396-0.00089901)/(781.044-770.012);
    }
    if ((781.044<=x)&&(x<=791.26)) {
          limit =0.000777396+(x-781.044)*(0.00070149-0.000777396)/(791.26-781.044);
    }
    if ((791.26<=x)&&(x<=799.228)) {
          limit =0.00070149+(x-791.26)*(0.000615786-0.00070149)/(799.228-791.26);
    }
    if ((799.228<=x)&&(x<=810.056)) {
          limit =0.000615786+(x-799.228)*(0.000631412-0.000615786)/(810.056-799.228);
    }
    if ((810.056<=x)&&(x<=831.304)) {
          limit =0.000631412+(x-810.056)*(0.000600546-0.000631412)/(831.304-810.056);
    }
    if ((831.304<=x)&&(x<=850.1)) {
          limit =0.000600546+(x-831.304)*(0.000662202-0.000600546)/(850.1-831.304);
    }
    if ((850.1<=x)&&(x<=861.133)) {
          limit =0.000662202+(x-850.1)*(0.000642585-0.000662202)/(861.133-850.1);
    }
    if ((861.133<=x)&&(x<=870.531)) {
          limit =0.000642585+(x-861.133)*(0.00065232-0.000642585)/(870.531-861.133);
    }
    if ((870.531<=x)&&(x<=889.736)) {
          limit =0.00065232+(x-870.531)*(0.000634584-0.00065232)/(889.736-870.531);
    }
    if ((889.736<=x)&&(x<=901.382)) {
          limit =0.000634584+(x-889.736)*(0.000594556-0.000634584)/(901.382-889.736);
    }
    if ((901.382<=x)&&(x<=920.995)) {
          limit =0.000594556+(x-901.382)*(0.000634584-0.000594556)/(920.995-901.382);
    }
    if ((920.995<=x)&&(x<=929.985)) {
          limit =0.000634584+(x-920.995)*(0.000687567-0.000634584)/(929.985-920.995);
    }
    if ((929.985<=x)&&(x<=939.587)) {
          limit =0.000687567+(x-929.985)*(0.00091263-0.000687567)/(939.587-929.985);
    }
    if ((939.587<=x)&&(x<=951.233)) {
          limit =0.00091263+(x-939.587)*(0.00114639-0.00091263)/(951.233-939.587);
    }
    if ((951.233<=x)&&(x<=958.997)) {
          limit =0.00114639+(x-951.233)*(0.00127362-0.00114639)/(958.997-951.233);
    }
    if ((958.997<=x)&&(x<=969.825)) {
          limit =0.00127362+(x-958.997)*(0.00144725-0.00127362)/(969.825-958.997);
    }
    if ((969.825<=x)&&(x<=980.04)) {
          limit =0.00144725+(x-969.825)*(0.00154082-0.00144725)/(980.04-969.825);
    }
    if ((980.04<=x)&&(x<=990.869)) {
          limit =0.00154082+(x-980.04)*(0.00156809-0.00154082)/(990.869-980.04);
    }
    if ((990.869<=x)&&(x<=1000)) {
          limit =0.00156809+(x-990.869)*(0.00154082-0.00156809)/(1000-990.869);
    }
}
if((y>0.02)&&(y<0.1)){
    if ((140<=x)&&(x<=144.98)) {
          limit =0.104991+(x-140)*(0.097377-0.104991)/(144.98-140);
    }
    if ((144.98<=x)&&(x<=151.049)) {
          limit =0.097377+(x-144.98)*(0.0947258-0.097377)/(151.049-144.98);
    }
    if ((151.049<=x)&&(x<=160.747)) {
          limit =0.0947258+(x-151.049)*(0.0715165-0.0947258)/(160.747-151.049);
    }
    if ((160.747<=x)&&(x<=171.073)) {
          limit =0.0715165+(x-160.747)*(0.0806712-0.0715165)/(171.073-160.747);
    }
    if ((171.073<=x)&&(x<=181.174)) {
          limit =0.0806712+(x-171.073)*(0.0589507-0.0806712)/(181.174-171.073);
    }
    if ((181.174<=x)&&(x<=190.856)) {
          limit =0.0589507+(x-181.174)*(0.0320375-0.0589507)/(190.856-181.174);
    }
    if ((190.856<=x)&&(x<=201.155)) {
          limit =0.0320375+(x-190.856)*(0.0212821-0.0320375)/(201.155-190.856);
    }
    if ((201.155<=x)&&(x<=209.671)) {
          limit =0.0212821+(x-201.155)*(0.0300893-0.0212821)/(209.671-201.155);
    }
    if ((209.671<=x)&&(x<=221.232)) {
          limit =0.0300893+(x-209.671)*(0.0522609-0.0300893)/(221.232-209.671);
    }
    if ((221.232<=x)&&(x<=229.318)) {
          limit =0.0522609+(x-221.232)*(0.0441731-0.0522609)/(229.318-221.232);
    }
    if ((229.318<=x)&&(x<=241.439)) {
          limit =0.0441731+(x-229.318)*(0.0303167-0.0441731)/(241.439-229.318);
    }
    if ((241.439<=x)&&(x<=250.528)) {
          limit =0.0303167+(x-241.439)*(0.0218778-0.0303167)/(250.528-241.439);
    }
    if ((250.528<=x)&&(x<=260.25)) {
          limit =0.0218778+(x-250.528)*(0.0266079-0.0218778)/(260.25-250.528);
    }
    if ((260.25<=x)&&(x<=270.162)) {
          limit =0.0266079+(x-260.25)*(0.0250527-0.0266079)/(270.162-260.25);
    }
    if ((270.162<=x)&&(x<=280.479)) {
          limit =0.0250527+(x-270.162)*(0.0237071-0.0250527)/(280.479-270.162);
    }
    if ((280.479<=x)&&(x<=290.779)) {
          limit =0.0237071+(x-280.479)*(0.0160677-0.0237071)/(290.779-280.479);
    }
    if ((290.779<=x)&&(x<=301.084)) {
          limit =0.0160677+(x-290.779)*(0.0120701-0.0160677)/(301.084-290.779);
    }
    if ((301.084<=x)&&(x<=320.3)) {
          limit =0.0120701+(x-301.084)*(0.0105935-0.0120701)/(320.3-301.084);
    }
    if ((320.3<=x)&&(x<=341.154)) {
          limit =0.0105935+(x-320.3)*(0.0134454-0.0105935)/(341.154-320.3);
    }
    if ((341.154<=x)&&(x<=360.589)) {
          limit =0.0134454+(x-341.154)*(0.0165589-0.0134454)/(360.589-341.154);
    }
    if ((360.589<=x)&&(x<=380.416)) {
          limit =0.0165589+(x-360.589)*(0.0157879-0.0165589)/(380.416-360.589);
    }
    if ((380.416<=x)&&(x<=399.641)) {
          limit =0.0157879+(x-380.416)*(0.0163935-0.0157879)/(399.641-380.416);
    }
    if ((399.641<=x)&&(x<=419.846)) {
          limit =0.0163935+(x-399.641)*(0.00922782-0.0163935)/(419.846-399.641);
    }
    if ((419.846<=x)&&(x<=440.282)) {
          limit =0.00922782+(x-419.846)*(0.00902174-0.00922782)/(440.282-419.846);
    }
    if ((440.282<=x)&&(x<=461.108)) {
          limit =0.00902174+(x-440.282)*(0.0066759-0.00902174)/(461.108-440.282);
    }
    if ((461.108<=x)&&(x<=481.334)) {
          limit =0.0066759+(x-461.108)*(0.00562861-0.0066759)/(481.334-461.108);
    }
    if ((481.334<=x)&&(x<=499.753)) {
          limit =0.00562861+(x-481.334)*(0.00638106-0.00562861)/(499.753-481.334);
    }
    if ((499.753<=x)&&(x<=551.556)) {
          limit =0.00638106+(x-499.753)*(0.00664248-0.00638106)/(551.556-499.753);
    }
    if ((551.556<=x)&&(x<=600.92)) {
          limit =0.00664248+(x-551.556)*(0.00577164-0.00664248)/(600.92-551.556);
    }
    if ((600.92<=x)&&(x<=649.87)) {
          limit =0.00577164+(x-600.92)*(0.00405165-0.00577164)/(649.87-600.92);
    }
    if ((649.87<=x)&&(x<=700.425)) {
          limit =0.00405165+(x-649.87)*(0.00222414-0.00405165)/(700.425-649.87);
    }
    if ((700.425<=x)&&(x<=749.984)) {
          limit =0.00222414+(x-700.425)*(0.00163757-0.00222414)/(749.984-700.425);
    }
    if ((749.984<=x)&&(x<=799.743)) {
          limit =0.00163757+(x-749.984)*(0.00114957-0.00163757)/(799.743-749.984);
    }
    if ((799.743<=x)&&(x<=850.527)) {
          limit =0.00114957+(x-799.743)*(0.00106888-0.00114957)/(850.527-799.743);
    }
    if ((850.527<=x)&&(x<=900.313)) {
          limit =0.00106888+(x-850.527)*(0.00128377-0.00106888)/(900.313-850.527);
    }
    if ((900.313<=x)&&(x<=950.517)) {
          limit =0.00128377+(x-900.313)*(0.00201678-0.00128377)/(950.517-900.313);
    }
    if ((950.517<=x)&&(x<=999.901)) {
          limit =0.00201678+(x-950.517)*(0.0025469-0.00201678)/(999.901-950.517);
    }
}
return limit;
}