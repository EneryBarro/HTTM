#include <stdio.h>

int main()
{
	int num;
	int lsum = 0, rsum = 0;
	
	printf("Enter a 6-digit number : ");
	scanf("%d", &num);
	printf("\n");

	for (int i = 0, _num = num; i < 6; i++)
	{
		if (i < 3)  rsum += _num % 10;
		else   lsum += _num % 10;

		_num /= 10;
	}

	if (lsum == rsum)
	{
		printf("\n\t\t\t\t   TICKET %d IS HAPPY ! ! !\n", num);
	}
	else
	{
		printf("\n\t\t\t\t   TICKET %d IS UNHAPPY :(\n", num);
	}

	return 0;
}
