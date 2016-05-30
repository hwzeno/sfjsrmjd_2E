#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, t;
	scanf("%d%d%d", &a, &b, &c);
	
	if((a+b) > c && 
	   (a+c) > b &&
	   (b+c) > a &&
	   abs(a-b) < c &&
	   abs(a-c) < b &&
	   abs(b-c) < a
		)
	{
		/*sort*/
		if(b>a)
		{
			t = a;
			a = b;
			b = t;
		}
		if(c>a)
		{
			t = a;
			a = c;
			c = t;
		}
		if(c>b)
		{
			t = b;
			b = c;
			c = t;
		}
		if(a*a == (b*b + c*c))
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}

	}
	else
	{
		printf("not a trangle");
	}
	return 0;
}


