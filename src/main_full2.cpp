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

  if (argc < 11) {
    cout << "Usage: ./main_full2.x mh mH mA mHp cos(beta-alpha) lambda_6 lambda_7 m_122 tan_beta yukawas_type output_filename\n";
    return -1;
  }
  ltini();
  double mh_in = (double)atof(argv[1]);
  double mH_in = (double)atof(argv[2]);
  double mA_in = (double)atof(argv[3]);
  double mC_in = (double)atof(argv[4]);
  double cba_in = (double)atof(argv[5]);
  double l6_in = (double)atof(argv[6]);
  double l7_in = (double)atof(argv[7]);
  double m122_in = (double)atof(argv[8]); 
  double tanb_in = (double)atof(argv[9]);
  int yt_in = (int)atof(argv[10]);
  char* file_out = argv[11];    

     /* try to open file to read */
  ifstream ifile;
  ifile.open(file_out);
  if(ifile) {
     cout<<"=================================================================="<<endl;
     cout<<"=                                                                ="<<endl;
     cout<<"=  output file exists, please check, and/or rename or remove it  ="<<endl;
     cout<<"=                                                                ="<<endl;
     cout<<"=================================================================="<<endl;

     return 0;
  } 

  // string outfile1name="./test_output_hhfile.txt";
  // // string outfile1name="../data_mh2tb/mh2tb_"+name1.str()+name2.str()+"_noexo_ratio.txt";
  // // string outfile1name="../data_mh2tb/mh2tb_"+name1.str()+name2.str()+"_ratio.txt";
  // ofstream outfile2;
  // outfile2.open(outfile1name.c_str());

  My2HDMC * creater= new My2HDMC(mh_in,mH_in,mA_in,mC_in,tanb_in,cba_in,m122_in,yt_in,file_out);
  if(info) creater->print_results();
  creater->print_checks(info);
  delete creater;

  ltexi();

}
