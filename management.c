#include "common.h"
#include "management.h"

int management(){
	int i;
	printf("1. 전체회원보기\n");
	printf("2. 회원정보 검색 및 상세정보(트레이닝 계획서)\n");
	printf("3. 회원정보 수정\n");
	printf("4. 회원정보 삭제\n");
	printf("5. 나가기\n"); 
	
	scanf("%d",&i);
	return i;
}

