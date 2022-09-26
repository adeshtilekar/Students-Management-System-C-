#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main ()
{
	char add[50],name[52],mob[11],sname[52];
	int a,n,id,sid,stud,save,choice;

system("cls");
char d[25]="Password Protected ";pratik;

char ch,pass[20],password[20]="adesh";
int i=0,j;


for(j=0;j<20;j++)
{
Sleep(50);
printf("\5");
}
for(j=0;j<20;j++)
{
Sleep(50);
printf("%c",d[j]);
}
for(j=0;j<20;j++)
{
Sleep(50);
printf("\5");

}

printf("\nEnter Password:\n");

while(ch!=13)
{
ch=getch();

if(ch!=13 && ch!=8){
putch('*');
pass[i] = ch;
i++;
}
}
pass[i] = '\0';
if(strcmp(pass,password)==0)
{



printf("Password match\n");

printf("Press any key to countinue.....");
getch();
system("cls");
while(1)
	 {
	 
	system("color 4");
	
	 printf("1. Add menu \n");
	 	 printf("2. View list \n");
	 	 	 printf("3. Search student \n");
	 	 	 	 printf("4. Delete \n");
	 	 	 	 	 printf("5. Exit \n");
	 	 	 	 	printf("plese choose any number \n"); 
	 	 	 	 scanf("%d",&n);
					system("cls");		
        switch(n)
    {
    	
    	
    	case 1:
    		
    		{ 
			FILE *ptr;
    		 ptr=fopen("stud.dat","a+");
    			
    			system("cls");
    		
    		 
    		
    			printf("\t\t\t\t WELCOME \n  ");
    			
    			printf("\t\t plese enter id --> \t\t");
    			scanf("%d",&id);
    			
    			printf("\t\t plese enter name -->\t\t");
    			scanf("%s",&name);
    			
    			printf("\t\t plese enter mobile no -->\t");
    			scanf("%s",&mob);
    			
    			printf("\t\t plese enter address -->\t");
    			scanf("%s",&add);
    			
    			fprintf(ptr,"%d \t %s \t %s \t %s \n",id,name,mob,add);
    			
				fclose(ptr);
    			system("cls");
    			printf("\n\n");
    			printf("\t\t\tsave record successfully \n\n\n");
    			
    				printf("enter main menu any key \n");
    			scanf("%e",&save);
    			system("cls");
    			break;
			}
			case 2:
    		
    		{
    			FILE *view;
    			view=fopen("stud.dat","r");
    		int a=0;
    		printf("\n \t\t VIEW DETAILS \n\n\n");
    		
    		printf("\n ID \t NAME \t\t MOB \t\t ADDRESS");
    		
    		while(fscanf(view,"%d %s %s %s",&id,&name,&mob,&add)>=a)
    		{
    			printf("\n %d \t %s \t %s \t%s",id,name,mob,add);
			}
    		fclose(view);	
    		
    				printf("\n\n\n Enter main menu any key pree \n");
    			scanf("%e");
    		
    			system("cls");
    			break;
    		
    				
			}
				case 3:	
				
				{
				
				FILE *ser;
               ser=fopen("stud.dat","r");
                printf("Do you want to check by\n1.ID\n2.Name\nEnter your choice:");
             scanf("%d",&choice);
             if (choice==1)
               {   
			   printf("Enter the  ID :");
                 scanf("%d",&sid);

                while (fscanf(ser,"%d %s %s %s  ",&id,name, mob, add) !=EOF)
                 {
                   if(id==sid)
                  {   
			      system("cls");
                
		        	printf("\n   %d \t %s \t %s  \t%s  ",id,name,mob,add);  
			
			      
                   	printf("\n");
					printf("Press 1 Goto Main Menu... \n");
					
					scanf("%d",&save);
					
					system("cls");
                    
	               }
                  }
              	}
    
      else if (choice==2)
      {   printf("Enter the  name:");
        scanf("%s",&sname);

        while (fscanf(ser,"%d %s %s %s  ",&id,&name, mob, add) !=EOF)
        {
            if(name,sname)
            {   
			system("cls");
                
			printf("\n   %d \t %s \t %s  \t%s  ",id,name,mob,add);  
			
			      
        	printf("\n");
					printf("Press 1 Goto Main Menu... \n");
					
					scanf("%d",&save);
					
					system("cls");
      fclose(ser);
	   }
      }
	}

else
     
     {
     	
     	printf("\n\n Warning!! Incorrect Choice");

			printf(" \n\n Please press 'Enetr' key....\n");
			getch();
			main();
			
	 }
     
				}
					case 4:
					{
							
						
						   FILE *old,*newrec;
                           
                           old=fopen("stud.dat","r");
                            newrec=fopen("new.dat","w");
                           printf("Enter the id. of the customer you want to delete:");
                           scanf("%d",&sid);
                            while (fscanf(old,"%d %s %s %s ",&id,&name,&add,&mob)!=EOF)
                          {
                            if(id!=sid)
                                fprintf(newrec,"%d %s %s %s \n",id,name,add,mob);

                 else
                  { 
                        printf("\nRecord deleted successfully!\n");
                        getch();
                  }
                   }
                     fclose(old);
                     fclose(newrec);
                      remove("stud.dat");
                     rename("new.dat","stud.dat");
                   
    
                     system("cls");
					   break;
						
					}
				case 5:
					{
						printf("\n\n      Thank you......\n\n");
						exit(0);
					}
						
						
					
					
			default :
			
				printf("wrong inout\n");

	}
 }

}
else
{

printf("\n\aWarning!! Incorrect Password");

printf("\n plese enter valid password any key press to login \n");
printf("\n   \n");
getch();
main();

	

 }
 }
 

