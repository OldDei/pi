#include <stdio.h>

int main(void)
{
	int size = 10000;
	long double pi = 3;
	long double pi_real = 3.141592653589793238462643383279502884197169399;
	long double array[size*2];

	for(long double i = 1; i <= size; i+=1)
	{
		array[(int)i - 1] = 4 / ((i*2)*((i*2)+1)*((i*2)+2));
	}

	for(int i = 0; i < size; i+=2)
	{
		pi += array[i];
		printf("pi=%.36Lf error=%.36Lf\n", pi, pi-pi_real);
		pi -= array[i+1];
		printf("pi=%.36Lf error=%.36Lf\n", pi, pi_real-pi);
	}
}
