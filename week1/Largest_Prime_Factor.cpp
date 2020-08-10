#include<stdio.h>
void primeFactors(long long x)
{
	while (x % 2 == 0)
	{
		printf("%d ", 2);
		x = x / 2;
	}
	for (long long i = 3;i <= x/2;i = i + 2)
	{
		while (x % i == 0)
		{
			printf("%lld ", i);
			x = x / i;
		}
	}
	if (x > 2)
	{
		printf("%lld ", x);
	}
}
int main()
{
	long long num = 0;
	scanf_s("%lld", &num);
	primeFactors(num);
	return 0;
}