#ifndef PROGRAM_BRAIN_H_INCLUDED
#define PROGRAM_BRAIN_H_INCLUDED



#endif // PROGRAM_BRAIN_H_INCLUDED

FILE *SORTED_APP_LIST;

struct student{
          int UACEPoints;
          char lastName[20];
          char firstName[20];
          char course[10];
          char sschool[30];
          char gender[10];
          char collage[20];
          char school[20];
};


void processAdmission(){
	char buffer[100];
	struct student s[200],temp;int i = 0,j,n=-1;
	APPLICATIONS3 = fopen("report3.txt","r")
	;i=0;
	for (;!feof(APPLICATIONS3);){
		n++;
		fgets(buffer,1000,APPLICATIONS3);
	}
	printf("%d\n",n);
	fclose(APPLICATIONS3);
	APPLICATIONS3 = fopen("report3.txt","r");
	for (;(!feof(APPLICATIONS3));){
		
		fgets(buffer,100,APPLICATIONS3);
		sscanf(buffer, "%d%s%s%s%s%s%s",&s[i].UACEPoints,s[i].lastName,s[i].firstName,
		s[i].course,s[i].gender,s[i].collage,s[i].sschool);
		gotoxy(4,14 + i);//puts(buffer);
	//printf("%d\t%s\t%s\t%s\t%s\t%s\t%s",s[i].UACEPoints,s[i].lastName,s[i].firstName,
		//s[i].course,s[i].gender,s[i].collage,s[i].sschool);
		i++;
	}
	fclose(APPLICATIONS3);
          for(i=0;i<=n-1;i++)
          {for(j=0;j<=n-1;j++)
            {if(s[j].UACEPoints<s[j+1].UACEPoints)
                {temp=s[j];s[j]=s[j+1];s[j+1]=temp;}}
          }
          //printf("\nThe Merit List is :\n");
	SORTED_APP_LIST = fopen("SORTED_APP_LIST.txt","w");
	for(j=0;j<n+1;j++){
		fprintf(SORTED_APP_LIST, "%d\t%s\t%s\t%s\t%s\t%s\t%s\n",s[j].UACEPoints,s[j].lastName,s[j].firstName,
		s[j].course,s[j].gender,s[j].collage,s[j].sschool);
		//printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\n",s[j].UACEPoints,s[j].lastName,s[j].firstName,
		//s[j].course,s[j].gender,s[j].collage,s[j].sschool);
	}
	fclose(SORTED_APP_LIST);
}
