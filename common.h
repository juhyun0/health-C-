#ifndef _COMMON_H
#define _COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct member{
	char name[20];
	char pass[20];
    char addr[80];
	char phone[12];
	char objective[80];
	int runCnt;
	int runTime;
}Memb;
		

#endif
