#include<stdio.h>
main()
{
	int first_n,second_n,n,sum;
	
	printf("enter the value->");
	scanf("%d",&n);
	
	while (n>=first_n)
	{
		printf("%d\n",first_n);
		
	sum=first_n+second_n;
	first_n=second_n;
	second_n=sum;
	}
}
