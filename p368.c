#include <stdio.h>

main()
{
	int a,b,c,x;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	x = (a+b>c)*(b+c>a)*(a+c>b);
	printf("%d",x);
}

