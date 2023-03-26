#include<stdio.h>
main()
{
	int f=1,n;
	 printf("Enter a Number->");
	 scanf("%d",&n);
	 
	 for(f,n;n!=0;n--)
	 {
	 	f=f*n;
	 }
	 printf("Factorial is -> %d",f);
}
