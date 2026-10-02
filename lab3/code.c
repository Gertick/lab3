#include <locale.h>

#include <stdio.h>

#define D 2.54
#define P 2.32166
#define S 2.7076

void task1()

{
	int num;
	int num2;
	setlocale(LC_ALL, "ru_RU.UTF-8");

	printf("Введите целое число\n");
	scanf("%d", &num);
	printf("Введено число %d\n", num);
	printf("Введите целое число\n");
	scanf("%d", &num2);
	printf("Введено число %d\n", num2);
	printf("Сумма чисел %d и %d равна %d\n", num, num2, num + num2);
	printf("Разность чисел %d и %d равна %d\n", num, num2, num - num2);
	printf("Произведение чисел %d и %d равно %d\n", num, num2, num * num2);
	printf("Частное от деления числа %d на число %d равно %d\n", num, num2, num / num2);
	printf("Остаток от деления числа %d на число %d равен %d\n", num2, num, num2 % num);
}

void task2()

{
	int dym;
	float result1, result2, result3;

	setlocale(LC_ALL, "ru_RU.UTF-8");

	printf("Введите значение в дюймах\n");
	scanf("%d", &dym);
	result1 = D * dym;
	result2 = P * dym;
	result3 = S * dym;
	printf("%d английских дюймов - это %.2f см\n", dym, result1);
	printf("%d испанских дюймов - это %.2f см\n", dym, result2);
	printf("%d старолитовских дюймов - это %.2f см\n", dym, result3);

	system("pause");

}

void task3()
{
	int a, b;

	puts("Введите число a");
	scanf("%d", &a);

	puts("Введите число b");
	scanf("%d", &b);

	puts("_________________________");
	puts("| a * b | a + b | a - b |");
	printf("| %d * %d | %d + %d | %d - %d |\n", a, b, a, b, a, b);
	printf("| %d | %d | %d |\n", a * b, a + b, a - b);

}

void homework()
{
	float g = 6.67 * 0.00000000001;
	float m1, m2, r;
	float fp;

	puts("Введите массу первого тела");
	scanf("%f", &m1);
	puts("Введите массу второго тела");
	scanf("%f", &m2);
	puts("Введите расстояние между ними");
	scanf("%f", &r);
	fp = g * m1 * m2 / (r * r);
	printf("Сила притяжения между двумя этими телами равна %f\n", fp);

}

void main()

{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	task1();
	task2();
	task3();
	homework();

	system("pause");
}