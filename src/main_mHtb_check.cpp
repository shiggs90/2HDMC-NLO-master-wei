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
    int type;
    double cba;
    bool   info=true;
    

   printf("input type,cba\n");
    scanf("%d%lf",&type,&cba);
    // scanf("%d%lf%lf",&type,&mH,&cba);
    // char* file_out = "mAtanb"+str(type)+"_"+str(mH)+"_"+str(cba)+".txt";
    // std::string name1 = std::to_string(type);
    // char name1=name1.c_str()
    // std::string name2 = std::to_string(cba);
    // char name2=name2.c_str()
    

    ostringstream name1,name2, name3,name4;
    name1<< type;
    name2<< cba;
    string path0="/Users/weisu/Documents/research/project/2HDM_largetanb/2HDM_program/2HDMC-NLO-master-wei/";
    // string name5= "data/mHtanb"+name1.str()+"_"+name2.str()+".txt";
    string name5= "data/mHtanb"+name1.str()+"_"+name2.str()+"_check.txt";
    // name3= "mHtanb"+str(type)+"_"+str(cba)+".txt";
    // // name3= "mHtanb"+to_str(type)+"_"+to_str(cba)+".txt";
    // char *file_out = name5.data();
    char *file_out = &name5[0];

    cout<< "outfile = "<<file_out<<endl;

    // int a = 339;
    // char *c = (char*)a;
    // char *file_out= c ;//= name3.data();

    // cout<<"c"<<c<<endl;


    ifstream ifile;
    ifile.open(file_out);
    if(ifile) {
       cout<<"=================================================================="<<endl;
       cout<<"=                                                                ="<<endl;
       cout<<"=  output file exists, please check, and/or rename or remove it  ="<<endl;
       cout<<"=                                                                ="<<endl;
       cout<<"=================================================================="<<endl;
    //    return 0;
    }     


    ltini();
    for(double tbexp  = -1; tbexp<log10(501.); tbexp=tbexp+0.01)
    {
        double tb  = pow(10,tbexp);
        for(double mH  = 130; mH<1001; mH=mH+20)
        {
            double mh  = 125;
            double mC,mA;
            mH=250.;
            cba=0.1;
            tb=0.131826;
            mA=mH;
//            double mA  = mH+100;
//            double mA  = 300;
            if(mA> mH)
            {
               mC  =  mA;
            }
            else
            {
               mC  =  mH;
            }
//
            double m122= mH*mH*sin(atan(tb))*cos(atan(tb)) ;

            My2HDMC * creater= new My2HDMC(mh,mH,mA,mC,tb,cba,m122,type,file_out);
            if(info) creater->print_results();
            creater->print_checks(info);
            delete creater;
           return 0;
        }
    }

    ltexi();



}
