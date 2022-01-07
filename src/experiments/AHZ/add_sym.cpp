#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>

using namespace std;

int main(){
    ifstream infile;
    infile.open("./AHZ13_ggf_ATLAS.txt", ios::in);
    ofstream outfile;
    outfile.open("./AHZ13_ggf_ATLAS_full.txt");

    int ll=69;
    double ma[ll][ll],mH[ll][ll],limit[ll][ll];
    double m3;
    int m1,m2;
    for (size_t i = 0; i < ll-1; i++)
    {
        for (size_t j = 0; j < ll-1; j++)
        {
            limit[i][j]=10000;
        }
        
    }
    
    for(int i = 0; infile.good(); i++)
    {
        infile>>m1>>m2>>m3;
        limit[(m1-130)/10][(m2-130)/10]=m3;
        limit[(m2-130)/10][(m1-130)/10]=m3;    
    }

    for (size_t i = 0; i < ll-1; i++)
    {
        for (size_t j = 0; j < ll-1; j++)
        {
            outfile<<setw(4)<<i*10+130<<setw(4)<<j*10+130<<" "<<setw(6)<<limit[i][j]<<endl;
            cout<<setw(4)<<i*10+130<<setw(4)<<j*10+130<<setw(6)<<limit[i][j]<<endl;
        }
        
    }
    
    infile.close();
    
    return 0;
}