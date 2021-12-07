#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

long int N, i;
double max, min, sum;
double* massRan;
int* massO;
max = 0.0, min = 0.0, sum = 0.0;





printf("N = \t");
scanf_s("%ld", &N);
printf("min = \t");
scanf_s("%lf", &min);
printf("max = \t");
scanf_s("%lf", &max);

	if ((N <= 0)||(max <= min)||(min <= 0.0)||(max <= 0.0))
	{
		printf("Error");
		return	0;
	}


	massO = (int*)malloc(N * sizeof(int));
	massRan = (double*)malloc(N * sizeof(double));

	for (i = 0; i < N; i++)
	{
		massO[i] = 0;
	}

	for ( i = 0; i < N; i++)
	{
		massRan[i] = (((double)rand()) / RAND_MAX * (max - min) + min);

		massO[i] = (massRan[i] - (int)massRan[i])*1000;

			while ((massO[i] % 10 == 0) && massO[i]!= 0)
				massO[i] = massO[i] / 10;
		}

for (i = 0; i < N; i++)
{
		if (massO[i] < N)
		{
			sum = sum - massRan[massO[i]];
		}
		else {
			sum = sum + massRan[i];
		}

	}	printf("sum = %lf\n", sum);

	free(massO);
	free(massRan);
	return 0;
}
