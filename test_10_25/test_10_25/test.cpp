#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
int N = 10000;
int main()
{
	int n, a[N],x,num;
	scanf("%d %d",&n,&x);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int left=0,right=n-1;
	while(left<right)
	{
		if(a[left]==x)
		{
			num++;
		}
		if(a[right]==x)
		{
			num++;
		}
		left++;
		right--;
	}
	printf("%d",num);
}