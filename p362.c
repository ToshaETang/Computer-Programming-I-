#include <stdio.h>

main()
{
	int h,w,d;
	scanf("%d",&h);
	scanf("%d",&w);
	scanf("%d",&d);
	
	int Surface,Volume;
	Surface = 2*(h*w + w*d + d*h);
	Volume = h*w*d;
	
	printf("%d",Surface);
	printf("\n");
	printf("%d",Volume);
}

