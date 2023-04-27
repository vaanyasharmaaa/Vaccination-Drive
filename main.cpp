// VACCINE REGISTRATION SYSTEM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Function To Make Heading of output
void heading()
{
	printf("\t\t\t\t*Covid Vaccination Registration*\n");
	printf("\t\t\t*Take Vaccine At The Right Time To Fight Against Corona*\n\n");
}

// Defining Structure

typedef struct mynode 
{
	char name[20];
	char gen[6];
	char age[2];
	char idtype[40];
	char id[20];
	char mob[20];
	char comor[3];
	char vaccineDose[5];
	char vaccineName[20];
	struct mynode* link;
} Node;

Node* start = NULL;

// Global Variables
int n;
char state[30], dis[20], hos[40], date[12], hour[6];

// Declaring Function Used In This Program
void heading();
void details();
void venue();
void receipt();

void addnode(char a[20], char b[6], char c[40], char d[20], char e[20], char f[3], char g[2] , char h[5], char V[20])
{
	Node *newptr = NULL, *ptr;
	newptr = (Node*)malloc(sizeof(Node));
	strcpy(newptr->name, a);
	strcpy(newptr->gen, b);
	strcpy(newptr->idtype, c);
	strcpy(newptr->id, d);
	strcpy(newptr->mob, e);
	strcpy(newptr->comor, f);
	strcpy(newptr->age, g);
	strcpy(newptr->vaccineDose, h);
	strcpy(newptr->vaccineName, V);
	
	newptr->link = NULL;
	if (start == NULL)
	{
		start = newptr;
	}
	else 
	{
		ptr = start;
		while (ptr->link != NULL)
			ptr = ptr->link;
		ptr->link = newptr;
	}
}
// Driver Code
void main()
{
	details();
	venue();
	receipt();
    getch();
	scanf("%d");
}

// Function To Take Candidate Numbers & Details
void details()
{
	int i;
	char a[20], b[6], c[40], d[20], e[20], f[3], g[2], h[5], V[20];

// a is used here to input "NAME"
// b is used to input gender
// c inputs the ID_type such as aadhar, pan card, passport etc.
// d inputs the IDnumber of the above said ID
// e inputs mobile number
// f inputs co-morbidity status
// Vac inputs the dose of vaccine 
// V stores the information of the name of the vaccines


	heading();
	// for printing the beginning of the output
	printf("\t\t\t\tEnter Candidate Number (Max 4 People): ");
	scanf("%d", &n);
	// taking input of maximum 4 people at a time

    char qwe[1];
    gets(qwe);
	// the above variable was declared as gets() wasn't working after scanf because
	// scanf leaves a newline in buffer


	// Taking Candidate Details
	for (i = 1; i <= n; i++) {
		// For Clear Screen
		system("cls");

		heading();
		printf("Enter the name candidate %d: ",i);
		gets(a);
		
		printf("Enter the Gender of Candidate %d: ",i);
		gets(b);

		printf("enter age of the candidate %d: ",i);
		gets(g);

		printf("Enter the Id-Type of Candidate %d: ",i);
		gets(c);
		
		printf("Enter the Id-Number of Candidate %d: ",i);
		gets(d);
		
		printf("Enter the Mobile Number of Candidate %d: ",i);
		gets(e);
		
		printf("Enter the Co-Morbidity Status of Candidate %d (Yes or No): ",i);
		gets(f);

		printf("Enter the dose to be vaccine given to Candidate %d (1st or 2nd) : ",i);
		
		int Vac;
		scanf("%d",&Vac);
		//int input here since only possible input for Vac is 1 or 2  
	
		if (Vac==1)
		// Vac=1 means the candidate registers for taking vaccine the first time
		{
			printf("Enter the vaccine you would like to get : \n");
			printf("1. CoviShield\n");
			printf("2. Covaxin\n");
			printf("3. Sputnik\n");
			// giving 3 options to choose from for vaccine
			strcpy(h,"1st");
			
			int a;
			scanf("%d",&a);

			char qwerT[1];
		    gets(qwerT);
			// the same function as above

			if(a==1)
			{
					strcpy(V,"Covishield");
			}
			
			else if(a==2)
			{
					strcpy(V,"Covaxin");
			}
			
			else if(a==3)
			{
					strcpy(V,"Sputnik");
			}
			else 
			{
				printf("enter a valid option");
			}
		}

		else if(Vac==2)
		// condition when the person has taken the first dose of vaccine
		{
			printf("enter the vaccine you had in first dose");
			scanf("%s",V);
			strcpy(h,"2nd");
		}
		
		else 
		{
			printf("enter a valid option");
			getch();
		}
		
	// Calling Function addnode() to store all the input data
		addnode(a, b, c, d, e, f, g, h, V);
	}
}

// Function To Take Date & Time Details
void venue()
{
	int i, x = 0,state_no=0;

	// For Clear Screen
	system("cls");

	heading();

	// for the selection of state
	printf("\t\t\t\tselect State: (enter serial number)\n");
	printf("1. Andhra Pradesh\n");
	printf("2. Arunachal Pradesh\n");
	printf("3. Assam\n");
	printf("4. Bihar\n");
	printf("5. Chattisgarh\n");
	printf("6. Goa\n");
	printf("7. Gujarat\n");
	printf("8. Haryana\n");
	printf("9. Himachal Pradesh\n");
	printf("10. Jharkhand\n");
	printf("11. Karnataka\n");
	printf("12. Kerala\n");
	printf("13. Madhya Pradesh\n");
	printf("14. Maharashtra\n");
	printf("15. Manipur\n");
	printf("16. Meghalaya\n");
	printf("17. Mizoram\n");
	printf("18. Nagaland\n");
	printf("19. Odisha\n");
	printf("20. Punjab\n");
	printf("21. Rajasthan\n");
	printf("22. Sikkim\n");
	printf("23. Tamil Nadu\n");
	printf("24. Telangana\n");
	printf("25. Tripura\n");
	printf("26. Uttar Pradesh\n");
	printf("27. Uttarakhand\n");
	printf("28. West bangal\n");
	scanf("%d",&state_no);
	
	if (state_no==1)
	{
		strcpy(state,"Andra Pradesh");
		// state[]={"Andhra Pradesh"};
	}
	else if (state_no==2)
	{
		strcpy(state,"Arunachal Pradesh");
		//char state[]="Arunachal Pradesh";
	}
	else if (state_no==3)
	{
		strcpy(state,"Assam");
		//char state[]="Assam";
	}
	else if (state_no==4)
	{
		strcpy(state,"Bihar");
		//char state[]="Bihar";
	}
	else if (state_no==5)
	{
		strcpy(state,"Chattisgarh");
		//char state[]="Chattisgarh";
	}
	else if (state_no==6)
	{
		strcpy(state,"Goa");
		//char state[]="Goa";
	}
	else if (state_no==7)
	{
		strcpy(state,"Gujarat");
		//char state[]="Gujarat";
	}
	else if (state_no==8)
	{
		strcpy(state,"Harayana");
		//char state[]="Haryana";
	}
	else if (state_no==9)
	{
		strcpy(state,"Himachal pradesh");
		//char state[]="Himachal Pradesh";
	}
	else if (state_no==10)
	{
		strcpy(state,"Jharkhand");
		//char state[]="Jharkhand";
	}
	else if (state_no==11)
	{
		strcpy(state,"Karnataka");
		//char state[]="Karnataka";
	}
	else if (state_no==12)
	{
		strcpy(state,"Kerala");
		//char state[]="Kerala";
	}
	else if (state_no==13)
	{
		strcpy(state,"Madhya Pradesh");
		//char state[]="Madhya Pradesh";
	}
	else if (state_no==14)
	{
		strcpy(state,"Maharashta");
		//char state[]="Maharashtra";
	}
	else if (state_no==15)
	{
		strcpy(state,"Manipur");
		//char state[]="Manipur";
	}
	else if (state_no==16)
	{
		strcpy(state,"Meghalaya");
		//char state[]="Meghalaya";
	}
	else if (state_no==17)
	{
		strcpy(state,"Mizoram");
		//char state[]="Mizoram";
	}
	else if (state_no==18)
	{
		strcpy(state,"Nagaland");
		//char state[]="Nagaland";
	}
	else if (state_no==19)
	{
		strcpy(state,"Odisha");
		//char state[]="Odisha";
	}
	else if (state_no==20)
	{
		strcpy(state,"Punjab");
		//char state[]="Punjab";
	}
	else if (state_no==21)
	{
		strcpy(state,"Rajasthan");
		//char state[]="Rajasthan";
	}
	else if (state_no==22)
	{
		strcpy(state,"Sikkim");
		//char state[]="Sikkim";
	}
	else if (state_no==23)
	{
		strcpy(state,"Tamil Nadu");
		//char state[]="Tamil Nadu";
	}
	else if (state_no==24)
	{
		strcpy(state,"Telangana");
		//char state[]="Telangana";
	}
	else if (state_no==25)
	{
		strcpy(state,"Tripura");
		//char state[]="Tripura";
	}
	else if (state_no==26)
	{
		strcpy(state,"Uttar Pradesh");
		// char state[]="Uttar Pradesh";
	}
	else if (state_no==27)
	{
		strcpy(state,"Uttarakhand");
		//char state[]="Uttarakhand";
	}
	else if (state_no==28)
	{
		strcpy(state,"West bengal");
		//char state[]="West Bengal";
	}
    char qwer[1];
    gets(qwer);
			
	// gets(state);
	printf("Enter District: ");
	gets(dis);

	printf("Enter Date (DD-MM-YYYY): ");
	gets(date);

	printf("Select an Appropriate Time Slot:\n");
	printf("10:00 - 11:00 am\n");
	printf("11:00 - 12:00 noon\n");
	printf("12:00 - 01:00 pm\n");
	printf("01:00 - 02:00 pm\n");
	printf("02:00 - 03:00 pm\n");
	printf("03:00 - 04:00 pm\n");
	gets(hour);

	// For Clear Screen
	system("cls");

	// Calling Heading() Function
	heading();

	
	// List Of Hospitals Available
	printf("1. Apollo Hospital  \n");
	printf("2. fortis Hospital\n");
	printf("3. max Hospital\n");
	printf("4. BLK Hospital\n");
	printf("5. RML Hospital\n");
	printf("6. DHLI Hospital\n");
	printf("7. Ambedkar Hospital\n");
	printf("8. Zydus Hospital\n");
	printf("9. City Hospital\n");
	printf("10. State Hospital\n");

	// Taking Hospital Choice

	do {
		printf("Enter Choice: ");
		scanf("%d", &i);
		if (i == 1)
		{
			strcpy(hos, "Apollo Hospital ");
		}
		else if (i == 2)
		{
			strcpy(hos, "fortis Hospital ");
		}
		else if (i == 3)
		{
			strcpy(hos, "max Hospital ");
		}
		else if (i == 4)
		{
			strcpy(hos, "BLK Hospital ");
		}
		else if (i == 5)
		{
			strcpy(hos, "RML Hospital ");
		}
		else if (i == 6)
		{
			strcpy(hos, "DHLI Hospital ");
		}
		else if (i == 7)
		{
			strcpy(hos, "Ambedkar Hospital ");
		}
		else if (i == 8)
		{
			strcpy(hos, "Zydus Hospital ");
		}
		else if (i == 9)
		{
			strcpy(hos, "City Hospital ");
		}
		else if (i == 10)
		{
			strcpy(hos, "State Hospital ");
		}
		else 
		{
			printf("Enter Correct Choice...");
			x = 1;
		}
	}
	 while (x);
}

// Function To Print Receipt
void receipt()
{
	int i;
	Node* ptr = start;

	// For Clear Screen
	system("cls");
	heading();
	printf("\n\t\t\t\t**Take Screenshot For Further Use**\n");

char NameToBePutInDatabase[30];
char AgeToBePutInDatabase[2];
char GenToBePutInDatabase[6];
char idTypeToBePutInDatabase[40];
char idToBePutInDatabase[20];
char mobToBePutInDatabase[20];
char comorToBePutInDatabase[3];
char VaccineDoseToBePutInDatabase[2];
char VaccineNameToBePutInDatabase[10];
	// all these string send data to database file
	
	// Printing Candidate All Details
	for (i = 1; i <= n; i++) 
	{
		
		printf("\t\t\t\tCandidate %d Name: ", i);
		puts(ptr->name);
        strcpy(NameToBePutInDatabase,ptr->name);
		
		printf("\t\t\t\tCandidate %d age: ", i);
		puts(ptr->age);
        strcpy(AgeToBePutInDatabase,ptr->age);

        printf("\t\t\t\tCandidate %d Gender: ", i);
		puts(ptr->gen);
        strcpy(GenToBePutInDatabase,ptr->gen);

		printf("\t\t\t\tCandidate %d Id-type: ", i);
		puts(ptr->idtype);
        strcpy(idTypeToBePutInDatabase,ptr->idtype);

		printf("\t\t\t\tCandidate %d Id Number: ", i);
		puts(ptr->id);
		strcpy(idToBePutInDatabase,ptr->id);
        
        printf("\t\t\t\tCandidate %d Mobile Number: ", i);
		puts(ptr->mob);
		strcpy(mobToBePutInDatabase,ptr->mob);

        printf("\t\t\t\tCandidate %d Co-Morbidity Status: ",i);
		puts(ptr->comor);
        strcpy(comorToBePutInDatabase,ptr->comor);

		printf("\n");

		printf("\t\t\t\tVaccine dose: ");
		puts(ptr->vaccineDose);
        strcpy(VaccineDoseToBePutInDatabase,ptr->vaccineDose);

		printf("\t\t\t\tVaccine Name : ");
		puts(ptr->vaccineName);
        strcpy(VaccineNameToBePutInDatabase,ptr->vaccineName);

		printf("\n");
		// printf("%s",VaccineToBePutInDatabase);
		ptr = ptr->link;
	}

	printf("\t\t\t\tState: ");
	puts(state);
	    
    printf("\t\t\t\tDistrict: ");
	puts(dis);
	
	printf("\t\t\t\tDate of Birth: ");
	puts(date);
	
	printf("\t\t\t\tTime: ");
	puts(hour);
	
	printf("\t\t\t\tChosen Hospital: ");
	strcat(hos, state);
	puts(hos);
	
	
	printf("\n\n\t\t\t\t**Thank You For registration**");

FILE *filePointer ;
    filePointer = fopen("database.txt", "a+") ;

			fputs(VaccineNameToBePutInDatabase, filePointer);
			fputs("  ", filePointer) ;
            
			fputs(VaccineDoseToBePutInDatabase, filePointer);
            fputs("  ", filePointer) ;

            fputs(NameToBePutInDatabase,  filePointer);
            fputs("  ", filePointer) ;
    		
			fputs(AgeToBePutInDatabase, filePointer);
			fputs("  ", filePointer);

            fputs(GenToBePutInDatabase, filePointer) ;
            fputs("  ", filePointer) ;

            fputs(idTypeToBePutInDatabase, filePointer) ;
            fputs("  ", filePointer) ;
            
			fputs(idToBePutInDatabase, filePointer) ;
            fputs("  ", filePointer) ;
            
			fputs(mobToBePutInDatabase, filePointer) ;
            fputs("  ", filePointer) ;
            
			fputs(comorToBePutInDatabase, filePointer) ;
            fputs("  ", filePointer) ;
            
			fputs(state, filePointer) ;
            fputs("  ", filePointer) ;
            
			fputs(dis, filePointer) ;
            fputs("  ", filePointer) ;
            
			fputs(date, filePointer) ;
            fputs("  ", filePointer) ;
            
			fputs(hour, filePointer) ;
            fputs("  ", filePointer) ;
            
			fputs(hos, filePointer) ;
            fputs("  ", filePointer) ;
            
            
            fputs("\n", filePointer) ;

            fclose(filePointer) ;

}
