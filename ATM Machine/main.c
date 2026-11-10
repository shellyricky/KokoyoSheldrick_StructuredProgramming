#include <stdio.h>
#include <stdlib.h>
//FUNCTION PROTOTYPES
int login();//login function
float deposit(float currentBalance);//deposit function
float withdraw(float currentBalance);

//MAIN FUNCTION
int main(){
    int authentication=login();

    if (authentication==1){
            float currentBalance=1000.00; //initial balance
            int choice;
        do {
            printf("--WELCOME TO MAINMENU---\n");//Displayed MainMenu
            printf("1. Check Balance\n");
            printf("2. Deposit Cash\n");
            printf("3. Withdraw Cash\n");
            printf("4. Exit\n");
            printf("Please Select Option...\n");
            scanf("%d", &choice);
            //integrate user's choice
            switch(choice){
            case 1:
                printf("Your current balance is: Ksh.%.2f\n", currentBalance);
                break;
            case 2:
                currentBalance= deposit(currentBalance);
                break;
            case 3:
                currentBalance= withdraw(currentBalance);
                break;
            case 4:
                printf("Thank you for using our ATM.\n Goodbye!\n");
                break;
            default:
                printf("Invalid choice please try again.\n");
            }
        }while(choice!=4);

    }else{
        printf("AUTHENTICATION FAILED!");
    }

    return 0;


}
//FUNCTION DEFINITIONS
    int login(){//login function
    const int correctPin=9999;
    int pin;
    int attempts=3;
    for (attempts=1; attempts<=3; attempts++){ //checks for attempts and loops
        printf("ENTER PIN:\n");
        scanf("%d", &pin);
    if (correctPin==pin){ //confirms pin
        printf("LOGIN SUCCESSFUL\n");
        return 1;//success
    }
        else{
            printf("INCORRECT PIN\n");
            }
    }
    printf("TOO MANY INCORRECT ATTEMPTS. SYSTEM LOCKED!");
    return 0; //failure

}
//deposit function
    float deposit(float CurrentBalance){
    float amount;
    printf("ENTER AMOUNT TO DEPOSIT:\n");
    scanf("%f",&amount);
    if(amount>0){
        CurrentBalance+=amount;
        printf("You have successfully deposited Ksh.%.2f\n", amount);
        }else{
        printf("Invalid Amount!\n");
        }
        return CurrentBalance;
    }
//withdraw function
    float withdraw(float currentBalance){
    float amount;
    printf("ENTER AMOUNT TO WITHDRAW\n");
    scanf("%f", &amount);
    if(amount>0){
            if(amount<=currentBalance){
                currentBalance-=amount;
                printf("You have successfully withdrawn Ksh.%.2f\n",amount);
            }else{
            printf("You Have Insufficient Balance!\n"); }
    }else{printf("Invalid Amount, Please Try Again\n");}
        return currentBalance;

    }
