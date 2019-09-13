#include <stdio.h>
#include <math.h>

double motor(double A, double c, double t)
{
	return A * (1 - exp(c * t));
}

int main()
{
	FILE* f = fopen("motor.csv", "wt");
	double ts = 0.1;
	if (!f)
	{
		printf("Unable to open file.\n");
		return 1;
	}
	for (double time = 0; time < 5; time += ts)
	{
		double out = 0;
		out = motor(7.2, -0.7, time);
		fprintf(f, "%.2f,%.2f,%.2f\n", time, 7.2, out);
	}
		fclose(f);
		return 0;
	}
