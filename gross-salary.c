#include <stdio.h>

/** Lawie's basic salary is input through the
 * keyboard. His commuter allowance is 40% of
 * basic salary, and house rent allowance is 
 * 20% of basic salary. Write a program to 
 * calculate his gross salary.
 *
 * basic - input via keyboard.
 * @ca: commuter's allowance.
 * @hse: house rent allowance.
 *
 * Return: gross
 */
int main()
{
	float basic, ca, hse, gross;

	printf("\nEnter Basic Salary of Lawie:");
	scanf("%f", &basic);

	ca = 0.4 * basic;
	hse = 0.2 * basic;
	gross = basic + ca + hse;

	printf("Basic Salary of Lawie=%f\n", basic);
	printf("Commuters allowance=%f\n", ca);
	printf("House allowance=%f\n", hse);
	printf("Gross pay of Lawie is %f\n", gross);
	return (0);
}
