#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int task1_Simv(char x); 
double calc(int x, char c, int y);
char task3(int mes, int den);
double dr_mes(int mes);

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
	case 'n':
		printf("Неизвестный сивол\n");
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
	if (calc(x,c,y) == -0.00000001)
	{
		printf("Ошибка\n");
	}
	else printf("%lf\n", calc(x, c, y));
	

	puts("\tЗадание 3\n");
	/*С января 2000 года по некоторый день прошло n месяцев и 3 дня.
Определить название месяца этого дня.Предусмотреть возможность задания
другого числа дней. Вариант 7*/
	int mes, den;
	printf("Введите количество месяцев и дней:\n");
	scanf("%d %d", &mes, &den);
	task3(mes, den);
	return 0;
}

int task1_Simv(char x)
{
	if (x >= '0' && x <= '9') return 'd';
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) return 'c';
	else return 'n';
}

double calc(int x, char c, int y)
{
	switch (c)
	{
	case '1':
		return x + y;
		break;
	case '2':
		return x - y;
		break;
	case '3':
		return x * y;
		break;
	case '4':
		if (y == 0)
		{
			return -0.00000001;
		}
		else return x / y;
		break;
	case '5':
		if (y != 0)
		{
			return x % y;
			break;
		}
	default: return -0.00000001;
	}
}

char task3(int mes, int den)
{
	if (den < 0 || mes < 0)
	{
		printf("Ошибка");
	}
	else
	{
		int c = ((mes - 1) % 12 + 12) % 12;

		switch (c)
		{
		case 0:
			if (den > 31) printf("Февраль\n");
			else printf("Январь\n");
			break;
		case 1:
			if (den > 28) printf("Март");
			else printf("Февраль");
			break;
		case 2:
			if (den > 31) printf("Апрель");
			else printf("Март");
			break;
		case 3:
			if (den > 30) printf("Май");
			else printf("Апрель");
			break;
		case 4:
			if (den > 31) printf("Июнь");
			else printf("Май");
			break;
		case 5:
			if (den > 30) printf("Июль");
			else printf("Июнь");
			break;
		case 6:
			if (den > 31) printf("Август");
			else printf("Июль");
			break;
		case 7:
			if (den > 31) printf("Сентябрь");
			else printf("Август");
			break;
		case 8:
			if (den > 30) printf("Октябрь");
			else printf("Сентябрь");
			break;
		case 9:
			if (den > 31) printf("Ноябрь");
			else printf("Октябрь");
			break;
		case 10:
			if (den > 30) printf("Декабрь");
			else printf("Ноябрь");
			break;
		case 11:
			if (den > 31) printf("Январь следующего года");
			else printf("Декабрь");
			break;
		default:
			printf("Ошибка");
		}
	}

}