#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int task1_Simv(char x); 

int main()
{
	setlocale(LC_ALL, "");

	puts("\tЗадание 1\n");
	char a;
	char res;
	printf("Введите букву или цифру: \n");	
	scanf("%c", &a);
	res = task1_Simv(a);
	switch (res)
	{
	case 'c':
		printf("Это буква.\n");
		break;
	case 'd':
		printf("Это цифра.\n");
		break;
	default:
		printf("Это не буква и не цифра\n");
	}
	
	
	puts("\tЗадание 2\n");
	float x, y;
	char c;
	puts("Операции:\n1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление\n5. Остаток от деления\n");
	puts("Введите x, номер операции и y:\n");
	scanf("%f %c%f", &x, &c, &y);
	switch (c)
	{
	case '1':
		printf(" =  %f\n\n\n", x + y);
		break;
	case '2':
		printf(" =  %f\n\n\n", x - y);
		break;
	case '3':
		printf(" =  %f\n\n\n", x * y);
		break;
	case '4':
		if (y == 0)
		{
			printf("Ошибка: деление на ноль");
		}
		else printf(" =  %f\n\n\n", x / y);
		break;
	case '5':
		printf(" =  %d\n\n\n", (int)x % (int)y);
		break;
	default: printf("Ошибка: введен неизвестный номер операции\n\n\n");
	}

	puts("\tЗадание 3\n");
	/*С января 2000 года по некоторый день прошло n месяцев и 3 дня.
Определить название месяца этого дня.Предусмотреть возможность задания
другого числа дней. Вариант 7*/
	int mes, den;
	printf("Введите количество месяцев и дней:\n");
	scanf("%d %d", &mes, &den);
	switch (mes)
	{
	case 1:
		if (den > 29) 
		{
			printf("Март");
			break;
		}
		else printf("Февраль");
		break;
	case 2:
		if (den > 30)
		{
			printf("Апрель");
			break;
		}
		else printf("Март");
		break;
	case 3:
		if (den > 31)
		{
			printf("Май");
			break;
		}
		else printf("Апрель");
		break;
	case 4:
		if (den > 30)
		{
			printf("Июнь");
			break;
		}
		else printf("Май");
		break;
	case 5:
		if (den > 31)
		{
			printf("Июль");
			break;
		}
		else printf("Июнь");
		break;
	case 6:
		if (den > 30)
		{
			printf("Август");
			break;
		}
		else printf("Июль");
		break;
	case 7:
		if (den > 31)
		{
			printf("Сентябрь");
			break;
		}
		else printf("Август");
		break;
	case 8:
		if (den > 30)
		{
			printf("Октябрь");
			break;
		}
		else printf("Сентябрь");
		break;
	case 9:
		if (den > 31)
		{
			printf("Ноябрь");
			break;
		}
		else printf("Октябрь");
		break;
	case 10:
		if (den > 30)
		{
			printf("Декабрь");
			break;
		}
		else printf("Ноябрь");
		break;
	case 11:
		if (den > 31)
		{
			printf("2001 год");
			break;
		}
		else printf("Декабрь");
		break;
	case 12:
		printf("2001 год");
		break;
	default:
		printf("Ошибка");
	}
	return 0;
}

int task1_Simv(char x)
{
	if (x >= '0' && x <= '9') return 'd';
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) return 'c';
}