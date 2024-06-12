#include "SavingsAccount.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount(int userID, double userBal): BankAccount(userID, userBal)
{
}

void SavingsAccount::setInterestRate(double iR)
{
    interestRate = iR;
}

double SavingsAccount::getInterestRate()
{
    return interestRate;
}

double SavingsAccount::postInterest()
{
    double interest = balance*(interestRate/100);
    balance-=interest;
    return interest;
}
void SavingsAccount::withdraw(double money)
{
    balance-=money;
}
void SavingsAccount::printAccInfo()
{
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Balance: "<<balance<<endl;
}

SavingsAccount::~SavingsAccount(){}
