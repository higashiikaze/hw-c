#include <stdio.h>

int main ()
{
	int a, b, c, d, e, min;
		
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if (a<=b&&a<=c&&a<=d&&a<=e) min=a;
	else if (b<=a&&b<=c&&b<=d&&b<=e) min=b;
		else if (c<=a&&c<=b&&c<=d&&c<=e) min=c;
			else if (d<=a&&d<=b&&d<=c&&d<=e) min=d;
				else if (e<=a&&e<=b&&e<=c&&e<=d) min=e;
	
	printf("%d", min);
		
	return 0;
	
}
