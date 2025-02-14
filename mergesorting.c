#include<stdio.h>
//merge sort
void merge(int ar[],int st,int en)
{
	int mid=(st+en)/2;
	if(st>=en)
	return ;
	merge(ar,st,mid);
	merge(ar,mid+1,en);
	meg(ar,st,mid,en);
}
int meg(int ar[],int st,int mid,int en)
{
	int i=st,j=mid+1;
	int a[en-st+1];
	int k=0;
//	merging those splited elements into another array
	while(i<=mid && j<=en)
	{
		if(ar[i]<ar[j])
		a[k++]=ar[i++];
		else
		a[k++]=ar[j++];
	}
	while(i<=mid)
	a[k++]=ar[i++];
	while(j<=en)
	a[k++]=ar[j++];
	k=0;
//	putting all the merged elements into orginal array
	for(i=st;i<=en;i++)ar[i]=a[k++];
}
int main()
{
	int n;
	scanf("%d",&n);
//	scaning of array
	int ar[n],i;
	for(i=0;i<n;i++)scanf("%d",&ar[i]);
	merge(ar,0,n-1);
	for(i=0;i<n;i++)printf("%d ",ar[i]);
	
}
//time complexity : o(nlogn)
