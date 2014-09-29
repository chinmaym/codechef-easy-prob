#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,c=0;
		long long int m;
		vector<long long int> v;
		v.push_back(1);
		scanf("%d",&n);
		for (int i = 2; i <=n ; i++)
		{
			c=0;
			for(vector<long long int>::iterator it=v.begin();it!=v.end();it++)
			{
				m=((*it*i));
			//	printf("%lld%d\n",m,i);
				*it=(m+c)%10;
				c=(m+c)/10;
			}
			while(c!=0)
			{
			v.push_back(c%10);
			c/=10;
			}	
		}
		for(vector<long long int>::reverse_iterator it=v.rbegin();it!=v.rend();it++)
			{
				printf("%lld",*it);
			}
			printf("\n");
	}
}
