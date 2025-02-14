#include<stdio.h>
//selection sort
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int ar[n];
//	scanning an array
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
//	sorting
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				int temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
}
//time compexity:o(n^2)
