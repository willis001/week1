#include<stdio.h>
int main()
{
	int num{};
	for (int i = 0;i < 1000;i++)
	{
		if (i % 3 == 0)
		{
			num += i;
		}
		else if (i % 5 == 0)
		{
			num += i;
		}
	}
	printf("%d", num);
	return 0;
}