#include<stdio.h>
int main()
{
	int n;
	float c;
	scanf("%d", &n);
	if(n * 95 > 300)
	{
		c = n*95*0.85;
		printf("%.2f", c);
	}
	else
	{
		c = n*95;
		printf("%.2f", c);
	}
	return 0;
}