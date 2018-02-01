#include "common.h"
#include "manager.h"
#include "plan.h"


extern Memb **mb;
extern int mbCnt;

enum Manager{TRAINING=1, MANAGEMENT, PW,QUIT};
int manager(){
	int i;
	printf("1. 트레이닝계획서 수정\n");
	printf("2. 회원관리\n");
	printf("3. 암호변경\n");
	printf("4. 나가기\n");
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
