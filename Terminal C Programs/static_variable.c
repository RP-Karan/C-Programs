#include <stdio.h>

void increment()
{
	static int a = 6;
	a++;
	printf("%d\n",a);
}

int main()
{
	increment();
	increment();
	increment();
	return 0;
}
