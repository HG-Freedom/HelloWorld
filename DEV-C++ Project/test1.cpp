#include"stdio.h"
int main()
{
	int a[5],i,j,t;
	printf("Please Input 5 numbers\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(j=3;j>=0;j--)
	{
	for(i=0;i<=j;i++)
	if(a[i]>a[i+1])
	{t=a[i];a[i]=a[i+1];a[i+1]=t;}
	}
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
	printf("\nHello Word!\n");
	return 0;
}
