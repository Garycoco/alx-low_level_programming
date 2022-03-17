#include <stdio.h>
#include "main.h"

int main(void)
{
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);

	printf("%d\n", _isupper(c));
}

