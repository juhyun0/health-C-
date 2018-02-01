#include "common.h"
#include "info.h"
#include "userlogin.h"



int info(){
	
	char reid[10], repw[10];
	
	printf("ID : ");
	scanf("%s",reid);

    printf("PASS : ");
	scanf("%s",repw);

   for(i=0;i<인원수;i++){	
		if(strcmp(회원[i].id,reid)==0 && strcmp(회원[i].pw,repw)==0){ 
			printf("총회원수:\n");
			printf("트레이닝목적별 회원수:\n");
			printf("운동 횟수별 회원수:\n");
			printf("운동 시간별 회원수:\n");
		}
	}
}
