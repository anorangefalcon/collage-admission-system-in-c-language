#ifndef LOGIN_SIGNUP_H_INCLUDED
#define LOGIN_SIGNUP_H_INCLUDED
#include "conio.h"



#endif // LOGIN_SIGNUP_H_INCLUDED
char Target[30];
char passWord[30];
int Found;
char suspectedPassWord[30];
int Found2;
char suspectedUser[30];
    
FILE *ACCOUNTS;
int createAccount(){
	char password[30];
	char userName[30];
	char new_check[30];
	int new_found;
	boxWindow();
    if((ACCOUNTS=fopen("login_signup.txt","a+"))==NULL){
        system("cls");
        gotoxy(60,1);printf("! The File is Empty...\n\n");}
    else
    {
    	//fclose(ACCOUNTS);
    	gotoxy(65,10);printf("CREATE ACCOUNT\n");
		startPoint:
		gotoxy(40,14);printf("Enter the user Name of your choice : ");scanf("%s",userName);
				gotoxy(40,15);printf("Enter a password of your choice : ");
				int i = 0;
				char ch;

					while (1) {
						if (i < 0) {
						i = 0;}
						ch = getch();
						if (ch == 13)break;
						if (ch == 8) /*ASCII value of BACKSPACE*/
						{putch('b');
						putch(NULL);
						putch('b');
						i--;
						continue;}

						password[i++] = ch;
						ch = '*';
						putch(ch);
					}
			password[i]= '\0';
    system("cls");
    fprintf(ACCOUNTS,"%s\t%s\n",userName,password);
    fclose(ACCOUNTS);
    system("cls");
    gotoxy(50,1);printf("INFO: Your account has been created successfully!\n");
    stud_main();
    
			if(new_found != 1){
			gotoxy(50,1);printf("Please choose Different User Name!\n");
			goto startPoint;
	} }
    return 0;
}
int stud_login(){
	boxWindow();
	gotoxy(65,6);printf("LOGIN MENU\n");
    if((ACCOUNTS=fopen("login_signup.txt","r"))==NULL){
		system("cls");
		gotoxy(50,1);printf("\a!The File is Empty...Create Account First");
		createAccount();
		}
		else
		{gotoxy(40,14);printf("Enter your user name: ");scanf("%s",Target);
			while(!feof(ACCOUNTS)&& Found==0){
				fscanf(ACCOUNTS,"%s",suspectedUser);
				if (strcmp(Target,suspectedUser)== 0)
					Found=1;
			}
					if(Found){ //Statements to be executed if user is correct
						if (strcmp(Target,suspectedUser)== 0){ //Checking Password
							gotoxy(40,15);printf("Hello %s Enter your Password: ",Target);
							int i = 0;
							char ch;
							while (1) {
								if (i < 0) {
									i = 0;
									}
								ch = getch();
								if (ch == 13)
								break;
								if (ch == 8){ /*ASCII value of BACKSPACE*/
									putch('b');
									putch(NULL);
									putch('b');
									i--;
									continue;
									}
								passWord[i++] = ch; 
								ch = '*';
								putch(ch);
								}
							passWord[i] = '\0';
							while(!feof(ACCOUNTS)&& Found2==0){
							fscanf(ACCOUNTS,"%s",suspectedPassWord);
							if (strcmp(passWord,suspectedPassWord)== 0)
								Found2=1;
								}
							if(Found2){
								if (strcmp(passWord,suspectedPassWord)== 0){
									system("cls");
									gotoxy(50,1);printf("Login Successful !");
									stud_main();
									}
									else if (strcmp(passWord,suspectedPassWord)!= 0){
										system("cls");
										gotoxy(50,1);printf("ERROR: Incorrect Password!\n\n");
										main_function();
										}
											else {
												system("cls");
												gotoxy(50,1);printf("INTERNAL ERROR!");
												main_function();
											}
								}
								if(!Found2){
									system("cls");
									gotoxy(50,1);printf("\a! YOU HAVE NOT BE ADMITTED,RE-APPLY NEXT YEAR....");
									main_function();
									}	
						}
						else if (strcmp(Target,suspectedUser)!= 0){
							system("cls");
							gotoxy(50,1);printf("ERROR: Incorrect User Name!\n");
							createAccount();
						}
							else  {
								system("cls");
								gotoxy(50,1);printf("Internal Error 2, Please see System Admin. for assistance\n");
								main_function();
								}
					}
					if(!Found){
					system("cls");
					gotoxy(50,1);printf("\a(!CREATE ACCOUNT FIRST.)");
					createAccount();
					}



		}
    fclose(ACCOUNTS);
return 0;
}
