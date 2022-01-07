#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>
#include <sstream>
#include <string>
#include <math.h> 
#include <algorithm> 

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
#include "./experiments/AHZ/AHZ13_bbA_ATLAS_full.hh"
#include "./experiments/AHZ/AHZ13_ggf_ATLAS_full.hh"
#include "./experiments/AHZ/ppAHZllbb_CMS.hh"







using namespace std;



int main(){
    int type_in;
    double cba;
    printf("input type,cba\n");
    scanf("%d%lf",&type_in,&cba);
    ostringstream name1,name2,name3;
    name1<< type_in;
    name2<< cba;
    // name3<< mA;

    // string infile1name="../data_mh2tb/mh2tb_"+name1.str()+name2.str()+"_noexo.txt"; 
    // string infile1name="../data_mh2tb/mh2tb_"+name1.str()+name2.str()+".txt"; 
    string path1="/Users/weisu/Documents/research/project/114a/LHC_HZA/1new_code/My2HDMC0408/data_matb_1001_AHZ/"; 
    string infile1name=path1+"2020jun25_matb_tree_"+name1.str()+name2.str()+"1_200.txt";
    // production + LO decay
    ifstream infile1;
    infile1.open(infile1name.c_str(), ios::in);
    if (! infile1) {
        cout<< "unable to open file "<<infile1name<<" for reading" << endl;
        return 1;
    }
    // //_mh, _mH, _mA,  _cba, _tb;
    // //brhtautau<<wh13;
    // //ggA13, bbA13, WBFA13, ZA13;
    // //ggH13, bbH13, WBFH13, ZH13;
    // //brAtautau, brAmumu, brAbb, brAtt;
    // //brAgg, brAgaga, brAhZ, brHtautau;
    // //brHmumu, brHbb, brHtt, brHZZ;
    // //brHWW, brHhh, brHgg, brHgaga;
    // //brhbb, brHAZ, brAHZ;
    // //_gammatot[Hid], _gammatot[aid];
    // //  ggh13, bbh13, WBFh13;
    // //  Zh13, brhaa, brhHH;
    // //  ggA8, bbA8, WBFA8, ZA8;
    // //  ggH8, bbH8, WBFH8, ZH8<<endl;
    //    _gammatot[hid];
    //   tA13, tA13, twA13, WA13;
    //   tH13, tH13, twH13, WH13;
    //   xsratio_bb[aid];
    //   xsratio_bb[Hid];
    //   xsratio_tth[aid];
    //   xsratio_tth[Hid];
    double  mh,mH,mA,cosba,tb;
    double  ggA8, bbA8, WBFA8, ZA8;
    double  ggH8, bbH8, WBFH8, ZH8;
    double  ggA13,bbA13,zA13,wbfA13;
    double  ggH13,bbH13,zH13,wbfH13;
    double  brAtautau,brAmumu,brAbb,brAtt;
    double  brAgg,brAgaga,brAzh,brHtautau;
    double  brHmumu,brHbb,brHtt,brHZZ;
    double  brHWW,brHhh,brHgg,brHgaga;
    double  brhbb,brHAZ,brAHZ;
    double  gammatotH,gammatotA;
    double  ggh13, bbh13, WBFh13;
    double  Zh13, brhaa, brhHH,gammatoth;
    double  ttA13, tA13, twA13, WA13;
    double  ttH13, tH13, twH13, WH13,wh13;
    double xsr_bbA,xsr_bbH,xsr_ttA,xsr_ttH,brhtautau;
    
    
    

    // string outfile1name="../data_mh2tb/1216_mh2tb_"+name1.str()+name2.str()+"_noexo_ratio.txt";
    // string outfile1name="../data_mh2tb/mh2tb_"+name1.str()+name2.str()+"_ratio.txt";
    string outfile1name=path1+"2020jun25_ratio_"+name1.str()+name2.str()+name3.str()+"1.txt";
    ofstream outfile1;
    outfile1.open(outfile1name.c_str());

    // string outfile2name="../data_mh2tb/1216_mh2tb_"+name1.str()+name2.str()+"_noexo_ratio_detail.txt";
    // string outfile1name="../data_mh2tb/mh2tb_"+name1.str()+name2.str()+"_ratio.txt";
    string outfile2name=path1+"2020jun25_ratio_"+name1.str()+name2.str()+name3.str()+"1_detail.txt";
    ofstream outfile2;
    outfile2.open(outfile2name.c_str());

    const int exp_len=42;

    for(int i = 0; infile1.good(); i++)
    {
        cout<<i+1<<endl;



        infile1 >> mh>>mH>>mA>>cosba>>tb;
        infile1>>brhtautau>>wh13;
        infile1 >> ggA13>>bbA13>>zA13>>wbfA13;
        infile1 >> ggH13>>bbH13>>zH13>>wbfH13;
        infile1 >> brAtautau>>brAmumu>>brAbb>>brAtt;
        infile1 >> brAgg>>brAgaga>>brAzh>>brHtautau;
        infile1 >> brHmumu>>brHbb>>brHtt>>brHZZ;
        infile1 >> brHWW>>brHhh>>brHgg>>brHgaga;
        infile1 >> brhbb>>brHAZ>>brAHZ;
        infile1 >> gammatotH>>gammatotA;
        infile1 >> ggh13>> bbh13>> WBFh13;
        infile1 >> Zh13>> brhaa>> brhHH;
        infile1 >> ggA8>> bbA8>> WBFA8>> ZA8;
        infile1 >> ggH8>> bbH8>> WBFH8>> ZH8>>gammatoth;
        infile1 >> ttA13>> tA13>> twA13>> WA13;
        infile1 >> ttH13>> tH13>> twH13>> WH13;
        infile1 >> xsr_bbA>> xsr_bbH>> xsr_ttA>> xsr_ttH;

        // H/A->mumu
        double bbHmumu = bbH13*brHmumu;
        double ggHmumu = ggH13*brHmumu;
        double bbAmumu = bbA13*brAmumu;
        double ggAmumu = ggA13*brAmumu;
        // H/A->bb
        double bbHbb = bbH13*brHbb;
        double bbAbb = bbA13*brAbb;
        // H/A->tautau
        double bbHtautau = bbH13*brHtautau;
        double ggHtautau = ggH13*brHtautau;
        double bbAtautau = bbA13*brAtautau;
        double ggAtautau = ggA13*brAtautau;
        // double bbA2tau=bbA13*brAtautau;
        // H/A-> gammagamma
        double ppAyy8=(ggA8+bbA8+WBFA8+ZA8)*brAgaga;
        double ppHyy8=(ggH8+bbH8+ WBFH8+ ZH8)*brHgaga;
        double ppAyy13=(ggA13+bbA13+zA13+wbfA13)*brAgaga;
        double ppHyy13=(ggH13+bbH13+wbfH13+zH13)*brHgaga;
        // H/A->tt
        double gHtt=abs(cosba-sqrt(1-cosba*cosba)/tb);
        double gAtt=1./tb;
        double twqAtt=(twA13+ttA13+tA13)*brAtt;
        double twqHtt=(twH13+ttH13+tH13)*brHtt;
        // 4t
        double ttHtt=ttH13*brHtt;
        double ttAtt=ttA13*brAtt;
        // H ->VV
        double ppHZZ = (ggH13+bbH13+wbfH13+zH13)*brHZZ;
        double ggHWW = ggH13*brHWW;
        double VBFHWW= wbfH13*brHWW;
        // h->aa
        double haa2b2mu=2*(ggh13+bbh13+WBFh13+Zh13+wh13)*brhaa*brAbb*brAmumu;
        double haa2b2tau=2*(ggh13+bbh13+WBFh13+Zh13+wh13)*brhaa*brAbb*brAtautau;
        double haa4tau = (ggh13+bbh13+WBFh13+Zh13+wh13)*brhaa*brAtautau*brAtautau;
        double haa2mu2tau=2*(ggh13+bbh13+WBFh13+Zh13+wh13)*brhaa*brAtautau*brAmumu;
        double VHaa4b=(Zh13+wh13)*brhaa*brAbb*brAbb;//
        double hHH2b2mu=2*(ggh13+bbh13+WBFh13+Zh13+wh13)*brhHH*brHbb*brHmumu;
        double hHH2b2tau=2*(ggh13+bbh13+WBFh13+Zh13+wh13)*brhHH*brHbb*brHtautau;
        double hHH4tau = (ggh13+bbh13+WBFh13+Zh13+wh13)*brhHH*brHtautau*brHtautau;
        double hHH2mu2tau=2*(ggh13+bbh13+WBFh13+Zh13+wh13)*brhHH*brHtautau*brHmumu;
        double VHHH4b=(Zh13+wh13)*brhHH*brHbb*brHbb;
        //  AZh
        double ggAzhbb=ggA13*brAzh*brhbb;
        double bbAzhbb=bbA13*brAzh*brhbb;
        double brZll=0.033658;
        double ggAZhtautau=ggA13*brAzh*brZll*brhtautau;

        // Hhh
        double ppHhh = (ggH13+bbH13+wbfH13+zH13)*brHhh;
        // AHZ
        double ggAZHbb = ggA13*brAHZ*brHbb+ggH13*brHAZ*brAbb;
        double bbAZHbb = bbA13*brAHZ*brHbb+bbH13*brHAZ*brAbb;
        double ppAZHbbll=(ggH13+bbH13+wbfH13+zH13)*brHAZ*brAbb*brZll+\
        (ggA13+bbA13+zA13+wbfA13)*brAHZ*brHbb*brZll;




// -------------------
//  bb then gg, H then A

        double theory1[exp_len];
        // H/A->mumu
        theory1[0]=bbHmumu; 
        theory1[1]=ggHmumu;
        theory1[2]=bbAmumu; 
        theory1[3]=ggAmumu;
        // H/A->bb
        theory1[4]=bbHbb;
        theory1[5]=bbAbb;
        // H/A->tautau
        theory1[6]=bbHtautau;
        theory1[7]=ggHtautau;
        theory1[8]=bbAtautau;
        theory1[9]=ggAtautau;
        
        // H/A-> gammagamma
        theory1[10]=ppAyy8;
        theory1[11]=ppHyy8;
        theory1[12]=ppAyy13;
        theory1[13]=ppHyy13;
        // H/A->tt
        theory1[14]=abs(cosba-sqrt(1-cosba*cosba)/tb);
        theory1[15]=1./tb;
        theory1[16]=twqAtt;
        theory1[17]=twqHtt;
        // 4t
        theory1[18]=ttHtt;
        theory1[19]=ttAtt;
        theory1[20]=abs(cosba-sqrt(1-cosba*cosba)/tb);
        theory1[21]=1./tb;// 4t coupling results
        // H ->VV
        theory1[22]=ppHZZ;
        theory1[23]=ggHWW;
        theory1[24]=VBFHWW;
        // h->aa
        theory1[25]=haa2b2mu;
        theory1[26]=haa2b2tau;
        theory1[27]=haa4tau;
        theory1[28]=haa2mu2tau;
        theory1[29]=VHaa4b;//
        theory1[30]=hHH2b2mu;
        theory1[31]=hHH2b2tau;
        theory1[32]=hHH4tau;
        theory1[33]=hHH2mu2tau;
        theory1[34]=VHHH4b;
        //  AZh
        theory1[35]=ggAzhbb;
        theory1[36]=bbAzhbb;
        theory1[37]=ggAZhtautau;
        // Hhh
        theory1[38]=ppHhh;
        // AHZ
        theory1[39]=bbAZHbb;
        theory1[40]=ggAZHbb;
        theory1[41]=ppAZHbbll;

// -------------------

        double widH=gammatotH/mH;
        double widA=gammatotA/mA;
        // H/A->mumu
        double lim_bbHmumu_CMS=bbSmumu_CMS(mH,widH);
        double lim_ggHmumu_CMS=ggSmumu_CMS(mH,widH);
        double lim_bbHmumu_ATLAS=bbSmumu_ATLAS(mH,widH);
        double lim_ggHmumu_ATLAS=ggSmumu_ATLAS(mH,widH);
        double lim_bbAmumu_CMS=bbSmumu_CMS(mA,widA);
        double lim_ggAmumu_CMS=ggSmumu_CMS(mA,widA);
        double lim_bbAmumu_ATLAS=bbSmumu_ATLAS(mA,widA);
        double lim_ggAmumu_ATLAS=ggSmumu_ATLAS(mA,widA);
        double lim_bbHmumu=min(lim_bbHmumu_ATLAS,lim_bbHmumu_CMS);
        double lim_bbAmumu=min(lim_bbAmumu_ATLAS,lim_bbAmumu_CMS);
        double lim_ggHmumu=min(lim_ggHmumu_ATLAS,lim_ggHmumu_CMS);
        double lim_ggAmumu=min(lim_ggAmumu_ATLAS,lim_ggAmumu_CMS);
        // H/A->bb
        double lim_bbHbb_CMS=bbSbb_CMS(mH,widH);
        double lim_bbHbb_ATLAS=bbSbb_ATLAS(mH,widH);
        double lim_bbAbb_CMS=bbSbb_CMS(mA,widA);
        double lim_bbAbb_ATLAS=bbSbb_ATLAS(mA,widA);

        double lim_bbHbb=min(lim_bbHbb_CMS,lim_bbHbb_ATLAS);
        double lim_bbAbb=min(lim_bbAbb_CMS,lim_bbAbb_ATLAS);
       
        // H/A->tautau
        double lim_bbHtautau_CMS=bbStautau_CMS(mH,widH);//CMS from 90 GeV
        double lim_ggHtautau_CMS=ggStautau_CMS(mH,widH);
        double lim_bbAtautau_CMS=bbStautau_CMS(mA,widA);
        double lim_ggAtautau_CMS=ggStautau_CMS(mA,widA);
        double lim_bbHtautau_ATLAS=bbStautau_ATLAS(mH,widH);//ATLAS from 200 GeV
        double lim_ggHtautau_ATLAS=ggStautau_ATLAS(mH,widH);
        double lim_bbAtautau_ATLAS=bbStautau_ATLAS(mA,widA);
        double lim_ggAtautau_ATLAS=ggStautau_ATLAS(mA,widA);
        double lim_bbHtautau=min(lim_bbHtautau_ATLAS,lim_bbHtautau_CMS);
        double lim_bbAtautau=min(lim_bbAtautau_ATLAS,lim_bbAtautau_CMS);
        double lim_ggHtautau=min(lim_ggHtautau_ATLAS,lim_ggHtautau_CMS);
        double lim_ggAtautau=min(lim_ggAtautau_ATLAS,lim_ggAtautau_CMS);
        
        double lim_bbA2tau=bbA2tau_CMS(mA); // 20-70 GeV
        double lim_bbH2tau=bbA2tau_CMS(mH);
        // becareful when combining 20-70 and 90+
        lim_bbHtautau=min(lim_bbHtautau,lim_bbH2tau);
        lim_bbAtautau=min(lim_bbAtautau,lim_bbA2tau);
        
        
        // H/A-> gammagamma
        double lim_ppAyy8=ppXyy_8TeV(mA,widA);
        double lim_ppHyy8=ppXyy_8TeV(mH,widH);
        double lim_Ayy13=Xyy_high_low_ATLAS(mA,widA);
        double lim_Hyy13=Xyy_high_low_ATLAS(mH,widH);
        
        double lim_Ayy13_CMS= Xyy_low_CMS(mA);
        double lim_Hyy13_CMS= Xyy_low_CMS(mH);
        // becaurful when they are not degenerate
        lim_Ayy13=min(lim_Ayy13,lim_Ayy13_CMS);//For 13 TeV
        lim_Hyy13=min(lim_Hyy13,lim_Hyy13_CMS);//For 13 TeV


        // H/A->tt
        double lim_Htt_coup=Htt_CMS_full_coup(mH,widH);
        double lim_Att_coup=Att_CMS_full_coup(mA,widA);
        double lim_twqAtt_CMS=twqAtt_CMS(mA,widA);
        double lim_twqHtt_CMS=twqHtt_CMS(mH,widH);
        // 4t
        double lim_ttHtt_ATLAS_CMS=tttt_ATLAS_CMS(mH);
        double lim_ttAtt_ATLAS_CMS=tttt_ATLAS_CMS(mA);
        double lim_ttHtt_coup=tttt_low_CMS_coup(mH);
        double lim_ttAtt_coup=tttt_low_CMS_coup(mA);
        // H ->VV
        double lim_ppHZZ = ppSZZ_CMS(mH,widH); //No A decays
        double lim_ggHWW_ATLAS = ggHWW_ATLAS(mH,widH);
        double lim_VBFHWW_ATLAS= VBFHWW_ATLAS(mH,widH);
        double lim_ggHWW_CMS = ggHWW_CMS(mH,widH);
        double lim_VBFWW_CMS= VBFWW_CMS(mH,widH);

        double lim_ggHWW = min(lim_ggHWW_ATLAS,lim_ggHWW_CMS);
        double lim_VBFWW = min(lim_VBFHWW_ATLAS,lim_VBFWW_CMS);
        // h->aa
        double lim_haa2b2mu_CMS=haa2b2mu_CMS(mA);
        double lim_haa2b2mu_ATLAS=haa2b2mu_ATLAS(mA);
        double lim_haa2b2mu=min(lim_haa2b2mu_ATLAS,lim_haa2b2mu_CMS);
        double lim_haa2b2tau=haa2b2tau_CMS(mA);
        double lim_haa4tau=haa4tau_CMS(mA);
        double lim_haa2mu2tau=haa2mu2tau_CMS(mA);
        double lim_VHaa4b=ATLAS_VH4b(mA);//
        double lim_hHH2b2mu_CMS=haa2b2mu_CMS(mH);
        double lim_hHH2b2mu_ATLAS=haa2b2mu_ATLAS(mH);
        double lim_hHH2b2mu=min(lim_hHH2b2mu_ATLAS,lim_hHH2b2mu_CMS);
        double lim_hHH2b2tau=haa2b2tau_CMS(mH);
        double lim_hHH4tau=haa4tau_CMS(mH);
        double lim_hHH2mu2tau=haa2mu2tau_CMS(mH);
        double lim_VHHH4b=ATLAS_VH4b(mH);
        //  AZh
        double lim_ggAzhbb_ATLAS=ggAzhbb_ATLAS(mA,widA);
        double lim_bbAzhbb_ATLAS=bbAzhbb_ATLAS(mA,widA);
        double lim_ggAzhbb_CMS=ggAZhbb_CMS(mA,widA);
        double lim_bbAzhbb_CMS=bbAZhbb_CMS(mA,widA);
        double lim_ggAzhbb=min(lim_ggAzhbb_ATLAS,lim_ggAzhbb_CMS);
        double lim_bbAzhbb=min(lim_bbAzhbb_ATLAS,lim_bbAzhbb_CMS);
        double lim_ggAzhtautau=ggAZhtautau_CMS(mA,widA);
        //Hhh
        double lim_ppHhh_ATLAS = ppShh_ATLAS(mH,widH);
        double lim_ppHhh_CMS = ppShh_CMS(mH,widH);
        double lim_ppHhh = min(lim_ppHhh_ATLAS,lim_ppHhh_CMS);
        // AHZ
        double lim_bbAZHbb=AHZ13_bbA_ATLAS_full(mA,mH);
        double lim_ggAZHbb=AHZ13_ggf_ATLAS_full(mA,mH);
        double lim_ppAZHllbb=ppAHZllbb_CMS(mA,mH);

        double lim[exp_len]={lim_bbHmumu,lim_ggHmumu,lim_bbAmumu,lim_ggAmumu,lim_bbHbb,lim_bbAbb,\
        lim_bbHtautau,lim_ggHtautau,lim_bbAtautau,lim_ggAtautau,\
        lim_ppAyy8,lim_ppHyy8,lim_Ayy13,lim_Hyy13,lim_Htt_coup,lim_Att_coup,lim_twqAtt_CMS,lim_twqHtt_CMS,\
        lim_ttHtt_ATLAS_CMS,lim_ttAtt_ATLAS_CMS,lim_ttHtt_coup,lim_ttAtt_coup,lim_ppHZZ,lim_ggHWW,lim_VBFWW,\
        lim_haa2b2mu,lim_haa2b2tau,lim_haa4tau,lim_haa2mu2tau,lim_VHaa4b,\
        lim_hHH2b2mu,lim_hHH2b2tau,lim_hHH4tau,lim_hHH2mu2tau,lim_VHHH4b,\
        lim_ggAzhbb,lim_bbAzhbb,lim_ggAzhtautau,lim_ppHhh,lim_bbAZHbb,lim_ggAZHbb,lim_ppAZHllbb};

        // stop here



       int flag1[exp_len+1]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};// tree level
        double flag2[exp_len+1]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for (size_t i = 0; i < exp_len; i++)
        {
            if(theory1[i]>=lim[i]){
                flag1[i]=1;  // excluded
                flag1[exp_len]=flag1[exp_len]+flag1[i];
            }
            flag2[i]=theory1[i]/lim[i];
        }

        // std::cout<<std::setprecision(2)<<std::fixed;
        // cout<<mH<<setw(8)<<tb<<endl;
        outfile2<<std::fixed<<std::setprecision(2);

        outfile1<<setw(8)<<mA<<" "<<setw(8)<<tb;
        outfile2<<setw(8)<<mA<<" "<<setw(8)<<tb;

        for (size_t i = 0; i < exp_len; i++)
        {
            outfile1<<" "<<setw(2)<<flag1[i];
            outfile2<<" "<<setw(2)<<flag2[i];
        }
        outfile1<<" "<<setw(2)<<flag1[exp_len];
        

        
        // outfile1<<" "<<setw(2)<<flag1[0]<<" "<<setw(2)<<flag1[1]<<" "<<setw(2)<<flag1[2];
        // outfile1<<" "<<setw(2)<<flag1[3]<<" "<<setw(2)<<flag1[4]<<" "<<setw(2)<<flag1[5];
        // outfile1<<" "<<setw(2)<<flag1[6]<<" "<<setw(2)<<flag1[7]<<" "<<setw(2)<<flag1[8];
        // outfile1<<" "<<setw(2)<<flag1[9]<<" "<<setw(2)<<flag1[10]<<" "<<setw(2)<<flag1[11];
        // outfile1<<" "<<setw(2)<<flag1[12]<<" "<<setw(2)<<flag1[13]<<" "<<setw(2)<<flag1[14];
        // outfile1<<" "<<setw(2)<<flag1[15]<<" "<<setw(2)<<flag1[16]<<" "<<setw(2)<<flag1[17];
        // outfile1<<" "<<setw(2)<<flag1[18]<<" "<<setw(2)<<flag1[19]<<" "<<setw(2)<<flag1[20];
        outfile1<<" "<<setw(4)<<widA<<" "<<setw(4)<<widH;
        outfile1<<" "<<setw(4)<<ggH13<<" "<<setw(4)<<brHWW<<" "<<setw(4)<<lim_ggHWW;
        // outfile1<<" "<<setw(4)<<theory1[19]<<" "<<setw(4)<<lim_Att;
        // outfile1<<" "<<setw(4)<<theory1[20]<<" "<<setw(4)<<lim_ppAyy8;
        outfile1<<endl;
        outfile2<<" "<<setw(4)<<widA<<" "<<setw(4)<<widH<<" "<<setw(5)<<gammatoth*1000;
        outfile2<<endl;

        
    }


    return 0;
}