#ifndef _MENU_H
#define _MENU_H

#define errorMsg() printf("잘못입력!!\n")

 
typedef enum MainMenu { ADMIN=1, USER, QUIT } MMenu;

int mainMenu();

#endif
