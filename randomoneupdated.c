#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void groups_div(int n, int t, char string[][t]); 
// for giving random element from the entered data
int randomone(int n,int t,char st[][t])
{
	if(n==0)
		{
			printf("-:the entire data has been deleted:-\n");
			return 0;
		}
	int a=rand()%n;
	printf("%s\n",st[a]);
	printf("If you want to delete the data type 1 else type any data:");
	int b=-1,i;
	scanf("%d",&b);
	// for deleting the data that has been randomly taken
	if(b==1)
	{
		char str[t];
		strcpy(str,st[a]);
		for(i=a;i<n-1;i++)
		{
			strcpy(st[i],st[i+1]);
		}
		printf("sucessful delete %s\n",str);
		return n-1;
	}
	return n;
}
// code for grouping the data randomly
void groups_div(int n,int t,char string[][t])
{
	printf("Enter the size of each group:\n");
	int gr,k=0,i;
	char str[n][t];
	// creating a duplicate of the data
	for(i=0;i<n;i++)
	strcpy(str[i],string[i]);
	scanf("%d",&gr);
	char grp[n][t];
	// putting the random into another string
	while(n-1)
	{
		int a=rand()%n;
		strcpy(grp[k++],str[a]);
		// for deleting the randomly generated data from the string
		for(i=a;i<n-1;i++)
		strcpy(str[i],str[i+1]);
		n--;
	}
	printf("group:1\n");
	int a=1;
	for(i=0;i<k;i++)
	{
		if((i+1)%gr==0)
		printf("group:%d\n",++a);
		printf("%s\n",grp[i]);
	}
}
int main()
{
	srand(time(0));
	int n;
	printf("Enter the to no.of data:");
	scanf("%d",&n);
	int t;
	printf("enter the lenght of each data:");
	scanf("%d",&t);
    char st[n][t+1];
	char string[n][t+1];
    int i;
	printf("Enter the data:\n");
    for(i=0;i<n;i++)
	scanf("%s",st[i]);
	// creating a copy of the data
	for(i=0;i<n;i++)
	strcpy(string[i],st[i]);
	int j=n,k=t;
	while(1)
	{
		printf("1:for giving random data\n2:for dividing the data into groups\n3:stop\n");
		int op;
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			n=randomone(n,t+1,st);
			break;
			case 2:
			groups_div(j,k+1,string);
			break;
			case 3:
			return 0;
			default:
			printf("enter numbers between (1-3)\n");
			break;
		}
	}
} 