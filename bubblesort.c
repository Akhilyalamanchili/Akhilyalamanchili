#include<stdio.h>
//bubble sort
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int ar[n];
	//scanning an array
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	//sorting
	for(j=0;j<n;j++)
	{
	for(i=0;i<n-1;i++)
	{
		if(ar[i]>ar[i+1])
		{
			int temp=ar[i];
			ar[i]=ar[i+1];
			ar[i+1]=temp;
		}
	}
	}
	for(i=0;i<n;i++)
	printf("%d ",ar[i]);
}
//time complexity : o(n^2)
//due to usage of two nested for loops
