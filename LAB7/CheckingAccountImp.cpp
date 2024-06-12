#include "CheckingAccount.h"
#include "BankAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(int userID, double userBal) : BankAccount(userID, userBal)
{
}

void CheckingAccount::setInterestRate(double iR)
{
    interestRate = iR;
}

double CheckingAccount::getInterestRate()
{
    return interestRate;
}

void CheckingAccount::setMinBalance(double mB)
{
    minBalance = mB;
}
double CheckingAccount::getMinBalance()
{
    return minBalance;
}

void CheckingAccount::setServiceCharge(double sC)
{
    serviceCharge = sC;
    balance-=serviceCharge;
}

double CheckingAccount::getServiceCharge()
{
    return serviceCharge;
}

double CheckingAccount::postInterest()
{
   double interest = balance*(interestRate/100);
   return interest;
}

void CheckingAccount::displayCheck(double wA)
{
    if(balance<minBalance)
    {
        balance-=wA;
        cout<<wA<<endl;
    }
}

void CheckingAccount::printAccInfo()
{
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Balance: "<<balance<<endl;
    cout<<"Service Charge: "<<serviceCharge<<endl;

}
CheckingAccount::~CheckingAccount(){}
