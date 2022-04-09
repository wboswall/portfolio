/*
 *Name: Sales Tax Calculator
 *Date: 04/09/2022
 *Location: Dunstaffnage, PEI, Canada
 *Version: 1.0
 *Programmed by: William Boswall
*/
#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
 *Variables
*/
double purchaseAmount = 0.0;
double salesTaxRate = 0.0;
double salesTax = 0.0;

int main(int argc, char** argv) {
	cout << "Sales Tax Calculator\n\n";
	cout << "\n\nEnter the purchase amount: ";
	cin >> purchaseAmount;
	cout << "\n\nEnter Sales tax amount in decimal ex. 0.15 for 15%\n";
	cin >> salesTaxRate;
	salesTax = purchaseAmount * salesTaxRate;
	cout << "Sales tax is: $" << salesTax;
	return 0;
}