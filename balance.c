#include <stdio.h>

int main(int argc, char **argv){
	float loan, rate, payment, mensratio, balance;
	
	printf("Enter amount of loan: \n");
	scanf("%f", &loan); 
	printf("Enter interest rate: \n");
	scanf("%f", &rate);
	printf("Enter monthly payment: \n");
	scanf("%f", &payment);
	mensratio = rate/100.0/12;
	
	balance = (loan - payment)+(loan*mensratio);
	printf("Balance remaining after first payment: $%.2f\n", balance);
	balance = balance-payment+(balance*mensratio);
	printf("Balance remaining after second payment: $%.2f\n", balance);
	balance = balance-payment+(balance*mensratio);
	printf("Balance remaining after third payment: $%.2f\n", balance);
	
	return 0;
}

