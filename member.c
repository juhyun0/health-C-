#include "common.h"
#include "member.h"


Memb * member(){	

    Memb *tMemb=(Memb *)malloc(sizeof(Memb));
    
    
	printf("�̸� : ");
	scanf("%s",tMemb->name);
	fflush(stdin);
	printf("�ּ� : ");
	gets(tMemb->addr);
	printf("����ó : ");
	scanf("%s",tMemb->phone);
	fflush(stdin);
	printf("Ʈ���̴� ��ǥ : ");
	gets(tMemb->objective);
	printf("�� � Ƚ�� : ");
	scanf("%d",&tMemb->runCnt);
	printf("� �ð� : ");
	scanf("%d",&tMemb->runTime);
	
	
	return tMemb;
}

