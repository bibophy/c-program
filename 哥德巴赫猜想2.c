#include<stdlib.h>

int main(void)
{
	long n, i;
	scanf("%ld"£¬ & n);

	printf("%ld=", n);

	for (i = 2; n >= i; i++)
	{
		while (n % i == 0)
		{
			printf("%ld", i);
			n /= i;
			if (n > 1)
				printf("*");
		}
	}
	if (n > 1
		printf("%ld", n);
		printf("\n");

		system("pause");

		return 0£»
}
