#include "common.h"
#include "menu.h"

Memb **mb;
int mbCnt=0;


int main() {
	char i[10],p[10];
	char pw[10];
	int cnt=0;
	mb=(Memb**)malloc(sizeof(Memb*));
	MMenu in;
	
	while((in=mainMenu())!=QUIT){
		switch(in){
			case ADMIN:  
				while(1){
					printf("ID �Է��ϼ��� :");
					scanf("%s",i);
					printf("PW �Է��ϼ��� :");
					scanf("%s",p); 
				
				if(strcmp(p,"0000")==0){
					printf("�α��� ����!\n"); 
					break;
				} else{
					printf("�ٽ��Է��ϼ���.\n>>"); 
					scanf("%s",pw);
				}}
				manager();
				while(1){
					cnt++;
					training();
					plan();
					if(cnt==4){
						manager();
						break;
					} 
				}
			     break;
			case USER:
				while(1){
				 	User();
				 	break;
				 }
			default :
				errorMsg();
				break;
		}
	}
		
	
	return 0;
}
