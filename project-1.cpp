#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct train                          /*Structure defination*/
	{
		char tn[20];
		char tt[20];
		int tnum;
		char to[20];
		char td[20];	
	};	
void read(void);                       /*functions prototype*/
void sort(void);
void search(void);
void print(void);
void Namewise();
void Typewise();
void Numberwise();
void Orginwise();
void Destinationwise();
void Namewise1();
void Typewise1();
void Numberwise1();
void Orginwise1();
void Destinationwise1();
                                                //global variables
char a,tname[10],ttype[10],torigin[10],tdes[10],str[20][50],temp[200];
int ch,i,tnumber,j,c=0,tns,y;
struct train *t,*ptr;                          //pointer to a structure
                                                 //main starts here
int main()
{
	printf("\n Enter the number of trains :");//reading number of trains dynamically
	scanf("%d",&tns);
	t=(struct train *) malloc(tns*sizeof(struct train));// Dynamic memory allocation
    ptr=t;
	                                                // MAIN-MENU repetation
	do
	{
	printf("\n***MAIN-MENU:*** \n Press '1' to Read input \n Press '2' to Sort trains \n Press '3' to Search for the train \n Press '4' to PrintDetails \n");		
	printf("\n Enter option:");
	scanf("%d",&ch);
                                                      //switch case 
	switch(ch)
	{
		case 1: read();//function call
		break;
		case 2: sort();//function call
		break;
		case 3:search();//function call
		break;
		case 4:print();//function call
		break;
		default:printf("\n Sorry you entered wrong option , try again");
	}
	printf("\n Enter y or Y to repeat MAIN-MENU \n Enter n or N  to exit from MAIN-MENU:");
	scanf(" %c",&a);
     }
	while(a=='y'||a=='Y');
	return 0;
}
//Function definitions
void read(void)
	{	
	printf("\n Enter details of train's':");
	for(i=0;i<tns;i++)
	{
		printf("\n Enter details of train' %d ':",i+1);
		printf("\n Enter TrainName:");
		scanf("%s",t->tn);
		printf("\n Enter TrainType:");
		scanf("%s",t->tt);
		printf("\n Enter TrainNumber:");
		scanf("%d",&t->tnum);
		printf("\n Enter TrainOrgin:");
		scanf("%s",t->to);
		printf("\n Enter TrainDestination:");
		scanf("%s",t->td);
		t++;
	}
	}
void sort()
{
	  
	// SUB-MENU repetation  
	do
	{
	printf("\n SUB-MENU FOR SORTING: \n press 1. to sort NAMEWISE \n press 2. to sort TYPEWISE \n press 3. to sort Numberwise \n press 4.to sort Orginwise \n press 5. to sort Destinationwise\n");
	scanf("%d",&ch);
		switch(ch) //switch case 
	{
		case 1: Namewise();//function call
		break;
		case 2: Typewise();//function call
		break;
		case 3:Numberwise();//function call
		break;
		case 4:Orginwise();//function call
		break;
        case 5:Destinationwise();//function call
		break;
		default:printf("\n sorry you entered wrong option , try again");
	}
		printf("\n enter y or Y to continue sort operation again \n enter n or N  to go to main menu");
	scanf(" %c",&a);
	if(a=='n'||a=='N')
	return;
     }
	while(a=='y'||a=='Y');
	}
void search()
{
	// SUB-MENU repetation 
	do
	{
	printf("\n  SUB-MENU FOR SEARCHING: \n 1. NAMEWISE \n 2. TYPEWISE \n 3. Numberwise \n 4. Orginwise \n. 5. Destinationwise\n");
	scanf("%d",&ch);
	//switch case 
	switch(ch)
	{
		case 1: Namewise1();//function call
		break;
		case 2: Typewise1();//function call
		break;
		case 3:Numberwise1();//function call
		break;
		case 4:Orginwise1();//function call
		break;
        case 5:Destinationwise1();//function call
		break;
		default:printf("\n sorry you entered wrong option , try again");
	}
		printf("\n enter y or Y to continue search operation again ,enter n or N  to go to main menu");
	scanf(" %c",&a);
	if(a=='n'||a=='N')
	return;
     }	while(a=='y'||a=='Y');
	}
	// FunctSion definations to sort train details
	// function defination to sort train names
	void Namewise()
{
	t=ptr;
	for(i=0;i<tns;i++)
	{ 	 
	strcpy(str[i],t->tn);
	t++;
}
	 for(i=0;i<tns;i++)
	 {
	 for(j=i+1;j<tns;j++)
	 {
	 y=strcmp(str[i],str[j]);
	 if(y>0)
	 {
	  strcpy(temp,str[i]); 
	  strcpy(str[i],str[j]); 
	  strcpy(str[j],temp);
}
}
}
	   printf("\n Sorted trainnames :");
	    for(i=0;i<tns;i++)
		puts(str[i]);	
	}
	// function defination to sort train types
	void Typewise()
{
	t=ptr;
	for(i=0;i<tns;i++)
	{ 	 
	  strcpy(str[i],t->tt);
	  t++;
    }
	 for(i=0;i<tns;i++)
	 {
	 for(j=i+1;j<tns;j++)
	 {
	 y=strcmp(str[i],str[j]);
	 if(y>0)
	 {
	  strcpy(temp,str[i]); 
	  strcpy(str[i],str[j]); 
	  strcpy(str[j],temp);
}
}

	   printf("\n Sorted traintypes:");
	    for(i=0;i<tns;i++)
		puts(str[i]);
	}
}
	// function defination to sort train numbers
	void Numberwise()
{
	t=ptr;
		int tempnum, number[i];
		for(i=0;i<tns;i++)
		{
	  number[i]=t->tnum;
	t++;
}
	for(i=0;i<tns;i++)
	{
		for(j=i+1;j<tns;j++)
		{
			if(number[i]>number[j])
			{
				tempnum=number[i];
				number[i]=number[j];
				number[j]=tempnum;
			}
		}
	}
	printf("\n sorted train numbers:");
	for(i=0;i<tns;i++)
	{
		printf("\n %d",number[i]);
	}
}
// Function defination to sort trains origin
	void Orginwise()
{
	t=ptr;
	for(i=0;i<tns;i++)
	{ 	 
	strcpy(str[i],t->to);
	 t++;
}
	

 for(i=0;i<tns;i++)
	 {
	 for(j=i+1;j<tns;j++)
	 {
	 y=strcmp(str[i],str[j]);
	 if(y>0)
	 {
	  strcpy(temp,str[i]); 
	  strcpy(str[i],str[j]); 
	  strcpy(str[j],temp);
}
}
}
		printf("\n Sorted train origins:");
	    for(i=0;i<tns;i++)
		puts(str[i]);
	}	
	

// function defination to sort trains destinations 
	void Destinationwise()
{
	t=ptr;
	for(i=0;i<tns;i++)
	{	   	 
	strcpy(str[i],t->td);
	 t++;
}
	 for(i=0;i<tns;i++)
	 {
	 for(j=i+1;j<tns;j++)
	 {
	 y=strcmp(str[i],str[j]);
	 if(y>0)
	 {
	  strcpy(temp,str[i]); 
	  strcpy(str[i],str[j]); 
	  strcpy(str[j],temp);
}
}
}
	   printf("\n Sorted train destinations:");
	    for(i=0;i<tns;i++)
		puts(str[i]);
	}	
	//function defination to search trains details
	// function defination to search train names
	void Namewise1()
{
	t=ptr;
	printf("\n Enter train name:");
	scanf("%s",tname);
		for(i=0;i<tns;i++)
	{
		char x=strcmp(tname,t->tn);
		if(x==0)
		{
		  	printf("\n The details of train %d like name,type,number,origin,destination:\n",i+1);
		printf("Name: %s\n",t->tn);
		printf("Type: %s\n",t->tt);
		printf("Number: %d\n",t->tnum);
		printf("Orgin: %s\n",t->to);
		printf("Destination: %s\n",t->td);
		c++;
		}
		t++;
	}
		if(c==0)
				{
			printf("\n sorry you entered name is not their please try again");
		}
	}
	// function defination to search train names
	void Typewise1()
{
		t=ptr;
	printf("\n Enter train type:");
	scanf("%s",ttype);
	for(i=0;i<tns;i++)
	{
		char x=strcmp(ttype,t->tt);
		if(x==0)
		{
			printf("\n The details of train %d like name,type,number,origin,destination:\n",i+1);
		printf("Name: %s\n",t->tn);
		printf("Type: %s\n",t->tt);
		printf("Number: %d\n",t->tnum);
		printf("Orgin: %s\n",t->to);
		printf("Destination: %s\n",t->td);
        c++;
		}
		t++;
	}
	if(c==0)
		{
			printf("\n sorry you entered train type is not their please try again");
		}

	}
	// function defination to search train number
	void Numberwise1()
{
	t=ptr;
	printf("\n Enter train number:");
	scanf("%d",&tnumber);
     for(i=0;i<tns;i++)
	{
		if(tnumber==t->tnum)
		{
			printf("\n The details of train %d like name,type,number,origin,destination:\n",i+1);
		printf("Name: %s\n",t->tn);
		printf("Type: %s\n",t->tt);
		printf("Number: %d\n",t->tnum);
		printf("Orgin: %s\n",t->to);
		printf("Destination: %s\n",t->td);
	   c++;
		}
		t++;
	}
	if(c==0)
		{
			printf("\n sorry you entered train number is not their please try again");
		}
	}
	// function defination to search trains origin
	void Orginwise1()
{
	t=ptr;
	printf("\n  Enter origin of train:");
	scanf("%s",torigin);
	for(i=0;i<tns;i++)
	{
		char x=strcmp(torigin,t->to);
		if(x==0)
		{
		    printf("\n The details of train %d like name,type,number,origin,destination:\n",i+1);
		printf("Name: %s\n",t->tn);
		printf("Type: %s\n",t->tt);
		printf("Number: %d\n",t->tnum);
		printf("Orgin: %s\n",t->to);
		printf("Destination: %s\n",t->td);
		c++;	
		}
		t++;
	}
	if(c==0)
		{
			printf("\n sorry you entered train origin is not their please try again");
		}	   
}

// function defination to search train destinations
	void Destinationwise1()
{
	t=ptr;
	printf("\n Enter destination of train:");
	scanf("%s",tdes);
	for(i=0;i<tns;i++)
	{
		char x=strcmp(tdes,t->td);
		if(x==0)
		{
		    printf("\n The details of train %d like name,type,number,origin,destination:\n",i+1);
		printf("Name: %s\n",t->tn);
		printf("Type: %s\n",t->tt);
		printf("Number: %d\n",t->tnum);
		printf("Orgin: %s\n",t->to);
		printf("Destination: %s\n",t->td);
	     c++;	
		}
		t++;
	}
		if(c==0)
		{
			printf("\n sorry you entered train destination is not their please try again");
		}
	}
	// function defination to print trains details
void print()
{
	
printf("\n The details of trains like trainname,type,number,origin,destination:");
	t=ptr;
	for(i=0;i<tns;i++)
	{
		printf("\n The details of train %d like name,type,number,origin,destination:\n",i+1);
		printf("Name: %s\n",t->tn);
		printf("Type: %s\n",t->tt);
		printf("Number: %d\n",t->tnum);
		printf("Orgin: %s\n",t->to);
		printf("Destination: %s\n",t->td);
		t++;
    }
}



