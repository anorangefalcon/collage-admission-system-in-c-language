#ifndef STUD_FUNCTIONS_H_INCLUDED
#define STUD_FUNCTIONS_H_INCLUDED



#endif // STUD_FUNCTIONS_H_INCLUDED

FILE *APPLICATIONS;
FILE *APPLICATIONS3;
FILE *SORTED_APP_LIST;
FILE *REPORT1;
FILE *REPORT2;
FILE *REPORT4; //UNALLOCATED STUDENTS
FILE *REPORT5;
char ar1[20],br2[20],cr3[20],dr4[20],er5[20],fr6[20],gr7[20],hr8[20],ir9[20],jr10[20];
char kr11[20],lr12[20],mr13[20],nr14[20],or15[20],pr16[20],qr17[20],rr18[20],sr19[20],tr20[20],ur21[20],vr22[20];int xy = 0;
struct bioData{
		char lastName[30];
		char firstName[30];
		char phoneNumber[30];
		char nationalID[30];
		char dateOfBirth[30];
		char course[20];
		//char registrationNo[30];
		//char studentNumber[30];
};


int AlevelPoints;
char AlevelPoint[10];
char AlevelComb[10];
char lastName[50];
char firstName[50];
char phoneNumer[50];
char nationalId[50];
char dateOfBirth[50];
char countryOfOrigine[50];
char first_choice[5];
char second_choice[5];
char third_choice[5];
char Day[10];
char Month[10];
char Date[10];
char Time[10];
char Year[6];
char givenHostel[30];
char gender[3];
char collage[4];
char school[6];

//Capture bio variables
struct bioData b;
int studentNumber = 1800700000;
int registrationNumber;
char regAndStudent[6];
char regTarget[30];



int stud_main(){
    int studentPick = 0;
    boxWindow();
    gotoxy(65,10);printf("STUDENT MAIN MENU");
	gotoxy(40,13);printf("Please select an option from the menu below: \n\n");
	gotoxy(20,15);printf("1. Apply for 2018/2019 Intake\n"); gotoxy(70,15);printf("5. View Lists of All Applicants");
	gotoxy(20,16);printf("2. Admission List");
    gotoxy(20,17);printf("3. Courses");
    gotoxy(20,18);printf("4. Quit");
    gotoxy(20,19);printf("Please select your choice : ");//scanf("%d",&studentPick);
    switch (getch()){
    	case '1':system("cls");applicationForm();break;
        case '2':
        	processAdmission();//prepare the admission list
        	system("cls");
        	admissionList();
        	exit(0);
        break;
        case '3':system("cls");
        displayCourse2018_2019();
        exit(0);
		case '4':exit(0);
        break;
        case '5':system("cls");studentApplicationReport();
        default:exit(0);
	}
return 0;
}
int displayCourse2018_2019(){
		boxWindow();
	    gotoxy(50,10);printf("AVAILABLE COURSES FOR 2018/2019 ACADEMIC YEAR"); 
		gotoxy(30,15);printf("01.CAES \t02.CoBAMS\	03.CoCIS\t04.CEDAT\t05.CHS\t	06.CoNAS");
        gotoxy(26,17);printf("--------------------------------------------------------------------------------------------");
        gotoxy(30,18);printf("01.AGR\t01.DEE	\t01.CSC 	\t01.CIV 	\t01.PHA 	\t01.BIC");
        gotoxy(30,19);printf("02.FST\t02.ECO	\t02.BIT 	\t02.ELE	\t02.MAM 	\t02.BFS");
        gotoxy(30,20);printf("03.AGE\t03.DEC	\t03.ILD 	\t02.MEC	\t03.BDS 	\t03.BSP");
        gotoxy(30,21);printf("04.BAR\t04.COE	\t04.BSW 	\t03.SUR	\t04.NUR 	\t04.SCB");
        gotoxy(30,22);printf("05.BAM\t05.ADM    \t05.DCS 	\t04.ARC	\t05.BMR 	\t05.SCP");
        gotoxy(30,23);printf("06.HOT\t06.STA	\t06.LIS 	\t05.SQS	\t06.BEH 	\t06.BPG");
        gotoxy(30,24);printf("07.AGM\t07.BQE	\t07.BRA 	\t06.SLE	\t07.BSL 	\t07.BBT");
        gotoxy(30,25);printf("08.HUN\t08.BPS	\t08.ARM 	\t07.SCM	\t08.BDT 	\t08.ETB");
        gotoxy(30,26);printf("09.BVS\t09.SAS	\t09.CSE 	\t08.STE	\t09.BSB 	\t09.BCB");
        gotoxy(30,27);printf("10.FOR\t10.BBS	\t10.BET	\t09.CMP	\t10.BBI 	\t10.SEC");
        gotoxy(30,28);printf("11.BCF\t11.ECE	\t11.RAM	\t10.CSD	\t11.BYT 	\t11.EHE");
        gotoxy(26,29);printf("--------------------------------------------------------------------------------------------");
        gotoxy(60,30);printf("Please select an option from the menu below: \n");
        gotoxy(30,31);printf("1. Return to Student Main Menu\n");
        gotoxy(90,32);printf("2. Apply for 2018/2019 Academic Year");
        gotoxy(30,33);printf("3. Return to Main Menu\n");
        gotoxy(90,34);printf("4. Quite");
        gotoxy(70,35);
        switch (getch()){
            case '1':system("cls");stud_main();
            case '2':system("cls");applicationForm();
            case '3':system("cls");main_function();
            default:system("cls");exit(0);}




 return 0;
}
void applicationForm(){
	boxWindow();
	FILE *HALLSFINDER;
	char hostel[15];
	char fromFile[200];
	char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20],i[20],j[20],k[20],l[20],m[20],n[20],o[20],p[20],q[20],r[20],s[20],t[20],u[20],v[20];int xy = 0;
	//int controler;
	time_t currentime; //getting time
	time(&currentime);//time
	int newStudentPick = 0;
	char admissionCourse[4];
	time_t curtime;
	time(&curtime);
	int randomSellectionMale = ( 1 + rand()%7 );
	int randomSellectionFemale = ( 1 + rand()%4 );
	int hostelguide = 0;
	
	//if ((APPLICATIONS = fopen("app.txt","a+")) == NULL){
        

		APPLICATIONS3 = fopen("report3.txt","a+");	
		gotoxy(65,6);printf("APPLICATION FORM");
        gotoxy(4,10);printf("Enter points you got at A level:=> ");scanf("%d",&AlevelPoints); 
        gotoxy(4,11);printf("Enter your Combination at UACE either PCB/M,BCM/IT,PCM/TD,MEG/TD or PEM/TD :=> ");scanf("%s",AlevelComb);
        //fclose(APPLICATIONS);
        if ((APPLICATIONS = fopen("app.txt","a+"))== NULL){
			gotoxy(50,1);printf("Sorry vacancies are full for students with combinations %s",AlevelComb);exit(0);
        }
        else {
			//for (;!feof(APPLICATIONS);)
			while (!feof(APPLICATIONS) ){
				//fgets(fromFile,200,APPLICATIONS);
				//gotoxy(4,13 + xy);puts(fromFile);printf("\n");
				fscanf(APPLICATIONS, "%s%s%s%s%s %s%s%s%s%s %s%s%s%s%s %s%s%s%s%s",a,b,c,d,e,  f,g,h,i,g,  k,l,m,n,o,  p,q,r,s,t);
				if (strcmp(b,AlevelComb)== 0){
					xy = 1 + xy; 
				}
			}
			
        }
        gotoxy(70,12);printf("%d",xy);
        if (xy>=2){
			system("cls");
			gotoxy(50,1);printf("Sorry vacancies are full for students with combinations %s",AlevelComb);
			stud_main();
			exit(0);
        }
        if ((strncmp(AlevelComb,"PCB/M",5)!= 0)&&(strncmp(AlevelComb,"BCM/IT",5)!=0)&&(strncmp(AlevelComb,"PCM/TD",5)!=0)&&
			(strncmp(AlevelComb,"MEG/TD",5)!=0)&&(strncmp(AlevelComb,"PEM/TD",5)!=0)){
			system("cls");
			gotoxy(30,1);printf("Sorry, Your combination %s is not either PCM/M,BCM/IT,PCM/TD,MEG/TD or PEM/TD",AlevelComb);
			stud_main();
			exit(0);	
			}
        //fclose(APPLICATIONS);
		gotoxy(4,12);printf("Enter  your FULL Name (Only 2) :=> ");scanf("%s",lastName);scanf("%s",firstName);
		gotoxy(4,13);printf("Enter your Sex ie F/M or f/m. Sex :=> ");scanf("%s",gender);
		gotoxy(4,14);printf("Enter your Phone Number        :=> ");scanf("%s",phoneNumer);
        gotoxy(4,15);printf("Enter your National ID number  :=> ");scanf("%s",nationalId);
        gotoxy(4,16);printf("Enter Date of Birth ie dd/mm/yyy :=> ");scanf("%s",dateOfBirth);
		gotoxy(4,17);printf("Enter your Nationality         :=> ");scanf("%s",countryOfOrigine);	
        
        gotoxy(10,18);printf("01.CAES \t02.CoBAMS\t	03.CoCIS\t\t04.CEDAT\t\t05.CHS\t\t	06.CoNAS");
        gotoxy(10,19);printf("--------------------------------------------------------------------------------------------------------------");
        gotoxy(10,20);printf("01.AGR\t01.DEE	\t\t01.CSC 	\t\t01.CIV 	\t\t01.PHA    \t\t01.BIC");
        gotoxy(10,21);printf("02.FST\t02.ECO	\t\t02.BIT 	\t\t02.ELE	\t\t02.MAM 	\t\t02.BFS");
        gotoxy(10,22);printf("03.AGE\t03.DEC	\t\t03.ILD 	\t\t02.MEC	\t\t03.BDS 	\t\t03.BSP");
        gotoxy(10,23);printf("04.BAR\t04.COE	\t\t04.BSW 	\t\t03.SUR	\t\t04.NUR 	\t\t04.SCB");
        gotoxy(10,24);printf("05.BAM\t05.ADM \t\t\t05.DCS 	\t\t04.ARC	\t\t05.BMR 	\t\t05.SCP");
        gotoxy(10,25);printf("06.HOT\t06.STA	\t\t06.LIS 	\t\t05.SQS	\t\t06.BEH 	\t\t06.BPG");
        gotoxy(10,26);printf("07.AGM\t07.BQE	\t\t07.BRA 	\t\t06.SLE	\t\t07.BSL 	\t\t07.BBT");
        gotoxy(10,27);printf("08.HUN\t08.BPS	\t\t08.ARM 	\t\t07.SCM	\t\t08.BDT 	\t\t08.ETB");
        gotoxy(10,28);printf("09.BVS\t09.SAS	\t\t09.CSE 	\t\t08.STE	\t\t09.BSB 	\t\t09.BCB");
        gotoxy(10,29);printf("10.FOR\t10.BBS	\t\t10.BET	\t\t09.CMP	\t\t10.BBI 	\t\t10.SEC");
        gotoxy(10,30);printf("11.BCF\t11.ECE	\t\t11.RAM	\t\t10.CSD	\t\t11.BYT 	\t\t11.EHE");
        gotoxy(10,31);printf("--------------------------------------------------------------------------------------------------------------");
        
		gotoxy(4,32);printf("Enter 3 course codes for your choice separated a space: ");
		scanf("%s%s%s",first_choice,second_choice,third_choice);
		
		//getting first choice
		//gotoxy(4,15);printf("Passed Collage000 %s  and Schoo000l %s   and %s",first_choice,second_choice,third_choice);
		switch(AlevelPoints){
			case 20:strcpy(admissionCourse,first_choice);
			case 19:strcpy(admissionCourse,first_choice);
			case 18:strcpy(admissionCourse,first_choice);
			case 17:strcpy(admissionCourse,first_choice);
			case 16:strcpy(admissionCourse,second_choice);
			case 15:strcpy(admissionCourse,second_choice);
			case 14:strcpy(admissionCourse,second_choice);
			case 13:strcpy(admissionCourse,second_choice);
			case 12:strcpy(admissionCourse,second_choice);
			case 11:strcpy(admissionCourse,second_choice);
			case 10:strcpy(admissionCourse,third_choice);
			case 9:strcpy(admissionCourse,third_choice);
			case 8:strcpy(admissionCourse,third_choice);
			case 7:strcpy(admissionCourse,third_choice);
			case 5:strcpy(admissionCourse,third_choice);
			default:break;
		}
		//Giving out collages and schools
		
		if ((strncmp(admissionCourse,"AGR",3))== 0){strcpy(collage,"CAES");strcpy(school,"SAS");} 
			else if ((strncmp(admissionCourse,"FST",3))== 0){strcpy(collage,"CAES");strcpy(school,"SFTNB");}
				else if ((strncmp(admissionCourse,"AGE",3))== 0){strcpy(collage,"CAES");strcpy(school,"SAS");}
					else if ((strncmp(admissionCourse,"BAR",3))== 0){strcpy(collage,"CAES");strcpy(school,"SAS");}
						else if ((strncmp(admissionCourse,"BAM",3))== 0){strcpy(collage,"CAES");strcpy(school,"SFTNB");}
							else if ((strncmp(admissionCourse,"HOT",3))== 0){strcpy(collage,"CAES");strcpy(collage,"SAS");}
								else if ((strncmp(admissionCourse,"AGM",3))== 0){strcpy(collage,"CAES");strcpy(school,"SAS");}
									else if ((strncmp(admissionCourse,"HUN",3))== 0){strcpy(collage,"CAES");strcpy(collage,"SAS");}
										else if ((strncmp(admissionCourse,"BVS",3))== 0){strcpy(collage,"CAES");strcpy(school,"SFEGS");}
											else if ((strncmp(admissionCourse,"FOR",3))== 0){strcpy(collage,"CAES");strcpy(school,"SFEGS");}
												else if ((strncmp(admissionCourse,"BCF",3))== 0){strcpy(collage,"CAES");strcpy(school,"SFEGS");}
		else if ((strncmp(admissionCourse,"DEE",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoE");}
		 else if ((strncmp(admissionCourse,"ECO",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoE");}
			else if ((strncmp(admissionCourse,"DEC",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoE");}
				else if ((strncmp(admissionCourse,"COE",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoE");}
					else if ((strncmp(admissionCourse,"ECE",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoE");}
						else if ((strncmp(admissionCourse,"EQE",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoE");}
							else if ((strncmp(admissionCourse,"BPS",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoB");}
								else if ((strncmp(admissionCourse,"BBS",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoB");}
									else if ((strncmp(admissionCourse,"ADM",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoB");}
										else if ((strncmp(admissionCourse,"SAS",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoSP");}
											else if ((strncmp(admissionCourse,"STA",3))== 0){strcpy(collage,"CoBAMS");strcpy(school,"SoSP");}
		else if ((strncmp(admissionCourse,"RAM",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"EASLIS");}
			else if ((strncmp(admissionCourse,"BET",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"EASLIS");}
				else if ((strncmp(admissionCourse,"BET",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"EASLIS");}
					else if ((strncmp(admissionCourse,"CSE",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"CIT");}
						else if ((strncmp(admissionCourse,"ARM",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"EASLIS");}
							else if ((strncmp(admissionCourse,"BRA",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"EASLIS");}
								else if ((strncmp(admissionCourse,"LIS",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"EASLIS");}
									else if ((strncmp(admissionCourse,"DCS",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"CIT");}
										else if ((strncmp(admissionCourse,"BSW",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"EASLIS");}
											else if ((strncmp(admissionCourse,"ILD",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"EASLIS");}
												else if ((strncmp(admissionCourse,"BIT",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"CIT");}
													else if ((strncmp(admissionCourse,"CSC",3))== 0){strcpy(collage,"CoCIS");strcpy(school,"CIT");}
		else if ((strncmp(admissionCourse,"CIV",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"SoEng.");}
			else if ((strncmp(admissionCourse,"ELE",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"SoEng.");}
				else if ((strncmp(admissionCourse,"MEC",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"SoEng.");}
					else if ((strncmp(admissionCourse,"ELE",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"SoEng.");}
						else if ((strncmp(admissionCourse,"ARC",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"SoBE");}
							else if ((strncmp(admissionCourse,"SQS",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"SoBE");}
								else if ((strncmp(admissionCourse,"SLE",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"MTSIF");}
									else if ((strncmp(admissionCourse,"STE",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"MTSIF");}
										else if ((strncmp(admissionCourse,"SCM",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"MTSIF");}
											else if ((strncmp(admissionCourse,"CMP",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"MTSIF");}
												else if ((strncmp(admissionCourse,"CSD",3))== 0){strcpy(collage,"CEDAT");strcpy(school,"MTSIF");}
		else if ((strncmp(admissionCourse,"BYT",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoM");}
			else if ((strncmp(admissionCourse,"BBT",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoPH");}
				else if ((strncmp(admissionCourse,"BSB",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoPH");}
					else if ((strncmp(admissionCourse,"BDT",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoPH");}
						else if ((strncmp(admissionCourse,"BSL",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoPH");}
							else if ((strncmp(admissionCourse,"BEH",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoBS");}
								else if ((strncmp(admissionCourse,"BMR",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoBS");}
									else if ((strncmp(admissionCourse,"NUR",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoM");}
										else if ((strncmp(admissionCourse,"BDS",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoBS");}
											else if ((strncmp(admissionCourse,"PHA",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoPH");}
												else if ((strncmp(admissionCourse,"MAM",3))== 0){strcpy(collage,"CHS");strcpy(school,"SoBS");}
		else if ((strncmp(admissionCourse,"BIC",3))== 0){strcpy(collage,"CoNAS");strcpy(school,"SoPS");}
			else if ((strncmp(admissionCourse,"BFS",3))== 0){strcpy(collage,"CoNAS");strcpy(school,"SoBS");}
				else if ((strncmp(admissionCourse,"BSP",3))== 0){strcpy(collage,"CoNAS");strcpy(school,"SoBS");}
					else if ((strncmp(admissionCourse,"SCP",3))== 0){strcpy(collage,"CoNAS");strcpy(school,"SoBS");}
						else if ((strncmp(admissionCourse,"BPG",3))== 0){strcpy(collage,"CoNAS");strcpy(school,"SoPS");}
							else if ((strncmp(admissionCourse,"BBT",3))== 0){strcpy(collage,"CoNAS");strcpy(school,"SoBS");}
								else if ((strncmp(admissionCourse,"ETB",3))== 0){strcpy(collage,"CoNAS");strcpy(school,"SoPS");}
									else if ((strncmp(admissionCourse,"BCB",3))== 0){strcpy(collage,"CoNAS");strcpy(school,"SoBS");}
										else if ((strncmp(admissionCourse,"SEC",3))== 0){strcpy(collage,"CoNAS");strcpy(school,"SoPS");}
											else if ((strncmp(admissionCourse,"EHE",3))== 0){strcpy(collage,"CoNAS");strcpy(school,"SoS");
		
		}
		//gotoxy(4,17);printf("Passed Collage %s  and School %s and %s",collage,school,second_choice);
		//scanf("%s",collage);
		//HALLSFINDER = fopen("hostel_number.txt","w");
		//fprintf(HALLSFINDER,"%d",hostelguide);
		//fclose(HALLSFINDER);
		//if ((APPLICATIONS = open("app.txt","a+"))== NULL){gotoxy(50,1);printf("File can not be opened or does not exist");}
		//else {
			fprintf(APPLICATIONS,"%s\t%s\t%s"
					"\t%s\t%s\t%s\t%s\t%s\t"
					"%s\t%s\t%s\t%s\t%s"
					,lastName,firstName,phoneNumer,
					admissionCourse,nationalId,dateOfBirth,countryOfOrigine,first_choice,
					second_choice,third_choice,collage,school,ctime(&curtime));
		//}
		
		fclose(APPLICATIONS);
		fprintf(APPLICATIONS3,"%d\t%s\t%s\t%s\t%s\t%s\t%s\n",AlevelPoints,lastName,firstName,admissionCourse,gender,collage,school);
		fclose(APPLICATIONS3);
		system("cls");boxWindow();
         gotoxy(50,1);printf("Application Submitted Successfully");
			gotoxy(10,26);printf("Enter 1 to go main menu or 2 to Quit: => ");scanf("%d",&newStudentPick);
			switch (newStudentPick){
			case 1:system("cls");stud_main();break;
			default :system("cls");
			gotoxy(50,1);printf("Thank You");break;
			stud_main();
		}
}
int admissionList(){
	addmittedStudentBoxWindow();
    char myCourse[30];
    char myLastName[30];
    char myFirstName[30];
    int myUACEPoints = 0;
    int registerNow = 0;
    char myHostel[30];
    char myGender[4];
    char myCollage[30];
    char mySchool[10];
    char getdata[100];
    gotoxy(60,10);printf("ADMISSION LIST");
    gotoxy(40,12);printf("-------------------List of Placed Students---------------------\n");
    REPORT1 = fopen("report1.txt","w");
    REPORT4 = fopen("report4.txt","w");
    if((SORTED_APP_LIST =fopen("SORTED_APP_LIST.txt","r"))==NULL){
        system("cls");addmittedStudentBoxWindow();
        gotoxy(35,10);printf("===>\a ! The File is Empty...\n\n");}
    else{   int count = 1;
			gotoxy(30,14);printf("%s    \t%-8s\t%-8s\t%-8s\t%-8s\t%-8s\t%8s\n","No.","Last Name","First Name",
			"Course","Gender","Collage","School");
            while ((!feof(SORTED_APP_LIST))&&(count<=10)){
			 //int report4count = 1;
			fgets(getdata,100,SORTED_APP_LIST);
            sscanf(getdata,"%d\t%s\t%s\t%s\t%s\t%s\t%s\n",&myUACEPoints,myLastName,myFirstName,myCourse,myGender,myCollage,mySchool);
            if (count < 10 ){
				gotoxy(30,count + 15);printf("0%d\t%s\t\t%s\t\t%s\t\t  %s\t\t%s\t\t  %s",(count),myLastName,myFirstName,myCourse,myGender,myCollage,
				mySchool);
            } else {
			gotoxy(30,count + 15);printf("%d\t%s\t\t%s\t\t%s\t\t  %s\t\t%s\t\t  %s",(count),myLastName,myFirstName,myCourse,myGender,myCollage,
			mySchool);	
			}
			fprintf(REPORT1,"%s\t%s\n",myLastName,myFirstName);
            count ++;}
            printf("\n");
		fclose(REPORT1);
		fclose(REPORT4);
		fclose(SORTED_APP_LIST);
		gotoxy(40,17 + count);printf("Enter 1 or any other integer to Stop: ");
		switch (getch()){
		     case '1':system("cls");admittedStudentMenu();
		     default :system("cls");exit(0);
		}
		
    }
}
void admittedStudentMenu(){
	addmittedStudentBoxWindow();
	gotoxy(60,10);printf("ADMITTED STUDENT MENU");
	int admittedStudentPick = 0;
	gotoxy(20,13);
	printf("-----------------------------------------------------------------------------------------------------------\n");
    gotoxy(15,16);printf("Please choose one\n");
    gotoxy(15,17);printf("1. Register/Enroll Now\n");
    gotoxy(15,18);printf("2. Return to main menu\n");
    gotoxy(15,19);printf("3. Quit\n");
	gotoxy(15,20);printf("Enter Your Choice: ");
    switch (getch()){
        case '1':system("cls");registerOrEnroll();break;
        case '2':system("cls");stud_main();break;
        default:return (0);
    }
}
void registerOrEnroll(){
	boxWindow();
	int regFound = 0;
	int regFound2;
	char regsuspectedStudent[30];
    gotoxy(60,10);printf("REGISTRATION MAIN MENU\n");
	if((REPORT1=fopen("report1.txt","r"))==NULL){
		system("cls");boxWindow();
        gotoxy(50,1);printf(" ! The File is Empty...\n\n");
	}
	else{
		gotoxy(4,15);printf("Enter your Sure Name : ");scanf("%s",regTarget);
		for (;!feof(REPORT1);){
			fscanf(REPORT1,"%s",regsuspectedStudent);
			if (strcmp(toupper(regTarget),toupper(regsuspectedStudent))== 0){
			regFound=1; 	
			}}
			if(regFound == 1){
					system("cls");gotoxy(50,1);printf("Admission Check successful");
					captureBioData();
                                }
			if(regFound != 1){
					boxWindow();
					gotoxy(50,1);printf("\aINFO:NO  STUDENT FOUND");
					gotoxy(60,1);printf("CONTACT SYSTEM ADMINISTRATOR !");
					return (0);
					fclose(REPORT1);
					}
                
		return;
	system("cls");admittedStudentMenu();
	}
}
void captureBioData(){
		addmittedStudentBoxWindow();
		FILE *STUDENTnUMBER_DB;
		if ((STUDENTnUMBER_DB = fopen("student_number.txt","r")) == NULL){
			//gotoxy(40,18);printf("Last Name: ");	
			studentNumber = 25554 + studentNumber;
			registrationNumber = 25554;
			}
			else {
				//gotoxy(40,18);printf("Last Name: ");
				for (;!feof(STUDENTnUMBER_DB);){
				fscanf(STUDENTnUMBER_DB,"%s",regAndStudent);
				}
				registrationNumber = atoi(regAndStudent) + 1;
				studentNumber = atoi(regAndStudent) + studentNumber + 1;
			}
		fclose(STUDENTnUMBER_DB);
		
		gotoxy(60,10);printf("REGISTRATION (BIODATA)\n");
            //gotoxy(120,10);printf("Name : %s",suspectedStudent);
            if ((REPORT2 = fopen("report2.txt","a+"))== NULL){
				boxWindow();gotoxy(50,1);printf("\aINFO:NO  STUDENT FOUND");
			}
			else{
				fclose(REPORT2);
				gotoxy(25,12);printf("------------------------------"
				"Stud1(Bio data Being Captured----------------------------------\n");
				strcpy(b.lastName,regTarget);
				APPLICATIONS = fopen("app.txt","r");
				for (;!feof(APPLICATIONS);){
					fscanf(APPLICATIONS,"%s%s%s%s%s %s%s%s%s%s %s%s%s%s%s %s%s",ar1,br2,cr3,dr4,er5,fr6,gr7,hr8,ir9,jr10,kr11,lr12,mr13,nr14,
					or15,pr16,qr17,rr18);
					if ((strcmp(b.lastName,ar1)== 0 )||(strcmp(b.lastName,br2)== 0 )||(strcmp(b.lastName,cr3)== 0 )||(strcmp(b.lastName,dr4)== 0 )||
							(strcmp(b.lastName,er5)== 0 )||(strcmp(b.lastName,fr6)== 0 )||(strcmp(b.lastName,gr7)== 0 )||(strcmp(b.lastName,hr8)== 0 )||
						(strcmp(b.lastName,ir9)== 0 )||(strcmp(b.lastName,jr10)== 0 )||(strcmp(b.lastName,kr11)== 0 )||(strcmp(b.lastName,lr12)== 0 )||
							(strcmp(b.lastName,mr13)== 0 )||(strcmp(b.lastName,nr14)== 0 )||(strcmp(b.lastName,or15)== 0 )||
							(strcmp(b.lastName,pr16)== 0 )||(strcmp(b.lastName,qr17)== 0 )){
								break;
							}
				}
				if ((strcmp(b.lastName,ar1))== 0){
						
				} else {
					char temp[20];
					strcpy(temp,ar1);
					strcpy(ar1,br2);
					strcpy(br2,temp);
				  //strcmp()
				}
				strcpy(b.firstName,br2);strcpy(b.phoneNumber,cr3);strcpy(b.nationalID,er5);strcpy(b.dateOfBirth,fr6);
				gotoxy(40,18);printf("Last Name: ");printf("%s",b.lastName);
				gotoxy(40,19);printf("First Name: ");printf("%s",b.firstName);
				gotoxy(40,20);printf("Phone Number: ");printf("%s",b.phoneNumber);
				gotoxy(40,21);printf("NationalID : ");printf("%s",b.nationalID);
				gotoxy(40,22);printf("DOB : ");printf("%s",b.dateOfBirth);
				gotoxy(40,23);printf("RegNo:  ");gotoxy(51,23);printf("18/U/%d\n",registrationNumber);
				gotoxy(40,24);printf("%s: ","Student No");gotoxy(52,24);printf("%d\n",studentNumber);
				gotoxy(40,25);printf("%s: ","Course");scanf("%s",b.course);gotoxy(4,28);
				STUDENTnUMBER_DB = fopen("student_number.txt","w");
				fprintf(STUDENTnUMBER_DB,"%d",registrationNumber);
				fclose(STUDENTnUMBER_DB);
				REPORT2 = fopen("report2.txt","a+");
				fprintf(REPORT2,"%s\t%s\t%s\t%s\t18/U/%d\t%d\t%s\n",b.lastName,b.firstName,b.phoneNumber,
				b.dateOfBirth,registrationNumber,studentNumber,b.course);
				fclose(REPORT2);
				//gotoxy(40,30);printf("%s: ","Course Done SAVED");

			
            system("cls");
            boxWindow();
            gotoxy(65,40);printf("REGISTRATION (BIODATA)\n");
            gotoxy(40,20);printf("Thank you For Submitting the Admission form!");
            //gotoxy(30,10);printf("REGISTRATION (BIODATA)\n");
            int ojok;
            gotoxy(40,25);printf("Enter 2 to Continue or Any Other Digit to Stop: ");//scanf("%d",&ojok);
            switch (getch()){
				case '2':system("cls");course_registration();
				default:gotoxy(40,22);return (0);
			}
		}

}
int course_registration(){
	char c_reg_lastName[30];
	char c_reg_firstName[30];
	char c_reg_mobileNumber[30];
	char c_reg_registrationNum[50];
	char c_reg_studentNum[50];
	char c_reg_course[10];
	char c_reg_courseA[10]; char c_reg_courseB[10];
	char c_reg_courseC[10]; char c_reg_courseD[10];
	char c_reg_courseE[10]; char c_reg_courseF[10];
	char c_reg_courseG[10]; char c_reg_courseH[10];
	char c_reg_courseI[10]; char c_reg_courseJ[10];
	int courseRegChecker = 2;
	int ojok = 0;
	addmittedStudentBoxWindow();
	gotoxy(60,10);printf("COURSE REGISTRATION\n");
	if ((REPORT5 = fopen("report5.txt","a+"))==NULL){
		system("cls");addmittedStudentBoxWindow();
        gotoxy(50,1);printf("INFO: FILE IS EMPTY");
	}
	else{
		gotoxy(40,12);printf("---------------------------Stud1--------------------------------\n");
		gotoxy(20,17);printf("Enter Number of Course Unites: ");scanf("%d",&courseRegChecker);
		strcpy(c_reg_lastName,b.lastName);strcpy(c_reg_firstName,b.firstName );
		gotoxy(20,18);printf("Last Name: ");printf("%s",c_reg_lastName);
		gotoxy(20,19);printf("First Name: ");printf("%s",c_reg_firstName);
		strcpy(c_reg_mobileNumber,b.phoneNumber);
		gotoxy(20,20);printf("Phone Number: ");printf("%s",c_reg_mobileNumber);
		gotoxy(20,21);printf("Registration No: ");printf("18/U/%d",registrationNumber);
		gotoxy(20,22);printf("Student No: ");printf("%d",studentNumber);
		strcpy(c_reg_course,b.course);
		gotoxy(20,23);printf("Course Code: ");printf("%s",c_reg_course); 
		if (courseRegChecker == 1){
			gotoxy(20,24);printf("1. Course Unite Code: ");scanf("%s",c_reg_courseA);
			fprintf(REPORT5,"%s\t%s\t%s\t18/U/%d\t%d\t%s\t%s\n",c_reg_lastName,c_reg_firstName,c_reg_mobileNumber,
			registrationNumber,studentNumber,c_reg_course,c_reg_courseA);fclose(REPORT5);
		} else if (courseRegChecker == 2){
					gotoxy(20,24);printf("1. Course Unite Code: ");scanf("%s",c_reg_courseA);
					gotoxy(20,25);printf("2. Course Unite Code: ");scanf("%s",c_reg_courseB);
					fprintf(REPORT5,"%s\t%s\t%s\t18/U/%d\t%d\t%s\t%s_and_%s\n",c_reg_lastName,c_reg_firstName,c_reg_mobileNumber,
					registrationNumber,studentNumber,c_reg_course,c_reg_courseA,c_reg_courseB);
					fclose(REPORT5);
				} else if (courseRegChecker == 3){
					gotoxy(20,24);printf("1. Course Unite Code: ");scanf("%s",c_reg_courseA);
					gotoxy(20,25);printf("2. Course Unite Code: ");scanf("%s",c_reg_courseB);
					gotoxy(20,26);printf("3. Course Unite Code: ");scanf("%s",c_reg_courseC);
					fprintf(REPORT5,"%s\t%s\t%s\t18/U/%d\t%d\t%s\t%s,%s_and_%s\n",c_reg_lastName,
					c_reg_firstName,c_reg_mobileNumber,registrationNumber,studentNumber,
					c_reg_course,c_reg_courseA,c_reg_courseB,c_reg_courseC);
					fclose(REPORT5);
				
				}  else if (courseRegChecker == 4){
						gotoxy(20,24);printf("1. Course Unite Code: ");scanf("%s",c_reg_courseA);
						gotoxy(20,25);printf("2. Course Unite Code: ");scanf("%s",c_reg_courseB);
						gotoxy(20,26);printf("3. Course Unite Code: ");scanf("%s",c_reg_courseC);
						gotoxy(20,27);printf("4. Course Unite Code: ");scanf("%s",c_reg_courseD);
						fprintf(REPORT5,"%s\t%s\t%s\t18/U/%d\t%d\t%s\t%s,%s,%s_and_%s\n",c_reg_lastName,
						c_reg_firstName,c_reg_mobileNumber,registrationNumber,studentNumber,
						c_reg_course,c_reg_courseA,c_reg_courseB,c_reg_courseC,c_reg_courseD);fclose(REPORT5);
					} else if (courseRegChecker == 5){
						gotoxy(20,24);printf("1. Course Unite Code: ");scanf("%s",c_reg_courseA);
						gotoxy(20,25);printf("2. Course Unite Code: ");scanf("%s",c_reg_courseB);
						gotoxy(20,26);printf("3. Course Unite Code: ");scanf("%s",c_reg_courseC);
						gotoxy(20,27);printf("4. Course Unite Code: ");scanf("%s",c_reg_courseD);
						gotoxy(20,28);printf("5. Course Unite Code: ");scanf("%s",c_reg_courseE);
						fprintf(REPORT5,"%s\t%s\t%s\t18/U/%d\t%d\t%s\t%s,%s,%s,%s_and_%s\n",c_reg_lastName,c_reg_firstName,				    	  c_reg_mobileNumber,registrationNumber,studentNumber,c_reg_course,c_reg_courseA,c_reg_courseB,       			   	 c_reg_courseC,c_reg_courseD,c_reg_courseE);fclose(REPORT5);
					}  else if (courseRegChecker == 6 ){
						gotoxy(20,24);printf("1. Course Unite Code: ");scanf("%s",c_reg_courseA);
						gotoxy(20,25);printf("2. Course Unite Code: ");scanf("%s",c_reg_courseB);
						gotoxy(20,26);printf("3. Course Unite Code: ");scanf("%s",c_reg_courseC);
						gotoxy(20,27);printf("4. Course Unite Code: ");scanf("%s",c_reg_courseD);
						gotoxy(20,28);printf("5. Course Unite Code: ");scanf("%s",c_reg_courseE);
						gotoxy(20,29);printf("6. Course Unite Code: ");scanf("%s",c_reg_courseF);
						fprintf(REPORT5,
						"%s\t%s\t%s\t18/U/%d\t%d\t%s\t%s,%s,%s,%s,%s_and_%s",c_reg_lastName,c_reg_firstName,c_reg_mobileNumber,
						registrationNumber,studentNumber,c_reg_course,c_reg_courseA,c_reg_courseB,c_reg_courseC,
						c_reg_courseD,c_reg_courseE,c_reg_courseF);fclose(REPORT5);
					} else if (courseRegChecker == 7 ) {
						gotoxy(20,24);printf("1. Course Unite Code: ");scanf("%s",c_reg_courseA);
						gotoxy(20,25);printf("2. Course Unite Code: ");scanf("%s",c_reg_courseB);
						gotoxy(20,26);printf("3. Course Unite Code: ");scanf("%s",c_reg_courseC);
						gotoxy(20,27);printf("4. Course Unite Code: ");scanf("%s",c_reg_courseD);
						gotoxy(20,28);printf("5. Course Unite Code: ");scanf("%s",c_reg_courseE);
						gotoxy(20,29);printf("6. Course Unite Code: ");scanf("%s",c_reg_courseF);
						gotoxy(20,30);printf("7. Course Unite Code: ");scanf("%s",c_reg_courseG);
						fprintf(REPORT5,
						"%s\t%s\t%s\t18/U/%d\t%s\t%s\t%s,%s,%s,%s,%s,%s_and_%s\n",
						c_reg_lastName,c_reg_firstName,c_reg_mobileNumber,
						registrationNumber,studentNumber,c_reg_course,c_reg_courseA,c_reg_courseB,c_reg_courseC,
						c_reg_courseD,c_reg_courseE,c_reg_courseF,c_reg_courseF);fclose(REPORT5);
					} else if (courseRegChecker == 8 ){
						gotoxy(20,24);printf("1. Course Unite Code: ");scanf("%s",c_reg_courseA);
						gotoxy(20,25);printf("2. Course Unite Code: ");scanf("%s",c_reg_courseB);
						gotoxy(20,26);printf("3. Course Unite Code: ");scanf("%s",c_reg_courseC);
						gotoxy(20,27);printf("4. Course Unite Code: ");scanf("%s",c_reg_courseD);
						gotoxy(20,28);printf("5. Course Unite Code: ");scanf("%s",c_reg_courseE);
						gotoxy(20,29);printf("6. Course Unite Code: ");scanf("%s",c_reg_courseF);
						gotoxy(20,30);printf("7. Course Unite Code: ");scanf("%s",c_reg_courseG);
						gotoxy(20,31);printf("8. Course Unite Code: ");scanf("%s",c_reg_courseH);
						fprintf(REPORT5,"%s\t%s\t%s\t18/U/%d\t%d\t%s\t%s,%s,%s,%s,%s,%s,%s_and_%s\n",
						c_reg_lastName,c_reg_firstName,c_reg_mobileNumber,
						registrationNumber,studentNumber,c_reg_course,c_reg_courseA,c_reg_courseB,c_reg_courseC,
						c_reg_courseD,c_reg_courseE,c_reg_courseF,c_reg_courseF,c_reg_courseG,c_reg_courseH);fclose(REPORT5);
					} else if (courseRegChecker == 9 ) {
							gotoxy(20,24);printf("1. Course Unite Code: ");scanf("%s",c_reg_courseA);
							gotoxy(20,25);printf("2. Course Unite Code: ");scanf("%s",c_reg_courseB);
							gotoxy(20,26);printf("3. Course Unite Code: ");scanf("%s",c_reg_courseC);
							gotoxy(20,27);printf("4. Course Unite Code: ");scanf("%s",c_reg_courseD);
							gotoxy(20,28);printf("5. Course Unite Code: ");scanf("%s",c_reg_courseE);
							gotoxy(20,29);printf("6. Course Unite Code: ");scanf("%s",c_reg_courseF);
							gotoxy(20,30);printf("7. Course Unite Code: ");scanf("%s",c_reg_courseG);
							gotoxy(20,31);printf("8. Course Unite Code: ");scanf("%s",c_reg_courseH);
							gotoxy(20,32);printf("9. Course Unite Code: ");scanf("%s",c_reg_courseI);
							fprintf(REPORT5,
							"%s\t%s\t%s\t18/U/%d\t%d\t%s\t%s,%s,%s,%s,%s,%s,%s,%s_and_%s\n",
							c_reg_lastName,c_reg_firstName,c_reg_mobileNumber,
							registrationNumber,studentNumber,c_reg_course,c_reg_courseA,c_reg_courseB,c_reg_courseC,
							c_reg_courseD,c_reg_courseE,c_reg_courseF,c_reg_courseF,c_reg_courseG,c_reg_courseH,c_reg_courseI);
							fclose(REPORT5);
						} else {
								gotoxy(20,24);printf("1. Course Unite Code: ");scanf("%s",c_reg_courseA);
								gotoxy(20,25);printf("2. Course Unite Code: ");scanf("%s",c_reg_courseB);
								gotoxy(20,26);printf("3. Course Unite Code: ");scanf("%s",c_reg_courseC);
								gotoxy(20,27);printf("4. Course Unite Code: ");scanf("%s",c_reg_courseD);
								gotoxy(20,28);printf("5. Course Unite Code: ");scanf("%s",c_reg_courseE);
								gotoxy(20,29);printf("6. Course Unite Code: ");scanf("%s",c_reg_courseF);
								gotoxy(20,30);printf("7. Course Unite Code: ");scanf("%s",c_reg_courseG);
								gotoxy(20,31);printf("8. Course Unite Code: ");scanf("%s",c_reg_courseH);
								gotoxy(20,32);printf("9. Course Unite Code: ");scanf("%s",c_reg_courseI);
								gotoxy(20,33);printf("10. Course Unite Code: ");scanf("%s",c_reg_courseJ);
								fprintf(REPORT5,"%s\t%s\t%s\t18/U/%d\t%d\t%s\t%s,%s,%s,%s,%s,%s,%s,%s,%s_and_%s\n",
								c_reg_lastName,c_reg_firstName,c_reg_mobileNumber,registrationNumber,
								studentNumber,c_reg_course,c_reg_courseA,c_reg_courseB,c_reg_courseC,
								c_reg_courseD,c_reg_courseE,c_reg_courseF,c_reg_courseF,c_reg_courseG,
								c_reg_courseH,c_reg_courseI,c_reg_courseJ);
								fclose(REPORT5);
							}
		system("cls");addmittedStudentBoxWindow();
		gotoxy(50,1);printf("INFO: Thank you, You are fully registered. You can attend lectures now");
		gotoxy(40,25);printf("Enter 1 to return to Main Menu  or Any Other Digit to Stop: ");//scanf("%d",&ojok);
		switch (getch()){
		case '1':system("cls");admittedStudentMenu();
		default:system("cls");return (0);
		return (0);
		}
	}
	
return 0;
}
void studentApplicationReport(){
	char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20],i[20],j[20],k[20],l[20],m[20],n[20],o[20],p[20],q[20],r[20],s[20],t[20],u[20],v[20];
	char applicants[100000];
	boxWindow();
	int avCounter = 0;
	gotoxy(65,10);printf("APPLICANTS LIST");
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
	gotoxy(20+ avCounter,23+ avCounter);printf("1. Return to student main menu\n");
	gotoxy(90+ avCounter,23+ avCounter);printf("2. View Courses");
	gotoxy(20+ avCounter,24+ avCounter);printf("3. View Admission List\n");
	gotoxy(90+ avCounter,24+ avCounter);printf("4. Quite");
    gotoxy(20 + avCounter,25 + avCounter);
    switch (getch()){
     case '1':system("cls");stud_main();
     case '2':system("cls");displayCourse2018_2019();
     case '3':system("cls");admissionList();
     default:system("cls");return (0);
    
    }
} }
