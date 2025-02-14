#include<stdio.h>
//insertion sort
int main()
{
	int n;
	scanf("%d",&n);
//	scanning an array
	int i,ar[n];
	for(i=0;i<n;i++)scanf("%d",&ar[i]);
	inser(ar,n);
	for(i=0;i<n;i++)printf("%d ",ar[i]);
}
int inser(int ar[],int n)
{
//	sorting
	int i;
	for(i=1;i<n;i++)
	{
		int j=i-1;
		int te=ar[i];
		while(ar[j]>te && j>=0)
		{
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=te;
	}
}
//time complexity: o(n^2)
