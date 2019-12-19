/* palindrome*/
#include<stdio.h>
main()
{
	int n,r,sum=0,temp;
	printf("\n enter the n value:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(sum==temp)
     printf("\n print palindrome:");
     else
     printf("\n not a palindrome");
}


