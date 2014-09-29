#include<cstdio>
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	clock_t startTime = clock();
	int t,k,s=0;
	scanf("%d%d",&t,&k);
	long long int m;
	while(t--)
	{
		scanf("%lld",&m);
		if(m%k==0)
		s+=1;
	}
	printf("%d",s);
	cout <<"\n"<< double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl;
}
