#include <stdio.h>

main()
{
	int s,f,t;
	scanf("%d",&s);
	scanf("%d",&f);
	scanf("%d",&t);
	
	int Chicken,Rabbit,Crab;
	Crab = s-t;
	
	f = f - Crab*8; //16
	s = s - Crab; //5

	Rabbit = (f/2)-s;
	Chicken = (s - Rabbit);
	
	printf("%d",Chicken);
	printf("\n");
	printf("%d",Rabbit);
	printf("\n");
	printf("%d",Crab);
}
