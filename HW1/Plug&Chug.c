#include <stdio.h>
#include <math.h>

int main()
{
	double A = 1;
	double out = 0;
	const double Ts = 0.01;

	FILE* f = fopen("motor.csv", "wt");
	if (!f)
	{
		printf("Unable to open file.\n");
		return 1;
	}
	for (double time = 0; time < 5; time += Ts)
	{
		out = A * (1.0 - exp(-1.8 * time));
		fprintf(f, "%.2f,%.2f,%.2f\n", time, A, out);
	}

	fclose(f);
	return 0;
}
