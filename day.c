#include <stdio.h>

int main()
{
	int d, m, y, a, r;

	printf("day\n");
	scanf("%d",&d);
	printf("month\n");
	scanf("%d",&m);
	printf("year\n");
	scanf("%d",&y);

	a=(14-m)/12;
	y=y-a;
	m=m+12*a-2;
	r=(7000+d+y+y/4-y/100+y/400+(31*m)/12);
	r=r%7;

	switch(r)
	{
		case 1:
		printf("monday\n");
		break;
		case 2:
		printf("tuesday\n");
		break;
		case 3:
		printf("wednesday\n");
		break;
		case 4:
		printf("thursday\n");
		break;
		case 5:
		printf("friday\n");
		break;
		case 6:
		printf("saturday\n");
		break;
		case 0:
		printf("sunday\n");
		break;
	}
	return 0;
}
