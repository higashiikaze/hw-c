#include <stdio.h>

//определение времени года по номеру месяца

int main ()
{
	int month;
			
	scanf("%d", &month);
	
	if (3<=month && month<=5) printf("\nspring");
		else if (6<=month && month<=8) printf("\nsummer");
			else if (9<=month && month<=11) printf("\nautumn");
				else if (1==month || month==2 || month == 12) printf("\nwinter");
			
	return 0;
	
}
