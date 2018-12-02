#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "interface.h"
#include "stud_functions.h"
#include "conio.h"
#include "login_signup.h"
#include "PROGRAM_BRAIN.h"
#include "admin_functions.h"
#include <ctype.h>
#include <setjmp.h>



int main_function();
int main()
{	atexit(closePrograme);
	//vAdminBioData();
	boxWindow();
	gotoxy(65,6);printf("\xB2  MAIN MENU  \xB2");
	gotoxy(40,14);printf("Please select an option from the menu below: \n");
	gotoxy(40,15);printf("1. Login as Student\n");
	gotoxy(40,16);printf("2. Login as Administrator\n");
	gotoxy(40,17);printf("3. Create a New account\n");
	gotoxy(40,18);printf("4. Quit\n");
	gotoxy(40,19);printf("Enter your choice : ");//scanf("%d",&userPick);
	switch (getch()){
		case '1':system("cls");stud_login();break;
		case '2':system("cls");adminLogin();break;
		case '3':system("cls");createAccount();break;
		case '4':return 0;break;
		default:gotoxy(50,2);printf("INTERNAL ERROR!\n");
	}
    return (0); 
}
int main_function(){
	boxWindow();
	gotoxy(65,10);printf("MAIN MENU");
	gotoxy(40,14);printf("Please select an option from the menu below: \n");
	gotoxy(40,15);printf("1. Login as Student\n");
	gotoxy(40,16);printf("2. Login as Administrator\n");
	gotoxy(40,17);printf("3. Create a New account\n");
	gotoxy(40,18);printf("4. Quit\n");
	gotoxy(40,19);printf("Enter your choice : ");//scanf("%d",&userPick);
	switch (getch()){
		case '1':system("cls");stud_login();break;
		case '2'://system("cls");adminLoginMenu();break;
		case '3':system("cls");createAccount();break;
		case '4':system("cls");return 0;break;
		default:gotoxy(50,2);printf("INTERNAL ERROR!\n");}
    system("cls");
    return 0;
    
	

}
