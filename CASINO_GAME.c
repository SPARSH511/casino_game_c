#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ll long long
int random(int low,int up)
{
    srand(time(0));
    int num=(rand()%(up-low+1))+low;
    return num;
}
int main()
{
    printf("***************************************WELCOME TO CASINO ROYALE!!**************************************************\n");
    printf("RULES ARE SIMPLE YOU CHOOSE A NUMBER BETWEEN 1 AND 10 AND IF NUMBER MATCHES THE NUMBER CHOSEN BY COMPUTER, YOU WIN!!");
    printf("\n\n\n");
    ll deposit;
    printf("Enter the amount you want to deposit before game starts: ");
    scanf("%lld",&deposit);
    char choice;
    do
    {
        ll amount;
        printf("\nEnter the amount which you want to bet out of deposited amount: ");
        scanf("%lld",&amount);
        if(amount>deposit || amount<0)
        {
            printf("\nEnter the valid amount to play!!");
        }
        else
        {
            int risk_cat;
            printf("\nChoose from the risk categories: ");
            printf("\nPress 1 for Risk Category 1- WINNER GETS 2X THE MONEY HE BETS OR LOSES THE SAME AMOUNT HE/SHE BETS");
            printf("\nPress 2 for Risk Category 2- WINNER GETS 4X THE MONEY HE BETS OR LOSES 2X THE AMOUNT HE/SHE BETS");
            printf("\nPress 3 for Risk Category 3- WINNER GETS 8X THE MONEY HE BETS OR LOSES 4X THE AMOUNT HE/SHE BETS");
            printf("\nPress 4 for Risk Category 4- WINNER GETS 16X THE MONEY HE BETS OR LOSES 10X THE AMOUNT HE/SHE BETS");
            printf("\n\nEnter the category of your choice: ");
            scanf("%d",&risk_cat);
            int computer_output=random(1,10);
            int user_input;
            printf("\nChoose your number to place the bet: ");
            scanf("%d",&user_input);
            switch(risk_cat)
            {
            case(1):
                if (user_input>10 || user_input<1)
                {
                    printf("\nEnter a valid number!!");
                }
                else if(user_input==computer_output)
                {
                    deposit+=(amount*2);
                    printf("\nYOU WIN!!");
                    if(deposit>=0)
                    {
                        printf("\nYour deposited amount is now: %lld",deposit);
                    }
                    else
                    {
                        printf("\nYou are in a debt of amount %lld",(-1)*deposit);
                    }
                }
                else
                {
                    deposit-=amount;
                    printf("\nYOU LOST!!");
                    if(deposit>=0)
                    {
                        printf("\nYour deposited amount is now: %lld",deposit);
                    }
                    else
                    {
                        printf("\nYou are in a debt of amount %lld",(-1)*deposit);
                    }
                }
                break;
            case(2):
                if (user_input>10 || user_input<1)
                {
                    printf("\nEnter a valid number!!");
                }
                else if(user_input==computer_output)
                {
                    deposit+=(amount*4);
                    printf("\nYOU WIN!!");
                    if (deposit>=0)
                    {
                        printf("\nYour deposited amount is now: %lld",deposit);
                    }
                    else
                    {
                        printf("\nYou are in a debt of amount %lld",(-1)*deposit);
                    }
                }
                else
                {
                    deposit-=(amount*2);
                    printf("\nYOU LOST!!");
                    if (deposit>=0)
                    {
                        printf("\nYour deposited amount is now: %lld",deposit);
                    }
                    else
                    {
                        printf("\nYou are in a debt of amount %lld",(-1)*deposit);
                    }
                }
                break;

            case(3):
                if (user_input>10 || user_input<1)
                {
                    printf("\nEnter a valid number!!");
                }
                else if(user_input==computer_output)
                {
                    deposit+=(amount*8);
                    printf("\nYOU WIN!!");
                    if (deposit>=0)
                    {
                        printf("\nYour deposited amount is now: %lld",deposit);
                    }
                    else
                    {
                        printf("\nYou are in a debt of amount %lld",(-1)*deposit);
                    }
                }
                else
                {
                    deposit-=(amount*4);
                    printf("\nYOU LOST!!");
                    if (deposit>=0)
                    {
                        printf("\nYour deposited amount is now: %lld",deposit);
                    }
                    else
                    {
                        printf("\nYou are in a debt of amount %lld",(-1)*deposit);
                    }
                }
                break;

            case(4):
                if (user_input>10 || user_input<1)
                {
                    printf("\nEnter a valid number!!");
                }
                else if(user_input==computer_output)
                {
                    deposit+=(amount*16);
                    printf("\nYOU WIN!!");
                    if (deposit>=0)
                    {
                        printf("\nYour deposited amount is now: %lld",deposit);
                    }
                    else
                    {
                        printf("\nYou are in a debt of amount %lld",(-1)*deposit);
                    }
                }
                else
                {
                    deposit-=(amount*10);
                    printf("\nYOU LOST!!");
                    if (deposit>=0)
                    {
                        printf("\nYour deposited amount is now: %lld",deposit);
                    }
                    else
                    {
                        printf("\nYou are in a debt of amount %lld",(-1)*deposit);
                    }
                }
                break;

            default:
                printf("\nEnter valid value of risk category!!");
                break;

            }
            printf("\nComputer chose the number: %d",computer_output);
        }

        if(deposit<=0)
        {
            int choice_int;
            ll more_money;
            printf("\n\nWant to add more money to your deposit? Press 0 for no and 1 for yes : ");
            scanf("%d",&choice_int);
            if(choice_int==1)
            {
                printf("\nEnter how much money you want to add: ");
                scanf("%lld",&more_money);
                deposit+=more_money;
            }
            else
            {
                break;
            }
        }
        printf("\n\nDo you want to continue playing? Press 'y' key for Yes and any other key (except Enter and Space-bar) for No : ");
        scanf("\n");
        scanf("%c",&choice);
        printf("\n");
    }
    while(choice=='y' || choice=='Y');
    if(deposit>=0)
    {
        printf("\n\nTHANK YOU FOR PLAYING!! PLEASE COME AGAIN.");
    }
    else
    {
        printf("\n\nPLEASE PAY YOUR DEBT BY PROVIDING A COLLATERAL OR ANY OTHER FORM OF MONEY. OTHERWISE BE READY FOR A POLICE ENQUIRY.");
    }
    return 0;
}
