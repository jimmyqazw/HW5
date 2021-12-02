#include <stdio.h>
#include <stdlib.h>

int binarySearch(int a[], int ans, int b);

int main()
{
	int ans, b, n;
	int a[10] = { 2,5,6,9,10,12,16,17,20,25 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("要搜尋的數字(1至25):");
	scanf_s("%d", &ans);

	b = binarySearch(a, ans, sizeof(a) / sizeof(int));

	if (ans < 0)
	{
		
		printf("找不到 %d\n", ans);
	}
	else
	{
		if (b + 1 == 0)
		{
			printf("找不到 %d\n", ans);
		}
		else
		{
			printf("在第 %d 筆資料找到 %d\n", b + 1, ans);
		}
		
	}

	system("pause");

}

int binarySearch(int a[], int search, int n)
{
	int low = 0, high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (a[mid] == search)
		{
			return mid;
		}
		else if (a[mid] > search)
		{
			high = mid - 1;
		}
		else if (a[mid] < search)
		{
			low = mid + 1;
		}
	}

	return -1;
}