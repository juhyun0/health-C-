#include "common.h"
#include "manager.h"
#include "plan.h"


extern Memb **mb;
extern int mbCnt;

enum Manager{TRAINING=1, MANAGEMENT, PW,QUIT};
int manager(){
	int i;
	printf("1. Ʈ���̴װ�ȹ�� ����\n");
	printf("2. ȸ������\n");
	printf("3. ��ȣ����\n");
	printf("4. ������\n");
	printf(">>");
	scanf("%d",&i);
	return i;
}

void Manager(){
	enum Manager i;
	while((i=manager())!=4){
		switch (i){
			case TRAINING:
				if(mbCnt==0){
	    			mb[0]=(Memb *)malloc(sizeof(Memb));
	    		}else{
	    			mb[mbCnt]=(Memb *)realloc(mb,(mbCnt+1)*sizeof(Memb));
	    		}
	    		mb[mbCnt++]=training();
	    		plan();
				break;
			case MANAGEMENT:
				management();
				break;
			case PW:
				break;
		}
	}
}
