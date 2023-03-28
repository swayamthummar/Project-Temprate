#include<stdio.h>
main()
{
	int n,fn,l_n,ans;
	fn=n;
	printf("Enter a number->");
    scanf("%d",&n);
    
    while(fn>=10)
    {
    	fn=fn/10;
	}
	l_n=l_n%10;
	
	ans=fn+l_n;
	
	printf("Sum of first & last number->%d",ans);
}
