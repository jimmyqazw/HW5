#include<stdio.h>
#include<stdlib.h>

void change(char *x);

int main(void)
{
	char str[50];
	printf("請輸入字串(50字以內):");
	scanf_s("%s", str, sizeof(str));
	change(str);
	system("pause");
	return 0;
}

void change(char *x)
{
	if (*x != '\0')
	{
		change(x + 1);
		printf("%c", *x);
	}
}
