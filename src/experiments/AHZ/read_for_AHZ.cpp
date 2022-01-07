#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    int ii;
    string infile1name="AHZ13_ggf_ATLAS.txt"; 
    ifstream infile1;
    infile1.open(infile1name.c_str(), ios::in);
    if (! infile1) {
        cout<< "unable to open file "<<infile1name<<" for reading" << endl;
        return 1;
    }

    double mA,mH,limit;

    string outfile1name="AHZ13_ggf_ATLAS_mAmH100.txt";
    ofstream outfile1;
    outfile1.open(outfile1name.c_str(),std::ios_base::app);

    for(int i = 0; infile1.good(); i++)
    {
        cout<<i<<endl;
        infile1 >> mA>>mH>>limit;
        if (mA==mH-100)
        {
            outfile1<<mA<<" "<<limit<<endl;
        }
    }
    return 0;
}