#include<stdio.h>
main()
{
	int i,n;
	i=1;
	printf("enter the value");
	scanf("%d,&n");
	while(i<=n)
	{
		printf("\n %d X %d = %d ",n,i,i*n);
		i++;
	}
}
