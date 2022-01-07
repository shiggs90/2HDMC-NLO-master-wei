#include <stdio.h>
#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>

#include "AHZ13_bbA_ATLAS_full.hh"
#include "AHZ13_ggf_ATLAS_full.hh"

using namespace std;

int main(){
    double ma, mH, limit,limit2;
    ma=380;
    mH=740;
    limit=AHZ13_bbA_ATLAS_full(ma,mH);
    limit2=AHZ13_bbA_ATLAS_full(mH,ma);
    cout<<"bbA = "<< limit<<" "<<limit2<<endl;

    limit=AHZ13_ggf_ATLAS_full(ma,mH);
    limit2=AHZ13_ggf_ATLAS_full(mH,ma);
    cout<< "ggf = " <<limit<<" "<<limit2<<endl;
}