#include "first.h"

void enterInfo(struct info_struct *i[], int number)
{
	printf("이름 : ");
	scanf("%[^\n]s", i[]);
	printf("나이 : ");
	printf("키 : ");
	printf("학교(대학 졸업시 일반인으로 기재) : ");
}