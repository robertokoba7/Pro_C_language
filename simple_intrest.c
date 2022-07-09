#include <stdio.h>

/*Calculation of simple interest*/
/* Author Robert Okoba Date 09/07/2022 */

int main()
{
	int p, n;
	float r, si;

	printf("Enter values of: \np \nn \nr");
	scanf("%d%d%f", &p,&n,&r);

	si = p * n * r / 100;
	printf("%f\n",si);

	return (0);
}
