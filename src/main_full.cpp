#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstring>

#include "math.h"

#include "My2HDMC-all.hh"

using namespace std;

int main( int argc, char **argv )
{
    bool   info=true;

// ofstream outfile("coupt2_xxxxx.dat");
    int type_in,part_in;
    // printf("input int type_in\n");
    scanf("%d%d",&type_in,&part_in);
    ostringstream name1,name2,name3;
    name1<< type_in;
    name2<< part_in;

    string fname1="/Users/weisu/Documents/research/project/chaoge/research/data";

    // string outfile1name=fname1+"/00_Type_"+name1.str()+"_H1_LHC.txt";
    // ofstream outfile1;
    // outfile1.open(outfile1name.c_str());
    // 
    string infile1name=fname1+"/Type"+name1.str()+"_H1_scan"+name2.str()+".dat";
    ifstream infile1;
    // cout<<infile1name<<endl;
    infile1.open(infile1name.c_str(), ios::in);
    if (! infile1) {
        cout<< "unable to open file "<<infile1name<<" for reading" << endl;
        return 1;
    }

    double alpha0,tanb0,m122,mh,mH,mA,mC,lam1,lam2,lam3,lam4,lam5;


    for(int i = 0; infile1.good(); i++)
    {
        infile1>>alpha0>>tanb0>>m122>>mh>>mH>>mA>>mC>>lam1>>lam2>>lam3>>lam4>>lam5;
        double cosba0=cos(atan(tanb0)-alpha0);
        // cout<<i+1<<endl;
        if(m122<0) continue;

        double m12=sqrt( m122);
         My2HDMC * creater= new My2HDMC(mh,mH,mA,mC,tanb0,cosba0,m12,type_in);
         if(info) creater->print_results();
         creater->print_checks(info);
         delete creater;
//            return 0;
        
    }



}
