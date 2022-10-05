#include <stdio.h>

main()
{
	int X,X1,X2,X3;
	scanf("%d",&X);
	
	X3 = X%10;
	X2 = ((X-X3)%100)/10;
	X1 = X/100;
	
	printf("%d",X1);
	printf("\n");
	printf("%d",X2);
	printf("\n");
	printf("%d",X3);
}
