#include<stdio.h>

int main()
{
	int achievement;
	
	printf("plese input your achievement :\n");
	scanf_s("%d", &achievement);

	if (achievement >= 90)
	{
		printf("A");
	}
	else if(achievement >= 80 && achievement < 90)
	{
		printf("B");
	}

	return 0;

}