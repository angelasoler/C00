#include <unistd.h>

void test_sum_funtion(void)
{
	char n[2];
	char result;

	n[0] = 55;
	n[1] = 57;
	result = n[0] + n[1];

	write(1, &result, 1);
}

