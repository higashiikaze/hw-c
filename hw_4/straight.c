#include <stdio.h>

//поиск коэффициентов уравнения прямой вида y = kx + b
//по координатам двух точек

int main ()
{
	int x1, y1, x2, y2;
	float k, b;  
			
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	
	k = (float)(y2-y1)/(x2-x1);
	b = (float)(y1*x2-x1*y2)/(x2-x1);

	printf("\n%.2f %.2f", k, b);
			
	return 0;
	
}
