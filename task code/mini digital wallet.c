#include <stdio.h>
void main()
{

    int choice;
    char ch;//y Y
   
   

    printf("Menu:\n1. Check Balance\n2. Add Money\n3. Spend Money\n4. Exit\n");
    do{
         
         printf("Enter your choice : ");//1
     scanf("%d", &choice); // 1

            switch (choice)
            {
                case 1:
                    printf("%d", 200);
                    break;
            
                case 2:
                    printf("%d", 20); // 220
                    break;
            
                case 3:
                    printf("%d", 20);
                
                    break;
            
                default:
                    printf("exit");
                    ;
            }
            
            printf("\nDo you want to continue : Press y/n");
    scanf("%c", &ch);//y Y
           
    }while(ch=='y' || ch=='Y');