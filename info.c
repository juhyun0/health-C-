#include "common.h"
#include "info.h"
#include "userlogin.h"



int info(){
	
	char reid[10], repw[10];
	
	printf("ID : ");
	scanf("%s",reid);

    printf("PASS : ");
	scanf("%s",repw);

   for(i=0;i<�ο���;i++){	
		if(strcmp(ȸ��[i].id,reid)==0 && strcmp(ȸ��[i].pw,repw)==0){ 
			printf("��ȸ����:\n");
			printf("Ʈ���̴׸����� ȸ����:\n");
			printf("� Ƚ���� ȸ����:\n");
			printf("� �ð��� ȸ����:\n");
		}
	}
}
