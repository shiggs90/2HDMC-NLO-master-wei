#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>

#include "THDM.h"
#include "SM.h"
#include "Constraints.h"
#include "DecayTable.h"

#include "cross_sections/XS_8TeV_bb.h"
#include "cross_sections/XS_8TeV_gg.h"
#include "cross_sections/XS_8TeV_wbf.h"
#include "cross_sections/XS_8TeV_zh.h"
#include "cross_sections/XS_13TeV_bb.h"
#include "cross_sections/XS_13TeV_gg.h"
#include "cross_sections/XS_13TeV_wbf.h"
#include "cross_sections/XS_13TeV_zh.h"
#include "cross_sections/XS_13TeV_tH.h"
#include "cross_sections/XS_13TeV_ttH.h"
#include "cross_sections/XS_13TeV_tWH.h"
#include "cross_sections/XS_13TeV_WH.h"

#include "limits/gg_H2tata.h"


// H/A->mumu  arXiv:1901.08144 [hep-ex]. arXiv:1907.03152 [hep-ex].
#include "./experiments/Amumu/bbSmumu_CMS.h"
#include "./experiments/Amumu/ggSmumu_CMS.h"
#include "./experiments/Amumu/bbSmumu_ATLAS.h"
#include "./experiments/Amumu/ggSmumu_ATLAS.h"
// H/A->bb
#include "./experiments/Xbb/bbSbb_CMS.h"
#include "./experiments/Xbb/bbSbb_ATLAS.h"
// H/A->tautau
#include "./experiments/Atautau/bbStautau_CMS.h"
#include "./experiments/Atautau/ggStautau_CMS.h"
#include "./experiments/Atautau/bbA2tau_CMS.h"
#include "./experiments/Atautau/bbStautau_ATLAS.h"
#include "./experiments/Atautau/ggStautau_ATLAS.h"
// H/A-> gammagamma
#include "./experiments/Agammagamma/ppXyy_8TeV.h"
#include "./experiments/Agammagamma/Xyy_high_low_ATLAS.h"
#include "./experiments/Agammagamma/Xyy_low_CMS.h"
// H/A->tt
#include "./experiments/Att/Att_CMS_full_coup.h"
#include "./experiments/Att/Htt_CMS_full_coup.h"
#include "./experiments/Att/twqAtt_CMS.h"
#include "./experiments/Att/twqHtt_CMS.h"
// 4t
#include "./experiments/Att/4top/tttt_ATLAS_CMS.h"
#include "./experiments/Att/4top/tttt_low_CMS_coup.h"

// H ->VV
#include "./experiments/XWW/ppSZZ_CMS.h"
#include "./experiments/XWW/VBFHWW_ATLAS.h"
#include "./experiments/XWW/ggHWW_ATLAS.h"
#include "./experiments/XWW/VBFWW_CMS.h"
#include "./experiments/XWW/ggHWW_CMS.h"

// h->aa

#include "./experiments/haa/haa2b2mu_CMS.h"
#include "./experiments/haa/haa2b2tau_CMS.h"
#include "./experiments/haa/haa4tau_CMS.h"
#include "./experiments/haa/haa2mu2tau_CMS.h"
#include "./experiments/haa/haa2b2mu_ATLAS.h"
#include "./experiments/haa/ATLAS_VH4b.h"


//  AZh
#include "./experiments/AZh/ggAzhbb_ATLAS.h"
#include "./experiments/AZh/bbAzhbb_ATLAS.h"
#include "./experiments/AZh/ggAZhbb_CMS.h"
#include "./experiments/AZh/bbAZhbb_CMS.h"
#include "./experiments/AZh/ggAZhtautau_CMS.h"
// Hhh
#include "./experiments/Hhh/ppShh_ATLAS.h"
#include "./experiments/Hhh/ppShh_CMS.h"
// AHZ
// #include "./experiments/AHZ/AHZ13_bbA_ATLAS_full.hh"
// #include "./experiments/AHZ/AHZ13_ggf_ATLAS_full.hh"
// #include "./experiments/AHZ/ppAHZllbb_CMS.hh"



using namespace std;

class My2HDMC{
public:
    //Constructor and Destructor
    My2HDMC(double mh, double mH, double mA, double mC, double tb, double cba, double m122, int type, char* fileout);
    ~My2HDMC() {;}

    //Run Functions
    void   read_xs();
    void   read_br();

    //Print Functions
    void   print_results();
    void   print_checks(bool info);
private:

    double _mh;
    double _mH;
    double _mA;
    double _mC;
    double _m12_2;
    // double _m12;
    double _tb;
    double _sba;
    double _cba;
    int    _type;
    double _lambda_6;
    double _lambda_7;
    bool   _switched;

    char* _fileout;

    THDM _model;

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

    double _xsratio_gg[3];
    double _xsratio_gg_NLO[3];
    double _xsratio_bb[3];
    double _xsratio_zh[3];
    double _xsratio_wbf[3];
    double _xsratio_th[3];
    double _xsratio_tth[3];
    double _xsratio_wh[3];
    double _xsratio_twh[3];

    double _xs_hsm_8tev_gg[3];
    double _xs_hsm_8tev_bb[3];
    double _xs_hsm_8tev_zh[3];
    double _xs_hsm_8tev_wbf[3];
    double _xs_hsm_13tev_gg[3];
    double _xs_hsm_13tev_bb[3];
    double _xs_hsm_13tev_zh[3];
    double _xs_hsm_13tev_wbf[3];
    double _xs_hsm_13tev_th[3];
    double _xs_hsm_13tev_tth[3];
    double _xs_hsm_13tev_wh[3];
    double _xs_hsm_13tev_twh[3];

};


My2HDMC::My2HDMC(double mh, double mH, double mA, double mC, double tb, double cba, double m122, int type, char* fileout)
{
    //initialize
    _mh=mh;
    _mH=mH;
    _mA=mA;
    _mC=mC;
    // _m12=m12;
    _m12_2=m122;
    _tb=tb;
    _cba=cba;
    _type=type;
    _sba=0;
    if (cba>=0) _sba =  sqrt(1-cba*cba);
    if (cba<0)  _sba = -sqrt(1-cba*cba);
    _lambda_6=0;
    _lambda_7=0;
    _fileout=fileout;

    _switched=false;
    if(_mH<_mh)
    {
        _switched=true;
        double mx=_mh;   _mh=_mH;   _mH=mx;
        double xba=_sba; _sba=-_cba; _cba=xba;
    }

    // Create SM and set top mass to 175 GeV
    SM sm;
    sm.set_qmass_pole(6, 172.5);
    sm.set_qmass_pole(5, 4.75);
    sm.set_qmass_pole(4, 1.42);
    sm.set_lmass_pole(3, 1.77684);
    sm.set_alpha(1./127.934);
    sm.set_alpha0(1./137.0359997);
    sm.set_alpha_s(0.119);
    sm.set_MZ(91.15349);
    sm.set_MW(80.36951);
    sm.set_gamma_Z(2.49581);
    sm.set_gamma_W(2.08856);
    sm.set_GF(1.16637E-5);

    // Create 2HDM and set SM parameters
    _model.set_SM(sm);
    bool pset = _model.set_param_phys(_mh,_mH,_mA,_mC,_sba,0,0,_m12_2,_tb);
    if (!pset){cout << "The specified parameters are not valid"<<endl;}
    _model.set_yukawas_type(_type);

    // read all the Br
    read_br();
    read_xs();
}

void My2HDMC::read_br()
{
    Constraints constr(_model);
    // Constraints constr(_model,false);

    constr.get_Gamma(_gammatot);
    // cout<<"_gammatot = "<<_gammatot[1]<<endl;
    constr.get_BR_Hi(_br_hiuu, _br_hidd, _br_hill,
                     _br_hiww, _br_hizz, _br_higaga, _br_higg,
                     _br_hihjhj, _br_hizhj, _br_hiwhpm, _br_hihpmhpm);
    constr.get_BR_Hpm(_br_tHb, _br_Hpquqd,
                      _br_Hplv, _br_HpWHi);

    constr.get_ggHXS(_xsratio_gg[2], _xsratio_gg[0], _xsratio_gg[1]);
    constr.get_ggHXS_NLO(_xsratio_gg_NLO[2], _xsratio_gg_NLO[0], _xsratio_gg_NLO[1]);
    // cout<<"_xsratio_gg[2], _xsratio_gg[0], _xsratio_gg[1]"<< _xsratio_gg[2]<<" "<< _xsratio_gg[0]<<" "<< _xsratio_gg[1]<<endl;
    // cout<<"get_ggHXS_NLO(_xsratio_gg_NLO[2], _xsratio_gg_NLO[0], _xsratio_gg_NLO[1] "<<_xsratio_gg_NLO[2]<<" "<<  _xsratio_gg_NLO[0]<<" "<<  _xsratio_gg_NLO[1] <<endl;
    constr.get_bbHXS(_xsratio_bb[2], _xsratio_bb[0], _xsratio_bb[1]);
    // cout<<"_xsratio_bb[2], _xsratio_bb[0], _xsratio_bb[1] "<<_xsratio_bb[2]<<" "<< _xsratio_bb[0]<<" "<<_xsratio_bb[1]<<endl;

    constr.get_ttHXS(_xsratio_tth[2], _xsratio_tth[0], _xsratio_tth[1]);

    // cout<<"_xsratio_tth[2], _xsratio_tth[0], _xsratio_tth[1]) " << _xsratio_tth[2]<<" "<<_xsratio_tth[0]<<" "<< _xsratio_tth[1]<<endl;

    constr.get_ZZHXS(_xsratio_zh[2], _xsratio_zh[0], _xsratio_zh[1]);
    // cout<<"_xsratio_zh[2], _xsratio_zh[0], _xsratio_zh[1] = "<<_xsratio_zh[2]<<" "<< _xsratio_zh[0]<<" "<<_xsratio_zh[1]<<endl;
    constr.get_WWHXS(_xsratio_wh[2], _xsratio_wh[0], _xsratio_wh[1]);
    double RWW=0.77; double RZZ=1.0-RWW;
    // if (_mA<350) {
    //   _xsratio_tth[2]=1./_tb*1./_tb;
    // }
    // if (_mH<350) {
    //   _xsratio_tth[1]=(_cba-_sba/_tb)*(_cba-_sba/_tb);
    // }
    // _xsratio_tth[0]=(_sba+_cba/_tb)*(_sba+_cba/_tb);
    // _xsratio_zh[0]=_sba*_sba;  _xsratio_zh[1]=_cba*_cba;  _xsratio_zh[2]=0;
    // _xsratio_wbf[0]=_sba*_sba ;_xsratio_wbf[1]=_cba*_cba; _xsratio_wbf[2]=0;
    // _xsratio_wh[0]=_sba*_sba;  _xsratio_wh[1]=_cba*_cba;  _xsratio_wh[2]=0;
    _xsratio_wbf[0]=RWW*_xsratio_wh[0] +RZZ*_xsratio_zh[0];
    _xsratio_wbf[1]=RWW*_xsratio_wh[1] +RZZ*_xsratio_zh[1];
    _xsratio_wbf[2]=RWW*_xsratio_wh[2] +RZZ*_xsratio_zh[2];

    // ATLAS-CONF-2019-005 Combined measurements of Higgs boson.pdf  table 9

    _xsratio_th[0]=2.63*_xsratio_tth[0]+3.58*_xsratio_wh[0]-5.21*sqrt(_xsratio_tth[0]*_xsratio_wh[0]);
    _xsratio_th[1]=2.63*_xsratio_tth[1]+3.58*_xsratio_wh[1]-5.21*sqrt(_xsratio_tth[1]*_xsratio_wh[1]);
    _xsratio_th[2]=2.63*_xsratio_tth[2]+3.58*_xsratio_wh[2]-5.21*sqrt(_xsratio_tth[2]*_xsratio_wh[2]);
    _xsratio_twh[0]=2.91*_xsratio_tth[0]+2.31*_xsratio_wh[0]-4.22*sqrt(_xsratio_tth[0]*_xsratio_wh[0]);
    _xsratio_twh[1]=2.91*_xsratio_tth[1]+2.31*_xsratio_wh[1]-4.22*sqrt(_xsratio_tth[1]*_xsratio_wh[1]);
    _xsratio_twh[2]=2.91*_xsratio_tth[2]+2.31*_xsratio_wh[2]-4.22*sqrt(_xsratio_tth[2]*_xsratio_wh[2]);
}

void My2HDMC::read_xs()
{
    _xs_hsm_8tev_gg[0] = XS_8TeV_gg(_mh);
    _xs_hsm_8tev_gg[1] = XS_8TeV_gg(_mH);
    _xs_hsm_8tev_gg[2] = XS_8TeV_gg(_mA);

    _xs_hsm_8tev_bb[0] = XS_8TeV_bb(_mh);
    _xs_hsm_8tev_bb[1] = XS_8TeV_bb(_mH);
    _xs_hsm_8tev_bb[2] = XS_8TeV_bb(_mA);

    _xs_hsm_8tev_zh[0] = XS_8TeV_zh(_mh);
    _xs_hsm_8tev_zh[1] = XS_8TeV_zh(_mH);
    _xs_hsm_8tev_zh[2] = XS_8TeV_zh(_mA);

    _xs_hsm_8tev_wbf[0] = XS_8TeV_wbf(_mh);
    _xs_hsm_8tev_wbf[1] = XS_8TeV_wbf(_mH);
    _xs_hsm_8tev_wbf[2] = XS_8TeV_wbf(_mA);

    _xs_hsm_13tev_gg[0] = XS_13TeV_gg(_mh);
    _xs_hsm_13tev_gg[1] = XS_13TeV_gg(_mH);
    _xs_hsm_13tev_gg[2] = XS_13TeV_gg(_mA);

    _xs_hsm_13tev_bb[0] = XS_13TeV_bb(_mh);
    _xs_hsm_13tev_bb[1] = XS_13TeV_bb(_mH);
    _xs_hsm_13tev_bb[2] = XS_13TeV_bb(_mA);

    _xs_hsm_13tev_zh[0] = XS_13TeV_zh(_mh);
    _xs_hsm_13tev_zh[1] = XS_13TeV_zh(_mH);
    _xs_hsm_13tev_zh[2] = XS_13TeV_zh(_mA);

    _xs_hsm_13tev_wbf[0] = XS_13TeV_wbf(_mh);
    _xs_hsm_13tev_wbf[1] = XS_13TeV_wbf(_mH);
    _xs_hsm_13tev_wbf[2] = XS_13TeV_wbf(_mA);


    _xs_hsm_13tev_wh[0] = XS_13TeV_wh(_mh);
    _xs_hsm_13tev_wh[1] = XS_13TeV_wh(_mH);
    _xs_hsm_13tev_wh[2] = XS_13TeV_wh(_mA);

    _xs_hsm_13tev_th[0] = XS_13TeV_th(_mh);
    _xs_hsm_13tev_th[1] = XS_13TeV_th(_mH);
    _xs_hsm_13tev_th[2] = XS_13TeV_th(_mA);

    _xs_hsm_13tev_tth[0] = XS_13TeV_tth(_mh);
    _xs_hsm_13tev_tth[1] = XS_13TeV_tth(_mH);
    _xs_hsm_13tev_tth[2] = XS_13TeV_tth(_mA);

    _xs_hsm_13tev_twh[0] = XS_13TeV_twh(_mh);
    _xs_hsm_13tev_twh[1] = XS_13TeV_twh(_mH);
    _xs_hsm_13tev_twh[2] = XS_13TeV_twh(_mA);
}


void  My2HDMC::print_results()
{


    int hid=0; if(_switched) hid=1;
    int Hid=1; if(_switched) Hid=0;
    int aid=2;

    // Print the parameters


///////////////////////////////////   by Wei Su 20190101



    double ggA13=_xsratio_gg[aid]*_xs_hsm_13tev_gg[aid];
    double bbA13=_xsratio_bb[aid]*_xs_hsm_13tev_bb[aid];
    double WBFA13=_xsratio_wbf[aid]*_xs_hsm_13tev_wbf[aid];
    double ZA13=_xsratio_zh[aid]*_xs_hsm_13tev_zh[aid];
    double WA13=_xsratio_wh[aid]*_xs_hsm_13tev_wh[aid];
    double tA13=_xsratio_th[aid]*_xs_hsm_13tev_th[aid];
    double ttA13=_xsratio_tth[aid]*_xs_hsm_13tev_tth[aid];
    double twA13=_xsratio_twh[aid]*_xs_hsm_13tev_twh[aid];

    double WBFH13=_xsratio_wbf[Hid]*_xs_hsm_13tev_wbf[Hid];
    double ggH13=_xsratio_gg[Hid]*_xs_hsm_13tev_gg[Hid];
    double bbH13=_xsratio_bb[Hid]*_xs_hsm_13tev_bb[Hid];
    double ZH13=_xsratio_zh[Hid]*_xs_hsm_13tev_zh[Hid];
    double WH13=_xsratio_wh[Hid]*_xs_hsm_13tev_wh[Hid];
    double tH13=_xsratio_th[Hid]*_xs_hsm_13tev_th[Hid];
    double ttH13=_xsratio_tth[Hid]*_xs_hsm_13tev_tth[Hid];
    double twH13=_xsratio_twh[Hid]*_xs_hsm_13tev_twh[Hid];


    double ggA8=_xsratio_gg[aid]*_xs_hsm_8tev_gg[aid];
    double bbA8=_xsratio_bb[aid]*_xs_hsm_8tev_bb[aid];
    double WBFA8=_xsratio_wbf[aid]*_xs_hsm_8tev_wbf[aid];
    double ZA8=_xsratio_zh[aid]*_xs_hsm_8tev_zh[aid];

    double WBFH8=_xsratio_wbf[Hid]*_xs_hsm_8tev_wbf[Hid];
    double ggH8=_xsratio_gg[Hid]*_xs_hsm_8tev_gg[Hid];
    double bbH8=_xsratio_bb[Hid]*_xs_hsm_8tev_bb[Hid];
    double ZH8=_xsratio_zh[Hid]*_xs_hsm_8tev_zh[Hid];

    double ggh13 =_xsratio_gg[hid]*_xs_hsm_13tev_gg[hid];
    double WBFh13=_xsratio_wbf[hid]*_xs_hsm_13tev_wbf[hid];
    double Zh13=_xsratio_zh[hid]*_xs_hsm_13tev_zh[hid];
    double bbh13=_xsratio_bb[hid]*_xs_hsm_13tev_bb[hid];
    double wh13=_xsratio_wh[hid]*_xs_hsm_13tev_wh[hid];

    double brAHZ=_br_hizhj[aid][Hid];
    double brAhZ=_br_hizhj[aid][hid];
    double brHAZ=_br_hizhj[Hid][aid];

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
    double brhtautau = _br_hill[hid][2];
    double brHmumu=_br_hill[Hid][1];
    double brHgaga=_br_higaga[Hid];
    double brAmumu=_br_hill[aid][1];
    double brAgaga=_br_higaga[aid];


    double brhaa=_br_hihjhj[hid][aid];
    double brhHH=_br_hihjhj[hid][Hid];


    // cout<<" brhbb = "<< brhbb<<endl;
    // cout<<" brhtautau = "<< brhtautau <<endl;
    // cout<<" brhaa = "<< brhaa <<endl;
    // cout<<" brhHH = "<< brhHH <<endl;
    // cout<<" brHZZ = "<< brHZZ<<endl;
    

    //   string fname1="/Users/weisu/Documents/research/project/2HDM_largetanb/2HDM_program/2HDMC-NLO-master-wei";
    string outfile1name= _fileout; //fname1+"/output_test.txt";
    ofstream outfile1;
    outfile1.open(outfile1name.c_str(),std::ofstream::out | std::ofstream::app);

    if(!_switched)
    {
        outfile1  <<setw(6)<< _mh<<" "<<setw(6)<<_mH<<" "<<setw(6)<<_mA<<" "<<setw(12)<< _cba<<" "<<setw(12)<<_tb;
    }
    else
    {
        outfile1  <<setw(6)<< _mH<<" "<<setw(6)<<_mh<<" "<<setw(6)<<_mA<<" "<<setw(12)<< -_sba<<" "<<setw(12)<<_tb;
    }
    if (_mA<10)
    {
        ggA13=0;
        bbA13=0;
        WBFA13=0;
        ZA13=0;
        ggA8=0;
        bbA8=0;
        WBFA8=0;
        ZA8=0;

    }
    

      outfile1 <<" "<<setw(12)<<brhtautau<<" "<<setw(12)<<wh13;
      outfile1 <<" "<<setw(12)<<ggA13<<" "<<setw(12)<<bbA13<<" "<<setw(12)<<WBFA13<<" "<<setw(12)<<ZA13;
      outfile1 <<" "<<setw(12)<<ggH13<<" "<<setw(12)<<bbH13<<" "<<setw(12)<<WBFH13<<" "<<setw(12)<<ZH13;
      outfile1 <<" "<<setw(12)<<brAtautau<<" "<<setw(12)<<brAmumu<<" "<<setw(12)<<brAbb<<" "<<setw(12)<<brAtt;
      outfile1 <<" "<<setw(12)<<brAgg<<" "<<setw(12)<<brAgaga<<" "<<setw(12)<<brAhZ<<" "<<setw(12)<<brHtautau;
      outfile1 <<" "<<setw(12)<<brHmumu<<" "<<setw(12)<<brHbb<<" "<<setw(12)<<brHtt<<" "<<setw(12)<<brHZZ;
      outfile1 <<" "<<setw(12)<<brHWW<<" "<<setw(12)<<brHhh<<" "<<setw(12)<<brHgg<<" "<<setw(12)<<brHgaga;
      outfile1 <<" "<<setw(12)<<brhbb<<" "<<setw(12)<<brHAZ<<" "<<setw(12)<<brAHZ;
      outfile1 <<" "<<setw(12)<<_gammatot[Hid]<<" "<<setw(12)<<_gammatot[aid];
      outfile1 <<" "<<setw(7)<<ggh13<<" "<<setw(7)<<bbh13<<" "<<setw(7)<<WBFh13;
      outfile1 <<" "<<setw(7)<<Zh13<<" "<<setw(7)<<brhaa<<" "<<setw(7)<<brhHH;
      outfile1 <<" "<<setw(12)<<ggA8<<" "<<setw(12)<<bbA8<<" "<<setw(12)<<WBFA8<<" "<<setw(12)<<ZA8;
      outfile1 <<" "<<setw(12)<<ggH8<<" "<<setw(12)<<bbH8<<" "<<setw(12)<<WBFH8<<" "<<setw(12)<<ZH8;
      outfile1 <<" "<<setw(12)<<_gammatot[hid];
      outfile1 <<" "<<setw(12)<<ttA13<<" "<<setw(12)<<tA13<<" "<<setw(12)<<twA13<<" "<<setw(12)<<WA13;
      outfile1 <<" "<<setw(12)<<ttH13<<" "<<setw(12)<<tH13<<" "<<setw(12)<<twH13<<" "<<setw(12)<<WH13;
      outfile1 <<" "<<setw(12)<<_xsratio_bb[aid];
      outfile1 <<" "<<setw(12)<<_xsratio_bb[Hid];
      outfile1 <<" "<<setw(12)<<_xsratio_tth[aid];
      outfile1 <<" "<<setw(12)<<_xsratio_tth[Hid];
      outfile1 <<endl;


    //   double lim_ppHhh_ATLAS = ppShh_ATLAS(_mH,0.1);


    //   outfile1<<std::fixed<<std::setprecision(4);
    //   outfile1<<setw(5)<<brhtautau<<" "<<setw(5)<<_mH<<" "<<" "<<lim_ppHhh_ATLAS<<endl;
      outfile1.close();

///////////////////////////////////   by Wei Su 20190101
}

void  My2HDMC::print_checks(bool info)
{

    //Calculation
    int hid=0; if(_switched) hid=1;
    int Hid=1; if(_switched) Hid=0;
    int aid=2;

    string fname2="/Users/weisu/Documents/research/project/2HDM_largetanb/2HDM_program/2HDMC-NLO-master-wei";
    string outfile2name=fname2+"/output_test.txt";
    ofstream outfile2;
    outfile2.open(outfile2name.c_str());

    double limit_gg_H2tata   = gg_H2tata(_mH);
    double predict_gg_H2tata = _xsratio_gg[Hid]*_xs_hsm_13tev_gg[Hid]*_br_hill[Hid][2];
    bool   pass_gg_H2tata    = 1;
    if( predict_gg_H2tata > limit_gg_H2tata ) pass_gg_H2tata = 0;

    double limit_gg_A2tata   =  gg_H2tata(_mA);
    double predict_gg_A2tata = _xsratio_gg[aid]*_xs_hsm_13tev_gg[aid]*_br_hill[aid][2];
    bool   pass_gg_A2tata    = 1;
    if( predict_gg_A2tata > limit_gg_A2tata ) pass_gg_A2tata = 0;

    //Output Information
    info=false;
    if (info)
    {
        cout<<""<<endl;
        cout<<"--info: Limits (1>still OK, 2>already excluded)"<<endl;
        cout<<"        - gg>H>tautau: " <<setw(17)<<pass_gg_H2tata<<endl;
        cout<<"        - gg>A>tautau: " <<setw(17)<<pass_gg_A2tata<<endl;
        outfile2<<setw(5)<<_mH<<" "<<setw(5)<<_mA<<" ";
    }

}
