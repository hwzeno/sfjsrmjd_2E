#include<stdio.h>
#include<math.h>
#define PI 3.1415926535
int main()
{
	int n;
	scanf("%d", &n);
	if(n > 360)
	{
		printf("error!");
		return -1;
	}
	else
	{
		printf("sin(n)=%f, cos(n)=%f", sin(PI/180 * n), cos(PI/180 * n));
	}
	return 0;
}