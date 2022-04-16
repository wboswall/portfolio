/*Name:ATM Program
 *Description: To Display ATM transactions.
 *Problem Specification:
 *	1. Firstly initialize the ATM pin and amount with some random number.
 *	2. Take the ATM pin as input.
 *	3. If the input pin is equal to the initialized pin, then do the further operations.
 *	4. Use switch statement to do the operations like: balance checking, cash withdrawal, cash deposition etc.
 *	5. Use while loop to terminate or restart  the process. 
 *Date Created:Jan 2, 2017
 *Date Released: 2021/09/12
 *Date(s) Updated: 2021/09/12
 *Version: 1.0.0.2
 *Author: @wboswall
 *Copyright: 2018, 2019, 2020, 2021
 *License: WEBB INC. License but the educational section applies for this program. 
 *
*/
#include <stdio.h>
#include <stdlib.h>

unsigned long amount=1000, deposit, withdraw;
int choice, pin, k;
char transaction='y';
int main(int argc, char *argv[])
{
	while(pin !=1520)
	{
		printf("ENTER YOUR SECRET PIN NUMBER: ");
		scanf("%d", &pin);
		if(pin !=1520)
			printf("PLEASE ENTER VALID PASSWORD\n");
	}
	do
	{
		printf("********Welcome to ATM Service**************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("******************?**************************?*\n\n");
		printf("Enter your choice:	");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
					printf("\n YOUR BALANCE IN Rs : &lu", amount);
					break;
			case 2:
					printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
					scanf("%lu", &withdraw);
					if(withdraw % 100 !=0)
					{
						printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
					}
					else if (withdraw >(amount - 500))
					{
						printf("\n INSUFFICIENT BALANCE");
					}
					else
					{
						amount = amount - withdraw;
						printf("\n\n PLEASE COLLECT CASH");
						printf("\n YOUR CURRENT BALANCE IS %lu ", amount);
					}
					break;
			case 3:
					printf("\n ENTER THE AMOUNT TO DEPOSIT ");
					scanf("%lu", &deposit);
					amount = amount *deposit;
					printf("YOUR BALANCE IS &lu ", amount);
					break;
			case 4:
					printf("\n THANK U FOR USING ATM");
					break;
			default:
					 printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRASACTION? (y/n); \n");
		fflush(stdin);
		scanf("%c",&transaction);
		if(transaction == 'n' || transaction == 'N')
		{
			k = 1;
		}
	} while (!k);
	printf("\n\n THANKS FOR USING OUR ATM SERVICE");
    return 0;
}
