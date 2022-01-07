#include "THDM.h"
#include "Constraints.h"
#include "DecayTable.h"
#include "HBHS.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>

using namespace std;

// wei at 2019-july-16 // instruction
//
//  for get the br
//
// study about c++ class
//http://www.runoob.com/cplusplus/cpp-static-members.html

int main(int argc, char* argv[]) {

  int type_in;
  double mH,mA;
  bool   info=true;
//   printf("input type,tb,cba\n");
  scanf("%d%lf%lf",&type_in,&mH,&mA);
  // for(double tbexp  = -1; tbexp<1.716; tbexp=tbexp+0.0539794)
  // {
  //     double tb  = pow(10,tbexp);
  //     // tb=0.5;
  //     for(double cba  = -1.0; cba<=1; cba=cba+0.01)
  //     {
  for(double tbexp  = -1; tbexp<1.716; tbexp=tbexp+0.0539794)
  {
      double tb  = pow(10,tbexp);
      // tb=0.5;
      for(double cba  = -1.0; cba<=1; cba=cba+0.01)
      {
          double mh  = 125;
          double mC;
          // cba=-0.1;
          if(mA> mH)
          {
             mC  =  mA;
          }
          else
          {
             mC  =  mH;
          }

          ltini();
        
          
        
          THDM model;
        
          SM sm; 
          model.set_SM(sm);
          double sba_in;        
          if (cba>=0) sba_in =  sqrt(1-cba*cba);
          if (cba<0)  sba_in = -sqrt(1-cba*cba);
          double m12_2=mH*mH*sin(atan(tb))*cos(atan(tb)) ;
        
          bool pset = model.set_param_phys(mh,mH,mA,mC,sba_in,0,0,m12_2,tb);
        
          if (!pset) {
        	cerr << "The parameters you have specified were not valid\n";
        	return -1;
          }
        
         // 
        
        
          model.set_yukawas_type(type_in);
        
          // Reference SM Higgs mass for EW precision observables
          double mh_ref = 125.;  
        
          // Write model information to the screen
          // model.print_param_phys();
          // model.print_param_gen();	  
        
          Constraints check(model);
          // check.print_all(mh_ref);
        
          double _gammatot[4];
          
          double _br_hiuu[3][3];
          double _br_hidd[3][3];
          double _br_hill[3][3];
          double _br_hiww[3];
          double _br_hizz[3];
          double _br_higaga[3];
          double _br_higg[3];
          
          double _br_hihjhj[3][3];
          double _br_hizhj[3][3];
          double _br_hiwhpm[3];
          double _br_hihpmhpm[3];
          
          double _br_tHb;
          double _br_Hpquqd[3][3];
          double _br_Hplv[3];
          double _br_HpWHi[3];
        
          check.get_Gamma(_gammatot);
          check.get_BR_Hi(_br_hiuu, _br_hidd, _br_hill,
                   _br_hiww, _br_hizz, _br_higaga, _br_higg,
                   _br_hihjhj, _br_hizhj, _br_hiwhpm, _br_hihpmhpm);
          check.get_BR_Hpm(_br_tHb, _br_Hpquqd,
                              _br_Hplv, _br_HpWHi);
        
          int hid=0;
          int Hid=1;
          int aid=2;
          
          double brAhZ=_br_hizhj[aid][hid];
    
          double brAtautau=_br_hill[aid][2];
          double brAss=_br_hidd[aid][1];
          double brAbb=_br_hidd[aid][2];
          double brAtt=_br_hiuu[aid][2];
          double brAgg=_br_higg[aid];
    
          double brHtautau=_br_hill[Hid][2]; //_br_hill[hid][2]
          double brHss=_br_hidd[Hid][1];
          double brHbb=_br_hidd[Hid][2];
          double brHtt=_br_hiuu[Hid][2];
          
          double brHZZ=_br_hizz[Hid];
          double brHWW=_br_hiww[Hid];
          double brHgg=_br_higg[Hid];
          double brHhh=_br_hihjhj[Hid][hid];
    
          double brhbb=_br_hidd[hid][2];

          // cout<<brAhZ<<" "<<brhbb<<" "<<brHZZ<<" "<<brHWW<<endl;
          string filename = "./work/Br.txt";
          ofstream brout;
          brout.open(filename.c_str(),std::ios_base::app);
          brout<<setw(12)<<cba<<setw(12)<<tb<< setw(12);
          brout <<" "<<setw(12)<<brAtautau<<" "<<setw(12)<<brAss<<" "<<setw(12)<<brAbb<<" "<<setw(12)<<brAtt;
          brout <<" "<<setw(12)<<brAgg<<" "<<setw(12)<<brAhZ<<" "<<setw(12)<<brHtautau;
          brout <<" "<<setw(12)<<brHss<<" "<<setw(12)<<brHbb<<" "<<setw(12)<<brHtt<<" "<<setw(12)<<brHZZ;
          brout <<" "<<setw(12)<<brHWW<<" "<<setw(12)<<brHhh<<" "<<setw(12)<<brHgg<<" "<<setw(12)<<brhbb<<endl;

          // for the project, we need
          // production: all of H, all of A
          // decay: most of H and A : done in this code
        
        
        
        
          // Write LesHouches-style output
          // model.write_LesHouches(file,true,true,true,true);
        
          // Print Higgs decays to the screen
          // DecayTable table(model);
          // table.print_decays(1);
          // table.print_decays(2);
          // table.print_decays(3);
          // table.print_decays(4);
        
         // Print parameters than can be used as input for HDECAY
         // model.print_hdecay();
        
        
          ltexi();
      }
  }
  
}
