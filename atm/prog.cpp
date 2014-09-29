#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int w;
	double b,b2;
	cin>>w;
	cin>>b;
	if(w%5==0 && w+1<=b)
	b2=b-w-0.5;
	else
	b2=b;
	cout<<setprecision(2)<<fixed<<b2;
}
