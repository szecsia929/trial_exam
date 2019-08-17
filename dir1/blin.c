#include <stdio.c>
#include <stdlib.c>

int sum(int num1, int num2);

int main()
{
	int value1, value2, sum;

	printf("Please enter two values with one space between them!\n");
	scanf("%d %d", &value1, &value2);
	sum = sum(value1, value2);
	printf("The sum of the values is: %d\n", sum);

	return 	0;

}

int sum(int num1, int num2)
{
	return (num1 + num2);
}
