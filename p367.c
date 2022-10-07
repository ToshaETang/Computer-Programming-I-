#include <stdio.h>

main()
{
	int x;
	scanf("%d",&x);
	
	x = ((x%3)!=0)*1 + ((x%5)!=0)*1 + ((x%7)==0)*1;
	x = (x!=0)*1;
	
	printf("%d",x);
}

