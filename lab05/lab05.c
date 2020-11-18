#include <stdio.h>

int main()
{
	int num;
	int lsum = 0, rsum = 0;

	///TEST
	/*
	int cnt = 0;
	for (int i = 100000; i < 1000000; i++)
	{
	 num = i;

	 lsum = 0, rsum = 0;

	 for (int i = 0; i < 6; i++)
	 {
	  if (i < 3)  rsum += num % 10;
	  else   lsum += num % 10;

	  num /= 10;
	 }

	 if (lsum == rsum)
	 {
	  printf("\n\t\tMATCH : %d\n\n\t\t\tDEBUG :\n\t\t\t\tLSUM = %d\n\t\t\t\tRSUM = %d\n\t\t\t\tNUM = %d\n", i, lsum, rsum, num);
	  cnt++;
	 }
	}

	printf("\n\t\t\t\t\tCNT = %d\n", cnt);
	printf("\n\n\t\t\t\t\tEND\n\n\a");
	*/

//=================================================================================================================

	///RELEASE
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
		printf("\n\t\t\t\t\t   TICKET %d IS HAPPY ! ! !\n", num);
	}
	else
	{
		printf("\n\t\t\t\t\t   TICKET %d IS UNHAPPY :(\n", num);
	}

	return 0;
}
