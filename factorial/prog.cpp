#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,f,r,i,c=0;
		scanf("%lld",&n);
		f=(n)/5;
		if(n>=(5*5))
		for (i = 2; pow(5,i)<=n ; i++)
		{
			c+=(n/(pow(5,i)));
			}
		r=f+c;
		printf("%lld\n",r);
	}
}
