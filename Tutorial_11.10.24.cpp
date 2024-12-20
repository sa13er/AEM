#include <stdio.h>
#include <math.h>

float globalx, globaly;

int add2 (int x, int y)
{
	int result;
	result = x + y;
	return result;
}

float add2f (float x, float y)
{
	float result;
	result = x + y;
	return result;
}

void add3f(void)
{
	globalx = 3 * globaly;
	return;
}

void swap2(void)
{
	float temp;
	temp=globalx;
	globalx=globaly;
	globaly=temp;
	return;
}
int main()
{ 
	int x, y;
	x = 3;
	y = 5;
	printf("the value of x is: %d, and three times x is %d\n", x, 3 * x);
	
	x = x + y;
	printf("the value of x is: %d\n", x);
	
	if(x == x + y)
		printf("equal\n");
	else
		printf("unequal\n");

	if (0.362 * 100.0 != 36.2) //not equal?
		printf("0.362 * 100.0 and 36.2 are unequal\n");
	printf("%.20f\n", 0.362 * 100.0 - 36.2);
	
	if (abs(0.362 * 100.0 - 36.2)>1e-13) //not equal?
		printf("0.362 * 100.0 and 36.2 are unequal\n");
	else printf ("equal\n");
	
	int i;
	x=13;
	for(i = 10; (i >= 1) && (x>=10); i=i-3)
	{
		x = i + 3;
		printf("%d\n", x);
	}
	
	float c[11]; //arrays start at 0 in c/c++
	
	for(i = 0; i <= 10; i++)
	{
		c[i] = i * 0.1;
		printf("%f\n", c[i]);
	}
		
	x = add2(3,5);	
	printf("%d\n", x);
	
	printf("%f\n", add2f(c[1], c[3]));	
	
	x = add2f(c[1], c[3]);
	printf("%d\n", x);
	globalx = 4.5;
	globaly = 5.3;
	add3f();
	printf("%f\n", globalx);
	printf("%f %f\n", globalx, globaly);
	swap2();
	printf("%f %f\n", globalx, globaly);
	return 0;
}