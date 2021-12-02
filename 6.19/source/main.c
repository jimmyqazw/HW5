#include<stdio.h>
#include<stdlib.h>

int x[36000], y[36000], sum[13];

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 36000; i++)
	{
		x[i] = 1 + rand() % 6;
		y[i] = 1 + rand() % 6;
		int xy;
		xy = x[i] + y[i];
		switch (xy)
		{
		case 2:
			sum[2]++;
			break;
		case 3:
			sum[3]++;
			break;
		case 4:
			sum[4]++;
			break;
		case 5:
			sum[5]++;
			break;
		case 6:
			sum[6]++;
			break;
		case 7:
			sum[7]++;
			break;
		case 8:
			sum[8]++;
			break;
		case 9:
			sum[9]++;
			break;
		case 10:
			sum[10]++;
			break;
		case 11:
			sum[11]++;
			break;
		case 12:
			sum[12]++;
			break;
		}

	}
	for (int i = 2; i < 13; i++)
	{
		printf("%d\t%d\n", i, sum[i]);
	}
	system("pause");
	return 0;
}