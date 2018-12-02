#ifndef ADMIN_FUNCTIONS_H_INCLUDED
#define ADMIN_FUNCTIONS_H_INCLUDED



#endif // ADMIN_FUNCTIONS_H_INCLUDED
FILE *UNALLOCATED;
FILE *ALLOCATED;
int admissionListAdminView(){
	boxWindow();
    char myCourse[30];
    char myLastName[30];
    char myFirstName[30];
    int myUACEPoints = 0;
    int registerNow = 0;
    char myHostel[30];
    char myGender[4];
    char myCollage[10];
    gotoxy(60,10);printf("\xB2 ADMISSION LIST \xB2");
    gotoxy(40,12);printf("-------------------List of Placed Students---------------------\n");
    if((SORTED_APP_LIST =fopen("SORTED_APP_LIST.txt","r"))==NULL){
        system("cls");boxWindow();
        gotoxy(35,10);printf("===>\a ! The File is Empty...\n\n");}
    else{   int count = 1;
			gotoxy(30,14);printf("%s    %-8s\t\t%-8s\t%-8s\t%-8s\t      %-8s\t%-8s\t%8s\n","No.","Last Name","First Name",
                "Course","Hall","Gender","Collage","School");
            while ((!feof(SORTED_APP_LIST))&&(count <=10)){
            fscanf(SORTED_APP_LIST,"%d%s%s%s%s%s%s",&myUACEPoints,myLastName,myFirstName,myCourse,myHostel,myGender,myCollage);
            gotoxy(30,(count + 15));printf("%d.     %s\t\t%s\t\t%s\t\t%s\t%s\t%s",count,myLastName,myFirstName,
			myCourse,myHostel,myGender,myCollage);
            count ++;}
            printf("\n");
    }
    fclose(SORTED_APP_LIST);
}

int adminLogin(){
    char adminName[30];
    char adminPassword[30];
    boxWindow();
	gotoxy(65,10);printf("\xB2 ADMINISTRATORS LOGIN \xB2");

    AdminRe_enterAdminName:
    gotoxy(40,14);printf("Enter your Administrator name: ");scanf("%s",&adminName[0]);
            if (strcmp(adminName,"Admin25554")== 0){
            AdminRe_enterPassword:
            gotoxy(41,17);printf("Enter %s Password: ",adminName);
            int i = 0;
                char ch;

                while (1) {
                if (i < 0) {
                i = 0;
                }
                ch = getch();

                if (ch == 13)
                break;
                if (ch == 8) /*ASCII value of BACKSPACE*/
                {
                putch('b');
                putch(NULL);
                putch('b');
                i--;
                continue;
                }

                adminPassword[i++] = ch;
                ch = '*';
                putch(ch);
                }

                adminPassword[i] = '\0';
                if (strcmp(adminPassword,"25554")== 0){
                   system("cls");adminMenu();
                   gotoxy(50,1);printf("\aLogin Successful !\n");
                    }
                 else if (strcmp(adminPassword,"25554")!= 0){
                    system("cls");main_function();
                    gotoxy(50,1);printf("\aERROR: Incorrect Password!\n");
                    }
                 else {
                    system("cls");main_function();
                    gotoxy(50,1);printf("\a INTERNAL ERROR!");
                    
                   }
               }
        else if (strcmp(adminName,"Admin25554")!=0){
            gotoxy(50,1);printf("\aERROR: Incorrect User Name!\n");
            goto AdminRe_enterAdminName;
            //mainMenu();
            //printf("\n");
           }
        else  {
            system("cls");main_function();
            gotoxy(50,1);printf("\aInternal Error 2, Please see System Admin. for assistance\n");
        }
}

int adminMenu(){
        int adminPick;
	boxWindow();
	gotoxy(60,10);printf("\xB2 ADMINISTRATOR MENU \xB2");
	gotoxy(40,12);printf("Please select an option from the menu below: \n");
	gotoxy(20,15);printf("1. View 2018/2019 Applicants\n");
	gotoxy(90,15);printf("2. View Report (Bio Data)");
	gotoxy(20,16);printf("3. View Registration Report\n");
	gotoxy(90,16);printf("4. View Un Allocated Students");
	gotoxy(20,17);printf("5. View Report (Registration Report)\n");
	gotoxy(90,17);printf("6. View Students who failed to register");
	gotoxy(20,18);printf("4. Quit\n");//gotoxy(90,18);printf("7. View Unallocated Students");
	gotoxy(20,19);printf("Please select your choice : ");
    switch (getch()){

    case '1':system("cls");adminViewApplicationReport();
        break;
    case '2':system("cls");vAdminBioData();
        break;
    case '3':system("cls");viewRegistrationReport();
        break;
    case '4':system("cls");viewUnAllocatedStudentsAdmin();
    case '5'://system("cls");viewRegistrationReport();
    case '6':
    //case '7':system("cls");viewUnAllocatedStudentsAdmin();
        return 0;
        break;
    default:system("cls");exit(0);
        }
return 0;
}

void vPlacedStudents(){
    boxWindow();
     char vPlacedStudentNames1[20];
     char vPlacedStudentNames2[20];
     int vPlacedStudentNumbers = 0;
     gotoxy(60,7);printf("\xB2 PLACED STUDENTS \xB2");
     gotoxy(21,10);printf(
    "---------------------------------------Placed Students---------------------------------------------------");
     if ((REPORT1 = fopen("report1.txt","r"))== NULL){
        gotoxy(50,1);printf("No Student had been Placed yet");
        adminMenu();
     } else {
         gotoxy(40,13);printf("No.\t  First Name\t\t\tSecond Names");
           for (;!feof(REPORT1);){
            fscanf(REPORT1,"%s%s",vPlacedStudentNames1,vPlacedStudentNames2);
            gotoxy(40,15 + vPlacedStudentNumbers);printf("%d",(1 + vPlacedStudentNumbers));
            gotoxy(50,15 + vPlacedStudentNumbers);printf("%s",vPlacedStudentNames1);
            gotoxy(80,15 + vPlacedStudentNumbers);printf("%s",vPlacedStudentNames2);
            
            vPlacedStudentNumbers ++;
        }
        gotoxy(40                      ,20+ vPlacedStudentNumbers);printf("Please select an option from the menu below: \n");
        gotoxy(20+ vPlacedStudentNumbers,23+ vPlacedStudentNumbers);printf("1. Return to Admin Menu\n");
        gotoxy(90+ vPlacedStudentNumbers,23+ vPlacedStudentNumbers);printf("2. View Bio Data Report");
        gotoxy(20+ vPlacedStudentNumbers,24+ vPlacedStudentNumbers);printf("3. View All 2018/2019 Applicants)\n");
        gotoxy(90+ vPlacedStudentNumbers,24+ vPlacedStudentNumbers);printf("4. Quite");
        gotoxy(20 + vPlacedStudentNumbers,25+ vPlacedStudentNumbers);
        switch (getch()){
            case '1':system("cls");adminMenu();
            case '2':system("cls");vAdminBioData();
            case '3':system("cls");adminViewApplicationReport();
            default:system("cls");exit(0);
        }
    }
}

void vAdminBioData(){
    boxWindow();
    char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20],i[20],j[20],k[20],l[20],m[20],n[20],o[20],p[20],q[20],r[20],s[20],t[20],u[20],v[20];
    char vLastName[10];
    char vFistName[10];
    char vTelNo[10];
    char vRegNo[15];
    char vStudNo[15];
    char vCourse[10],biodataview[600];
    int vbioCounter;
    gotoxy(56,7);printf("\xB2 ADMINISTRATOR BIO DATA VIEW \xB2");
    if ((REPORT2 = fopen("report2.txt","r"))== NULL){
        system("cls");adminMenu();
        gotoxy(50,1);printf("NO STUDENT HAS FILLED BIO DATA FORM YET");
    } else {
        gotoxy(21,10);printf(
    "---------------------------------------Report Bio Data---------------------------------------------------");
            gotoxy(14,14);printf(
            "No.\tNames\t\tPhone Number\t\tRegN\t\t\tStudNo\t\t\tCourse") ;
            for (vbioCounter = 1 ;!feof(REPORT2);vbioCounter ++){
            fgets(biodataview,600,REPORT2);
            gotoxy(14,16 + vbioCounter);printf("%d",vbioCounter);
            sscanf(biodataview,"%s%s%s%s%s %s%s",a,b,c,d,e,f,g);
            gotoxy(20,16 + vbioCounter);//puts(biodataview);
            printf("%s\t%s\t%s\t\t%s\t\t%s\t\t%s",a,b,c,e,f,g);
        }
        gotoxy(40,20+ vbioCounter);printf("Please select an option from the menu below: \n");
        gotoxy(20+ vbioCounter,23+ vbioCounter);printf("1. Return to Admin Menu\n");
        gotoxy(90+ vbioCounter,23+ vbioCounter);printf("2. View Placed Students");
        gotoxy(20+ vbioCounter,24+ vbioCounter);printf("3. View All 2018/2019 Applicants)\n");
        gotoxy(90+ vbioCounter,24+ vbioCounter);printf("4. Quite");
        gotoxy(20 + vbioCounter,25+ vbioCounter);
        switch (getch()){
            case '1':system("cls");adminMenu();
            case '2':system("cls");vPlacedStudents();
            case '3':system("cls");adminViewApplicationReport();
            default:system("cls");exit(0);}
    
    }
    


}
void adminViewApplicationReport(){
	char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20],i[20],j[20],k[20],l[20],m[20],n[20],o[20],p[20],q[20],r[20],s[20],t[20],u[20],v[20];
	char applicants[100000];
	boxWindow();
	int avCounter = 0;
	gotoxy(60,7);printf("\xB2 APPLICANTS LIST \xB2");
	gotoxy(21,10);printf(
    "---------------------------------------List of Applicants---------------------------------------------------");
	if ((APPLICATIONS = fopen("app.txt","r")) == NULL){
        gotoxy(50,1);printf("File can not be opened or does not exist");
    } else {
	gotoxy(20,14);printf("%s\t%-4s\t\t\t%-4s\t%-4s\t%-4s\t%-4s\t\t%4s\t\t%-4s\t\t\t%-4s",
	"No.","NAMES","1","2","3","Collage","School","Time","Course");
    while (!feof(APPLICATIONS)){
		fgets(applicants,100000,APPLICATIONS);
		sscanf(applicants,"%s%s%s%s%s %s%s%s%s%s %s%s%s%s%s %s%s",a,b,c,e,f,g,h,i,j,k,l,m,n,o,p,q,r);
		gotoxy(20,16 + avCounter);avCounter++;printf("%d",avCounter);avCounter--;
		gotoxy(23,16 + avCounter);
		//puts(applicants);
		printf("\t%s\t%s\t\t%s\t%s\t%s\t%s\t\t%s\t\t%s\t\t%s\t%s",a,b,i,j,k,l,m,q,d);
		avCounter ++;
    }
    gotoxy(40+ avCounter,20+ avCounter);printf("Please select an option from the menu below: \n");
	gotoxy(20+ avCounter,23+ avCounter);printf("1. Return to Admin Menu\n");
	gotoxy(90+ avCounter,23+ avCounter);printf("2. View Bio Data Report");
	gotoxy(20+ avCounter,24+ avCounter);printf("3. View Registration Report)\n");
	gotoxy(90+ avCounter,24+ avCounter);printf("4. Quite");
    gotoxy(20 + avCounter,25 + avCounter);
    switch (getch()){
     case '1':system("cls");adminMenu();
     case '2':system("cls");vAdminBioData();
     case '3':system("cls");viewRegistrationReport();
     default:system("cls");return (0);
    
    }
} }

int viewRegistrationReport(){
        char vRegisteredStudent[200],getreport1[100];
        int avCounter = 1;boxWindow();
        int unregistered = 0;
        int registered = 0;
        gotoxy(60,8);printf("\xB2 REGISTERED STUDENTS \xB2");
        gotoxy(20,13);
        printf("---------------------------------------Registration Report----------------------------------------------------");
        gotoxy(18,16);printf(
        "No.\t  Name\t\t\tTelN\t\tRegNo\t\tStudNo\t\tCourse\tCourseUnitesSem1");
        if ((REPORT5 = fopen("report5.txt","r"))== NULL){
             system("cls");
            gotoxy(50,1);printf("No student has registered yet");
           adminMenu();
        } else {
                REPORT1 = fopen("report1.txt","r");
                while (!feof(REPORT1)){
                    fgets(getreport1,100,REPORT1);
                    unregistered++;
                }    
                for (;!feof(REPORT5);){
                fgets(&vRegisteredStudent,200,REPORT5);
                gotoxy(18,17 + avCounter);printf("%d",avCounter);
                gotoxy(25,17 + avCounter);puts(vRegisteredStudent);
                registered ++;
             }  gotoxy(110,10);printf("Statistic: %d/%d Registered",registered - 2,(unregistered -1));
                gotoxy(40+ avCounter,19+ avCounter);printf("Please select an option from the menu below: \n");
                gotoxy(20+ avCounter,22+ avCounter);printf("1. Return to Admin Menu\n");
                gotoxy(90+ avCounter,22+ avCounter);printf("2. View Bio Data Report");
                gotoxy(20+ avCounter,23+ avCounter);printf("3. View Unregistered Students\n");
                gotoxy(90+ avCounter,23+ avCounter);printf("4. Quite");
                gotoxy(20 + avCounter,24 + avCounter);
                fclose(REPORT1);
                fclose(REPORT5);
            switch (getch()){
                case '1':system("cls");adminMenu();
                case '2':system("cls");vAdminBioData();
                case '3':system("cls");
                default:system("cls");return (0);
            }
        }
 return (0);
}
void unregistered(){
    boxWindow();char a[10],b[10],ac[10],bc[10],dc[10],ec[10],fc[10],gc[10],hc[10],x[10],y[10];
    char getreport1[100],getreport5[1000];int avCounter = 0;
    REPORT1 = fopen("report1.txt","r");REPORT5 = fopen("report5.txt","r");
    for (;!feof(REPORT1);){
        fgets(getreport1,100,REPORT1);
        sscanf(getreport1,"%s%s",a,b);
        
          for (;!feof(REPORT5);){
            fscanf(REPORT5,"%s%s%s%s%s %s%s",ac,bc,dc,ec,fc,gc,hc);
            gotoxy(10,14 + avCounter);printf("%s  %s %s %s %s %s %s",ac,bc,dc,ec,fc,gc,hc);
            if ((strcmp(ac,a) == 0)||(strcmp(b,bc)== 0)){
                strcpy(a,x);strcpy(b,y);
                break;
            }
          }
        //gotoxy(10,14 + avCounter);printf("%s\t%s",x,y);//puts(getreport1);
        avCounter++; break;
    }
        gotoxy(40+ avCounter,19 + avCounter);printf("Please select an option from the menu below: \n");
        gotoxy(20+ avCounter,22+ avCounter);printf("1. Return to Admin Menu\n");
        gotoxy(90+ avCounter,22+ avCounter);printf("2. View Bio Data Report");
        gotoxy(20+ avCounter,23+ avCounter);printf("3. Allocated a Student Manually)\n");
        gotoxy(20 + avCounter,24 + avCounter);printf("4. View Allocated Students");
        gotoxy(90+ avCounter,23+ avCounter);printf("5. Quite");
            switch (getch()){
                case '1':system("cls");adminMenu();
                case '2':system("cls");vAdminBioData();
                case '3':
                default:system("cls");return (0);
            }



}
int  viewUnAllocatedStudentsAdmin(){
    char b[20],c[20],d[20],e[20],f[20],g[20],h[20],i[20],j[20],k[20],l[20],m[20],n[20],o[20],p[20],q[20],r[20],s[20],t[20],u[20];
    int pointer = 0;int avCounter = 0;
	boxWindow();
	int viewAllocations = 0;
	gotoxy(60,7);printf("\xB2 UN ALLOCATED STUDENTS \xB2\n");
	char unAllocatedSTUDENT[200];
    if ((APPLICATIONS3 = fopen("report3.txt","r"))== NULL){
        system("cls");adminMenu();
       gotoxy(50,1);printf("Sorry No allocation has been  done yet");
    } else {
        gotoxy(20,13);printf("No.\t\tFirst Name\tLast Name\tA Level Points");
        for (;(!feof(APPLICATIONS3));){
		fgets(unAllocatedSTUDENT,100,APPLICATIONS3);
		//puts(unAllocatedSTUDENT);
        sscanf(unAllocatedSTUDENT,"%d%s%s%s%s %s%s",&pointer,b,c,d,e,f,g);
        if (pointer<10){
            gotoxy(20,14 + avCounter);printf("%d\t\t%s\t\t%s\t\t\t%d",avCounter,b,c,pointer);
        }
        avCounter++;
	}
        gotoxy(40+ avCounter,19 + avCounter);printf("Please select an option from the menu below: \n");
        gotoxy(20+ avCounter,22+ avCounter);printf("1. Return to Admin Menu\n");
        gotoxy(90+ avCounter,22+ avCounter);printf("2. View Bio Data Report");
        gotoxy(20+ avCounter,23+ avCounter);printf("3. Allocated a Student Manually)\n");
        gotoxy(20 + avCounter,24 + avCounter);printf("4. View Allocated Students");
        gotoxy(90+ avCounter,23+ avCounter);printf("5. Quite");
            switch (getch()){
                case '1':system("cls");adminMenu();
                case '2':system("cls");vAdminBioData();
                case '3'://system("cls");allocateStudent();
                default:system("cls");return (0);
            }
    }
	
	
}
