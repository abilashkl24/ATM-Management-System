#include <stdio.h>

int main()
{
    int a,i;
    int choose;
    float Withdraw,Amount,receipt;
    float Balance=15000;
    printf("Welcome to IOB bank\n");
    printf("Please insert the  Card !");
    for(i=1;i<=3;i++)
    {
    printf("\nEnter the PIN: ");
    scanf("%d",&a);
    if (a>=1000 && 9999>=a)
    {
     choose :
      
      printf("\n----ATM MENU----");
      printf("\n1.Balance Enquiry");
      printf("\n2.Withdraw");
      printf("\n3.Deposit");
      printf("\n4.Exit");
      printf("\nChoose the Option: ");
      scanf("%d",&choose);
      
    switch(choose)
      {
    case 1:
        printf("Do you want receipt? (1=Yes / 0=No): ");
        scanf("\n%f",&receipt);
        if (receipt==1)
        {  
           printf("\n--- ATM RECEIPT ---\n");
           printf("\nYour Account Balance: %.1f",Balance);
           printf("\nThank You");
        }
        else 
        {
            printf("\nYour Account Balance: %.1f",Balance);
            printf("\nThank you");
        }
        goto choose;
        
    case 2:
        printf("Enter to Amount Withdraw: ");
        scanf("\n%f",&Amount);
        if(Balance>=Amount)
        {   
            Balance = Balance - Amount;
            printf("Do you want receipt? (1=Yes / 0=No): ");
            scanf("%f",&receipt);
            printf("\n Withdrawal Succesfull");
            if (receipt==1)
            {
            printf("\n--- ATM RECEIPT ---\n");
            printf("Withdrawal Amount: %.2f\n",Amount);
            printf("Total Balance: %.2f\n",Balance);  
            }
            else 
            {
                printf("Thank You\n");
            }
        }
        else
            {
                printf("Insufficient balance!\n");
            }
             goto choose;
        case 3:
            printf("Enter the Deposit Amount: ");
            scanf("%f",&Amount);
            Balance=Balance+Amount;
            
            printf("Do you want receipt? (1=Yes / 0=No): ");
            scanf("%f", &receipt);
            printf("Deposit Succesfull\n ");
            if (receipt == 1)
                {
                    printf("\n--- ATM RECEIPT ---\n");
                    printf("Deposit Amount: %.2f\n", Amount);
                    printf("Total Balance: %.2f\n", Balance);
                    printf("Thank You For using ATM\n");
                }
                else 
                {
                    printf("Thank you\n");
                }
            goto choose;
        case 4:
            printf("Thank you for using ATM\n");
            return 0;
        default:
            printf("Wrong option ?\n");
            printf("Please select the correct option :");
            goto choose;
      }   
    }
    else 
    {
        printf("\nIncorret Pin\n");
        
    }
    }
    printf("Card has been blocked !\n");
return 0;
}