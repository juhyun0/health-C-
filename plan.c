#include "common.h"
#include "plan.h"

int plan(){
	int i;
	printf("1일 : 스트레칭, 30kcal\n");
	printf("2일 : 윗몸일으키기(50회), 20kcal\n");
	printf("3일 : 플랭크, 100kcal\n");
	printf("4일 : 줄넘기(200회), 200kcal\n");
	printf("5일 : 스쿼트(100회), 300kcal\n>>"); 
	
	scanf("%d",&i);
	
	return i; 
}
