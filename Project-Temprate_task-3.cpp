#include<stdio.h>
main()
{
	int n,n_c=0;
	
	printf("Enter a number->");
    scanf("%d",&n);
    
    for(n,n_c;n!=0;n_c++)
    {
    	n/=10;
	}
	printf("Number of digits -> %d",n_c);
}
