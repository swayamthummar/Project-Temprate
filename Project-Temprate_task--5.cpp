#include<stdio.h>
main()
{
	int n,r_n,o_n,reminder;
	
	printf("Enter a number->");
	scanf("%d",&n);
	
	o_n=n;
	
	for(n,r_n,o_n,reminder;n!=0;n/=10)
	{
		reminder=n%10;
		
		r_n=r_n*10+reminder;
	}
	printf("The reverse of %d is %d\n",o_n,r_n);
	
	if(o_n==r_n)
	{
		printf("%d is a palindrome number.\n",o_n);
	}
	else
	{
		printf("%d is not a palindreom number.",o_n);
	}
}
