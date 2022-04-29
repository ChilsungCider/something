#ifndef _FIRST_C_
#define _FIRST_C_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct info_struct
{
	int age;
	char name[20];
	int tall;
	char univ[10];
};

int selectMenu();
void showInfo(struct info_struct *i[], int number);
void enterInfo(struct info_struct *i[], int number);

#endif