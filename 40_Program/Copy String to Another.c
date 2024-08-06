#include <stdio.h>
int main()
{
	char s1[20] = "Saikrishna";
	char s2[20];
	
	sprintf(s2, "%s", s1);

	printf("%s\n", s1);

	return 0;
}
