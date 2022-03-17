#include <stdio.h>
#include "main.h"

int main(void)
{
	char c;

	printf("Enter a digit: ");
	scanf("%c", &c);

	printf("%d\n", _isdigit(c));
}

