#include <stdio.h>
#include <locale.h>
#include "algorythm.h"
int main()
{
	printf("UNIT CONVERTER v0.1\n\n");
	printf("Choose category:\n\n");
	printf("1. Lenght\n");
	printf("2. Weight\n");
	printf("3. Information\n");
	printf("4. Time\n");
	printf("5. Temperature\n");
	printf("6. Speed\n\n");
	int n, i1, i2;
	double rez, value;
	printf("\n");
	scanf("%d", &n);
	printf("\n");
	switch (n)
	{
	case 1:
		printf("1. Milimeters\n");
		printf("2. Centimeters\n");
		printf("3. Deciometers\n");
		printf("4. Meters\n");
		printf("5. Foot\n");
		printf("6. Kilometers\n\n");
		printf("From ");
		scanf("%d", &i1);
		printf("to ");
		scanf("%d", &i2);
			if ((i1 < 1 || i1 > 6) || (i2 < 1 || i2 > 6))
			{
				printf("\n");
				printf("Incorrect enter\n");
				return 0;
			}
		break;
	case 2:
		printf("1. Kilograms\n");
		printf("2. Grams\n");
		printf("3. Tons\n");
		printf("4. Poods\n");
		printf("5. Pounds\n\n");
		printf("From ");
		scanf("%d", &i1);
		printf("to ");
		scanf("%d", &i2);
			if ((i1 < 1 || i1 > 5) || (i2 < 1 || i2 > 5))
			{
				printf("\n");
				printf("Incorrect enter\n");
				return 0;
			}
		break;
	case 3:
		printf("1. Bits\n");
		printf("2. Bytes\n");
		printf("3. Kilobytes\n");
		printf("4. Megabytes\n");
		printf("5. Gigabytes\n");
		printf("6. Terabytes\n\n");
		printf("From ");
		scanf("%d", &i1);
		printf("to ");
		scanf("%d", &i2);
			if ((i1 < 1 || i1 > 6) || (i2 < 1 || i2 > 6))
			{
				printf("\n");
				printf("Incorrect enter\n");
				return 0;
			}
		break;
	case 4:
		printf("1. Seconds\n");
		printf("2. Minutes\n");
		printf("3. Hours\n");
		printf("4. Day\n");
		printf("5. Weeks\n");
		printf("6. Years\n\n");
		printf("From ");
		scanf("%d", &i1);
		printf("to ");
		scanf("%d", &i2);
			if ((i1 < 1 || i1 > 6) || (i2 < 1 || i2 > 6))
			{
				printf("\n");
				printf("Incorrect enter\n");
				return 0;
			}
		break;
	case 5:
		printf("1. Celsius\n");
		printf("2. Fahrenheit\n");
		printf("3. Kelvin\n\n");
		printf("From ");
		scanf("%d", &i1);
		printf("to ");
		scanf("%d", &i2);
			if ((i1 < 1 || i1 > 3) || (i2 < 1 || i2 > 3))
			{
				printf("\n");
				printf("Incorrect enter\n");
				return 0;
			}
		break;
	case 6:
		printf("1. Metres per second\n");
		printf("2. Kilometers per hour\n");
		printf("3. Miles per hour\n\n");
		printf("From ");
		scanf("%d", &i1);
		printf("to ");
		scanf("%d", &i2);
			if ((i1 < 1 || i1 > 3) || (i2 < 1 || i2 > 3))
			{
				printf("\n");
				printf("Incorrect enter\n");
				return 0;
			}
		break;
	default:
		printf("Incorrect enter");
		return 0;
		break;
	}
	printf("\n");
	printf("Enter value: ");
	scanf("%lf", &value);
	printf("\n");
	rez = convert(i1-1, i2-1, value, n);
	printf("Result: %lf\n", rez);
	return 0;
}
