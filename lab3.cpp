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
	infile >> n;
	vector<int> v(n);
	for(i=0;i<n;i++)
		infile >> v.at(i);
	sort(v.begin(),v.end());
	for(i=n-1;i>n-5;i--)
		total = total + v.at(i);
	cout<<total<<endl;
	return 0;

}
