#include<stdio.h>
main()
{
	int n,i,ans=0;
	 printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n==0 && n==1) 
	{
        printf("%d is not a prime number.", n);
    }
    else 
	{
        for (i=2;i<=n/2;i++) 
		{
            if (n%i==0) 
			{
                ans = 1;
                break;
            }
        }
        if (ans == 0) 
		{
            printf("%d is a prime number.", n);
        }
        else 
		{
            printf("%d is not a prime number.", n);
        }
    }
}
