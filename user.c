#include "common.h"
#include "user.h"

extern Memb **mb;
extern int mbCnt;


enum Member { MEMBERJOIN=1, CHECK, INFO, QUIT};
int user(){
	int i;
	
	printf("1. ȸ������\n"); 
	printf("2. �⼮üũ\n"); 
	printf("3. �ｺŬ����������\n"); 
	printf("4. ������\n");
	printf(">>");
	scanf("%d",&i);
	
	return i;	
}
void User(){
	enum Member i;
	while((i=user())!=4){
    	switch (i){
	    	case MEMBERJOIN:
	    		if(mbCnt==0){
	    			mb[0]=(Memb *)malloc(sizeof(Memb));
	    		}else{
	    			mb[mbCnt]=(Memb *)realloc(mb,(mbCnt+1)*sizeof(Memb));
	    		}
	    		mb[mbCnt++]=member();
	    		
			    break;
	    	case CHECK:
	    		//check();
			    break;
		    case INFO:
		    	info();
			    break;
		}	
	}
}
