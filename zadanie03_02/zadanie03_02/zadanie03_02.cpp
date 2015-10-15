#include <stdio.h>
#include <math.h>

int main()
{
	int n;// ввод переменной
    float i=1;// вычисляемая функция
	float c=0;// выводящая переменная
	float x;// вторая переменная
	float y;
scanf ("%d", &n);
scanf ("%f", &x);
while (i<=n)
{
	y=((pow(-1,i*i)*pow(x,i))/(1+i*i));
	c=c+y;
	i++;
}
printf ("%.9f\n", c);
return 0;
}