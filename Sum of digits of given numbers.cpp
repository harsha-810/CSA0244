#include <stdio.h>
main(void)
{
	int n,sum;
	scanf("%d",&n);
	sum=0;
	do
	{
		sum=sum+n%10;
		n=n/10;
	}while(n>0);
	printf("%d",sum);
}
