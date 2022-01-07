double Att_CMS_full_coup(double x, double y)
{
y=y*100; // this is the following y is in percent
double limit = 1000;
if (y<=0.5)
{   
      if ((400<=x)&&(x<=424.848)) {
            limit =0.59355+(x-400)*(0.566094-0.59355)/(424.848-400);
      }
      if ((424.848<=x)&&(x<=449.628)) {
            limit =0.566094+(x-424.848)*(0.573907-0.566094)/(449.628-424.848);
      }
      if ((449.628<=x)&&(x<=474.421)) {
            limit =0.573907+(x-449.628)*(0.565376-0.573907)/(474.421-449.628);
      }
      if ((474.421<=x)&&(x<=498.651)) {
            limit =0.565376+(x-474.421)*(0.546521-0.565376)/(498.651-474.421);
      }
      if ((498.651<=x)&&(x<=524.869)) {
            limit =0.546521+(x-498.651)*(0.536273-0.546521)/(524.869-498.651);
      }
      if ((524.869<=x)&&(x<=549.905)) {
            limit =0.536273+(x-524.869)*(0.585377-0.536273)/(549.905-524.869);
      }
      if ((549.905<=x)&&(x<=600.332)) {
            limit =0.585377+(x-549.905)*(0.585522-0.585377)/(600.332-549.905);
      }
      if ((600.332<=x)&&(x<=624.571)) {
            limit =0.585522+(x-600.332)*(0.553763-0.585522)/(624.571-600.332);
      }
      if ((624.571<=x)&&(x<=675.247)) {
            limit =0.553763+(x-624.571)*(0.605522-0.553763)/(675.247-624.571);
      }
      if ((675.247<=x)&&(x<=724.697)) {
            limit =0.605522+(x-675.247)*(0.776846-0.605522)/(724.697-675.247);
      }
      if ((724.697<=x)&&(x<=750)) {
            limit =0.776846+(x-724.697)*(0.825949-0.776846)/(750-724.697);
      }
}
if ((0.5<y) && (y<=1))
{
      if ((400<=x)&&(x<=424.778)) {
            limit =0.735426+(x-400)*(0.695067-0.735426)/(424.778-400);
      }
      if ((424.778<=x)&&(x<=475.371)) {
            limit =0.695067+(x-424.778)*(0.695067-0.695067)/(475.371-424.778);
      }
      if ((475.371<=x)&&(x<=499.853)) {
            limit =0.695067+(x-475.371)*(0.655605-0.695067)/(499.853-475.371);
      }
      if ((499.853<=x)&&(x<=525.039)) {
            limit =0.655605+(x-499.853)*(0.634081-0.655605)/(525.039-499.853);
      }
      if ((525.039<=x)&&(x<=550.182)) {
            limit =0.634081+(x-525.039)*(0.724664-0.634081)/(550.182-525.039);
      }
      if ((550.182<=x)&&(x<=574.65)) {
            limit =0.724664+(x-550.182)*(0.716592-0.724664)/(574.65-550.182);
      }
      if ((574.65<=x)&&(x<=600.062)) {
            limit =0.716592+(x-574.65)*(0.726457-0.716592)/(600.062-574.65);
      }
      if ((600.062<=x)&&(x<=624.548)) {
            limit =0.726457+(x-600.062)*(0.676233-0.726457)/(624.548-600.062);
      }
      if ((624.548<=x)&&(x<=650.664)) {
            limit =0.676233+(x-624.548)*(0.70583-0.676233)/(650.664-624.548);
      }
      if ((650.664<=x)&&(x<=675.597)) {
            limit =0.70583+(x-650.664)*(0.726457-0.70583)/(675.597-650.664);
      }
      if ((675.597<=x)&&(x<=700.501)) {
            limit =0.726457+(x-675.597)*(0.81704-0.726457)/(700.501-675.597);
      }
      if ((700.501<=x)&&(x<=725.394)) {
            limit =0.81704+(x-700.501)*(0.93722-0.81704)/(725.394-700.501);
      }
      if ((725.394<=x)&&(x<=750)) {
            limit =0.93722+(x-725.394)*(1.01525-0.93722)/(750-725.394);
      }
}
if ((1<y) && (y<=2.5))
{
      if ((400<=x)&&(x<=425.178)) {
            limit =0.925926+(x-400)*(0.869136-0.925926)/(425.178-400);
      }
      if ((425.178<=x)&&(x<=475.059)) {
            limit =0.869136+(x-425.178)*(0.866667-0.869136)/(475.059-425.178);
      }
      if ((475.059<=x)&&(x<=524.941)) {
            limit =0.866667+(x-475.059)*(0.771605-0.866667)/(524.941-475.059);
      }
      if ((524.941<=x)&&(x<=550.594)) {
            limit =0.771605+(x-524.941)*(0.918519-0.771605)/(550.594-524.941);
      }
      if ((550.594<=x)&&(x<=600.475)) {
            limit =0.918519+(x-550.594)*(0.95679-0.918519)/(600.475-550.594);
      }
      if ((600.475<=x)&&(x<=625.653)) {
            limit =0.95679+(x-600.475)*(0.88642-0.95679)/(625.653-600.475);
      }
      if ((625.653<=x)&&(x<=650.119)) {
            limit =0.88642+(x-625.653)*(0.885185-0.88642)/(650.119-625.653);
      }
      if ((650.119<=x)&&(x<=675.297)) {
            limit =0.885185+(x-650.119)*(0.876543-0.885185)/(675.297-650.119);
      }
      if ((675.297<=x)&&(x<=700.238)) {
            limit =0.876543+(x-675.297)*(0.996296-0.876543)/(700.238-675.297);
      }
      if ((700.238<=x)&&(x<=725.416)) {
            limit =0.996296+(x-700.238)*(1.20741-0.996296)/(725.416-700.238);
      }
      if ((725.416<=x)&&(x<=750)) {
            limit =1.20741+(x-725.416)*(1.32469-1.20741)/(750-725.416);
      }
}
if ((2.5<y) && (y<=5))
{
      if ((400<=x)&&(x<=424.941)) {
            limit =1.09442+(x-400)*(1.0286-1.09442)/(424.941-400);
      }
      if ((424.941<=x)&&(x<=449.881)) {
            limit =1.0286+(x-424.941)*(1.03832-1.0286)/(449.881-424.941);
      }
      if ((449.881<=x)&&(x<=474.584)) {
            limit =1.03832+(x-449.881)*(1.00862-1.03832)/(474.584-449.881);
      }
      if ((474.584<=x)&&(x<=500.238)) {
            limit =1.00862+(x-474.584)*(0.880405-1.00862)/(500.238-474.584);
      }
      if ((500.238<=x)&&(x<=526.841)) {
            limit =0.880405+(x-500.238)*(0.975498-0.880405)/(526.841-500.238);
      }
      if ((526.841<=x)&&(x<=550.119)) {
            limit =0.975498+(x-526.841)*(1.11659-0.975498)/(550.119-526.841);
      }
      if ((550.119<=x)&&(x<=575.297)) {
            limit =1.11659+(x-550.119)*(1.1772-1.11659)/(575.297-550.119);
      }
      if ((575.297<=x)&&(x<=599.762)) {
            limit =1.1772+(x-575.297)*(1.21484-1.1772)/(599.762-575.297);
      }
      if ((599.762<=x)&&(x<=625.416)) {
            limit =1.21484+(x-599.762)*(1.08826-1.21484)/(625.416-599.762);
      }
      if ((625.416<=x)&&(x<=650.356)) {
            limit =1.08826+(x-625.416)*(1.05528-1.08826)/(650.356-625.416);
      }
      if ((650.356<=x)&&(x<=674.584)) {
            limit =1.05528+(x-650.356)*(1.0453-1.05528)/(674.584-650.356);
      }
      if ((674.584<=x)&&(x<=700.238)) {
            limit =1.0453+(x-674.584)*(1.24384-1.0453)/(700.238-674.584);
      }
      if ((700.238<=x)&&(x<=724.941)) {
            limit =1.24384+(x-700.238)*(1.5442-1.24384)/(724.941-700.238);
      }
      if ((724.941<=x)&&(x<=750)) {
            limit =1.5442+(x-724.941)*(1.61631-1.5442)/(750-724.941);
      }
}
if ((5<y) && (y<=10))
{
      if ((400<=x)&&(x<=424.89)) {
            limit =1.3231+(x-400)*(1.19591-1.3231)/(424.89-400);
      }
      if ((424.89<=x)&&(x<=449.78)) {
            limit =1.19591+(x-424.89)*(1.13596-1.19591)/(449.78-424.89);
      }
      if ((449.78<=x)&&(x<=500.055)) {
            limit =1.13596+(x-449.78)*(0.973684-1.13596)/(500.055-449.78);
      }
      if ((500.055<=x)&&(x<=525.275)) {
            limit =0.973684+(x-500.055)*(0.997076-0.973684)/(525.275-500.055);
      }
      if ((525.275<=x)&&(x<=550.495)) {
            limit =0.997076+(x-525.275)*(1.17982-0.997076)/(550.495-525.275);
      }
      if ((550.495<=x)&&(x<=575.22)) {
            limit =1.17982+(x-550.495)*(1.32164-1.17982)/(575.22-550.495);
      }
      if ((575.22<=x)&&(x<=599.78)) {
            limit =1.32164+(x-575.22)*(1.38743-1.32164)/(599.78-575.22);
      }
      if ((599.78<=x)&&(x<=625.33)) {
            limit =1.38743+(x-599.78)*(1.32602-1.38743)/(625.33-599.78);
      }
      if ((625.33<=x)&&(x<=650.055)) {
            limit =1.32602+(x-625.33)*(1.35234-1.32602)/(650.055-625.33);
      }
      if ((650.055<=x)&&(x<=674.945)) {
            limit =1.35234+(x-650.055)*(1.51316-1.35234)/(674.945-650.055);
      }
      if ((674.945<=x)&&(x<=700)) {
            limit =1.51316+(x-674.945)*(1.05702-1.51316)/(700-674.945);
      }
      if ((700<=x)&&(x<=725.385)) {
            limit =1.05702+(x-700)*(0.98538-1.05702)/(725.385-700);
      }
      if ((725.385<=x)&&(x<=734.615)) {
            limit =0.98538+(x-725.385)*(0.994152-0.98538)/(734.615-725.385);
      }
      if ((734.615<=x)&&(x<=744.835)) {
            limit =0.994152+(x-734.615)*(0.96345-0.994152)/(744.835-734.615);
      }
      if ((744.835<=x)&&(x<=750)) {
            limit =0.96345+(x-744.835)*(1.02485-0.96345)/(750-744.835);
      }
}
if ((10<y) && (y<=25))
{
      if ((400<=x)&&(x<=424.466)) {
            limit =1.82597+(x-400)*(1.79221-1.82597)/(424.466-400);
      }
      if ((424.466<=x)&&(x<=450.119)) {
            limit =1.79221+(x-424.466)*(1.62597-1.79221)/(450.119-424.466);
      }
      if ((450.119<=x)&&(x<=475.059)) {
            limit =1.62597+(x-450.119)*(1.67532-1.62597)/(475.059-450.119);
      }
      if ((475.059<=x)&&(x<=499.762)) {
            limit =1.67532+(x-475.059)*(1.52727-1.67532)/(499.762-475.059);
      }
      if ((499.762<=x)&&(x<=525.891)) {
            limit =1.52727+(x-499.762)*(1.49091-1.52727)/(525.891-499.762);
      }
      if ((525.891<=x)&&(x<=550.356)) {
            limit =1.49091+(x-525.891)*(1.61039-1.49091)/(550.356-525.891);
      }
      if ((550.356<=x)&&(x<=574.822)) {
            limit =1.61039+(x-550.356)*(1.68312-1.61039)/(574.822-550.356);
      }
      if ((574.822<=x)&&(x<=599.525)) {
            limit =1.68312+(x-574.822)*(1.74545-1.68312)/(599.525-574.822);
      }
      if ((599.525<=x)&&(x<=624.466)) {
            limit =1.74545+(x-599.525)*(1.67273-1.74545)/(624.466-599.525);
      }
      if ((624.466<=x)&&(x<=650.119)) {
            limit =1.67273+(x-624.466)*(1.54026-1.67273)/(650.119-624.466);
      }
      if ((650.119<=x)&&(x<=699.525)) {
            limit =1.54026+(x-650.119)*(1.64935-1.54026)/(699.525-650.119);
      }
      if ((699.525<=x)&&(x<=734.917)) {
            limit =1.64935+(x-699.525)*(1.50649-1.64935)/(734.917-699.525);
      }
      if ((734.917<=x)&&(x<=739.667)) {
            limit =1.50649+(x-734.917)*(1.45455-1.50649)/(739.667-734.917);
      }
      if ((739.667<=x)&&(x<=745.606)) {
            limit =1.45455+(x-739.667)*(1.47273-1.45455)/(745.606-739.667);
      }
      if ((745.606<=x)&&(x<=750)) {
            limit =1.47273+(x-745.606)*(1.35584-1.47273)/(750-745.606);
      }
}


return limit;
}
