#include<iostream>
#include<vector>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
	int n,i,total=0;
	ifstream infile("file.in",ios::in);
	if(!infile)
	{	
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	vector<int> v(8);
	infile >> n;
	for(i=0;i<8;i++)
		infile >> v.at(i);
	sort(v.begin(),v.end());
	for(i=7;i>2;i--)
		total = total + v.at(i);
	cout<<total<<endl;
	return 0;

}
