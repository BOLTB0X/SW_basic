﻿#include <stdio.h>

int main() {
	
	int a;

	scanf("%d",&a);

	if (a > 0)
	{
		printf("plus\n");
		if (a % 2 == 0)
		{
			printf("even\n");
		}

		else if (a % 2 != 0)
		{
			printf("odd\n");
		}
	}
	else if (a < 0)
	{
		printf("minus\n");
		if (a % 2 == 0)
		{
			printf("even\n");
		}

		else if (a % 2 != 0)
		{
			printf("odd\n");
		}
	}
	
}

