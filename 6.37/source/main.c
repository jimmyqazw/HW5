#include <stdio.h>
#include <stdlib.h>

int m = -9999;
int Max(int a[], int i)
{
	if (i == 0) 
		return m;
	if (a[i] >= m) 
		m = a[i];
	return Max(a, i - 1);
}
int main()
{

	int a[10] ;
	printf("�п�J10�ӼƦr(�n�Ů���}):");
	scanf_s("%d %d %d %d %d %d %d %d %d %d",&a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

	printf("\n�̤j�ƭȡG%d", Max(a, 9));
}