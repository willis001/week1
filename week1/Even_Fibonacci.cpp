#include<stdio.h>
int main()
{
	int num = 0, i = 0, a = 0;
	for (int i = 1;i < 4000000;i += a)
	{
		a = i - a;
		if (i % 2 == 0)
		{
			num += i;
		}
	}
	printf("%d", num);
	return 0;
}