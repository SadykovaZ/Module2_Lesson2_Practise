#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;

	printf("Введите номер задания:\t");
	scanf("%d", &n);

	if (n == 3)
	{
		//3.	С начала суток прошло N секунд (N — целое). Найти количество полных минут, прошедших с начала суток.
		int N = 0;
		float Minute = 0;

		printf("Введите сколько прошло секунд с начала суток:\t");
		scanf("%d", &N);

		Minute = (float)N / 60;

		printf("Количество полных минут, прошедших с начала суток = %f\n", Minute);
		printf("Количество полных минут, прошедших с начала суток = %d\n", N / 60);


	}

	else if (n == 4)
	{
		//4.	Даны два неотрицательных числа a и b. Найти их среднее геометрическое. (то есть квадратный корень из их произведения: a⋅b(это все под корнем)

		unsigned int a = 0, b = 0;
		float c = 0;
		printf("Введите число а:\t");
		scanf("%d", &a);

		printf("Введите число b:\t");
		scanf("%d", &b);

		c = (float)sqrt(a*b);
		printf("Среднее геометрическое a и b = %f\n", c);


	}


	else if (n == 5)
	{

		//5.	Задание: составить структурную схему алгоритма и проект программы вычисления функции, один параметр ввести с клавиатуры, 
		//      а другой задать как константу, все вычисляемые значения вывести на экран

		int f = 0;

		printf("Введите номер подзадания:\t");
		scanf("%d", &f);

		if (f == 1)
		{

			// y=e2x+9.7c; c=a2+sqrt(b*x); a=lgx; x=3.5 b=0.4

			float x = 3.5, b = 0.4;
			float e = 0, y = 0, c = 0, a = 0;

			printf("Введите значение e =\t");
			scanf("%f", &e);

			y = pow(e, 2 * x) + pow(9.7, e);

			printf("Значение функции y = %f\n", y);

			printf("Введите значение a =\t");
			scanf("%f", &a);

			c = pow(a, 2) + sqrt(b*x);

			printf("Значение функции c = %f\n", c);

			a = log(x);

			printf("Значение функции a = %f\n", a);


		}

		else if (f == 2)
		{
			// y=xa2+b2, a=Ln|x|, b=e2x+ax, x=1.3, k=4

			float x = 1.3;
			int k = 4;
			float a = 0, b = 0, y = 0, e = 0;

			a = log(x);

			printf("Значение функции a = %f\n", a);

			printf("Введите значение е:\t");
			scanf("%f", &e);

			b = pow(e, 2 * x) + (a*x);

			printf("Значение функции b = %f\n", b);

			y = x*pow(a, 3) + pow(b, 2);

			printf("Значение функции y = %f\n", y);

		}

		else if (f == 3)
		{
			//y=a3/b2 a=ex b=(sin p2 + x3) x=2.1 p=1

			float x = 2.1;
			int p = 1;
			float e = 0, a = 0, b = 0, y = 0;

			printf("Введите значение е:\t");
			scanf("%f", &e);

			a = pow(e, sqrt(log(x)));

			printf("Значение функции a = %f\n", a);

			b = sin(pow(p, 2) + pow(x, 3));

			printf("Значение функции b = %f\n", b);

			y = pow(a, 3) / pow(b, 2);

			printf("Значение функции y = %f\n", y);


		}

		else if (f == 4)
		{
			float x = 2.7;
			int t = -6;
			float a = 0, b = 0, y = 0;

			a = log(x);

			printf("Значение функции a = %f\n", a);

			b = sqrt(pow(x, 2) + pow(t, 2));

			printf("Значение функции b = %f\n", b);

			y = pow(sqrt(fabs(a - (b*x))), 5);

			printf("Значение функции y = %f\n", y);



		}

		else if (f == 5)
		{
			float t = 4.1;
			int p = 3;
			float x = 0, k = 0, y = 0;

			k = sqrt(p*t);

			printf("Значение функции k = %f\n", k);

			x = p*pow(t, 2) + sqrt(k);
			printf("Значение функции x = %f\n", x);

			y = tan(pow(x, 2)) + (k*t);
			printf("Значение функции y = %f\n", y);


		}


		else if (n == 6)

		{
			int v = 0;

			printf("Введите номер подзадания:\t");
			scanf("%d", &v);

			if (v == 1)
			{
				//1.	Тело движется по закону S =t3 – 3t2 + 2. Вычислить скорость тела в момент времени t. 
				//      Значение t ввести с клавиатуры (Функция скорости есть производная от функции расстояния по времени).

				float t = 0, S = 0;

				printf("Введите значение t:\t");
				scanf("%f", &t);

				S = pow(t, 3) - 3 * pow(t, 2) + 2;



			}






		}


	}
