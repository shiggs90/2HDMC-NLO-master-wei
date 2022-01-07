#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main()
{

	float I[174][150] = {0};
	ifstream myfile("18012_CMS_H2-ZH1-llbb_35.9fb-1_obs.txt");
	ofstream outfile("AHZ_CMS13.txt", ios::trunc);
 
	if (!myfile.is_open())
	{
		cout << "can not open this file" << endl;
		return 0;
	}
    //从data1文件中读入int数据
	for (int i = 0; i < 174; i++)
	{
		for (int j = 0; j < 150; j++)
		{
			myfile >> I[i][j];
            // cout<<I[i][j]<<endl;
		}
	}
    
    for (int i = 0; i < 173; i++)
	{
		for (int j = 0; j < 149; j++)
		{
			// myfile >> I[i][j];
            outfile<<I[i+1][0]<<" "<<I[0][j+1]<<" "<<I[i+1][j+1]<<endl;

		}
        // cout<<endl;
	}
 
	myfile.close();
	outfile.close();
	return 0;
}