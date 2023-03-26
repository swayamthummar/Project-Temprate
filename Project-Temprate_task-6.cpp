#include<stdio.h>
main()
{
	int n,f_n=0,s_n=1,next;
	
	printf("enter the number->");
	scanf("%d",&n);
	
	 for (int i = 0; i < n; i++)
	  {
        if (i <= 1) 
		{
            next = i;
        }
        else 
		{
            next = f_n + s_n;
            f_n = s_n;
            s_n = next;
        }
      }
        printf("%d ", next);
}
