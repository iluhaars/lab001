#include <stdio.h>
#include <math.h>

int main()
{
	int n;// ���� ����������
    float i=1;// ����������� �������
	float c=0;// ��������� ����������
	float x;// ������ ����������
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