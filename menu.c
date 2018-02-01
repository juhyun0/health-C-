#include "common.h"
#include "menu.h"

int mainMenu(){
	
	int m;
	printf("1. 관리자 모드\n2. 사용자모드\n3.종료\n>> ");
	
	scanf("%d", &m);
	
	return m;
}
	 
