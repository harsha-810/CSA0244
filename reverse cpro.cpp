#include<stdio.h>
int main()
{
	int a,r=0,n;
	printf("enter a number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;	
	}
	printf("%d",r);
}
