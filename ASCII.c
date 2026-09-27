#include <stdio.h>

int main(void)
{
	char letter;
	int number;
	int choice;
	char num;

	printf("Welcome to ASCII coverter\n=========================\n");
	printf("1. Find ASCII value of a letter\n2. Hexadecimal value of a number\n3. ASCII value of a number\n: ");
	scanf("%d", &choice);

	if (choice == 1)
	{
		printf("Enter one letter: ");
		scanf(" %c", &letter);

		printf("The ASCII value for letter %c is %d\n", letter, letter);
	} else if (choice == 2)
	{
		printf("Enter a number: ");
		scanf("%d", &number);

		printf("The hexadecimal value for %d is %x\n", number, number);
	} else if (choice == 3)
	{
		printf("Enter a number: ");
		scanf(" %c", &num);

		printf("The ASCII value for %c is %d\n", num, num);
	}else {
		printf("Not in the list");
	}

	return(0);
}