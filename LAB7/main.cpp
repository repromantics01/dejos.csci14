#include <iostream>
#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
using namespace std;

int main()
{
    double dA,sA=45;
    char choice;
    cout<<"Checking Account Details:";
    CheckingAccount cA(12345,10000);
    cA.setServiceCharge(0);
    cout<<endl;
    cA.printAccInfo();
    cout<<endl<<"[D] Deposit, [W] Withraw: ";
    cin>>choice;
    if(choice == 'D')
    {
        cout<<"Deposit Amount: ";
        cin>>dA;
        cA.setServiceCharge(sA);
        cA.deposit(dA);
        cA.printAccInfo();
    }
    else if (choice == 'W')
    {
        cout<<"Withdraw Amount: ";
        cin>>dA;
        cA.setServiceCharge(sA);
        cA.deposit(dA);
        cA.printAccInfo();
    }

    cout<<endl<<"Savings Account Details"<<endl;
    SavingsAccount savingsA(98756,50000);
    savingsA.setInterestRate(2);
    cout<<"Withdraw Amount: ";
    cin>>dA;
    savingsA.printAccInfo();
    cout<<"Post interest: "<<savingsA.postInterest();




}
