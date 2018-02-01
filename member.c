#include "common.h"
#include "member.h"


Memb * member(){	

    Memb *tMemb=(Memb *)malloc(sizeof(Memb));
    
    
	printf("이름 : ");
	scanf("%s",tMemb->name);
	fflush(stdin);
	printf("주소 : ");
	gets(tMemb->addr);
	printf("연락처 : ");
	scanf("%s",tMemb->phone);
	fflush(stdin);
	printf("트레이닝 목표 : ");
	gets(tMemb->objective);
	printf("주 운동 횟수 : ");
	scanf("%d",&tMemb->runCnt);
	printf("운동 시간 : ");
	scanf("%d",&tMemb->runTime);
	
	
	return tMemb;
}

