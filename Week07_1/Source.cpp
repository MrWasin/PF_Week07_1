#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char str[50];
	int i = 0;
	int count_C = 0, count_S = 0;
	scanf("%s", str);
	while (str[i] != '\0') {
		if ((str[i] >= 'A') && (str[i] <= 'Z')) {
			count_C = count_C + 1;
		}
		if ((str[i] >= 'a') && (str[i] <= 'z')) {
			count_S = count_S + 1;
		}
		i += 1;
	}
	printf("Capital letter = %d\n", count_C);
	printf("Small letter = %d", count_S);

	return 0;
}