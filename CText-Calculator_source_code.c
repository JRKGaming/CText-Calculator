#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	char operator;
	double first_number;
	double second_number;

	printf("A basic text based calculator: CText-Calculator, written in C. Up to 200 calculations in one go\n");
	printf("Operators: + for addition, - for subtraction, / for division and * for multiplication\n\n");

	for (double index = 0; index < 200; ++index)
	{
		
		printf("\nEnter first number: ");
		scanf("%lf", &first_number);
		printf("\nEnter operator: ");
		scanf(" %c", &operator);
		printf("\nEnter the second number: ");
		scanf("%lf", &second_number);

		if (operator == '+')
		{
			printf("%lf", first_number + second_number);
		}
		else if (operator == '-')
		{
			printf("%lf", first_number - second_number);
		}
		else if (operator == '/')
		{
			printf("%lf", first_number / second_number);
		}
		else if (operator == '*')
		{
			printf("%lf", first_number * second_number);
		}
		else
		{
			printf("Invalid operator!");
		}

	}

	printf("MAXIMUM AMOUNT OF OPERATIONS REACHED, PLEASE RESTART THE APPLICATION TO USE MORE\n");
	printf("\nPress any key to exit");
	getch();

	return 0;
}