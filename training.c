#include "common.h"
#include "training.h"

int training(){
	int i;
	printf("1. 다이어트 1시간\n"); 
	printf("2. 다이어트 2시간\n");
	printf("3. 건강증진 1시간\n");
	printf("4. 건강증진 2시간\n>>");
	
	scanf("%d",&i);
	return i;
	
}

