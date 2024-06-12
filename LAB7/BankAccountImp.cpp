#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount()
{
    accountNumber = NULL;
    balance = 0;
}

BankAccount::BankAccount(int userNum, double userBal)
{
    accountNumber = userNum;
    balance = userBal;
}

void BankAccount::setAccountNumber(int userNum)
{
    accountNumber = userNum;
}

int BankAccount::getAccountNumber()
{
    return accountNumber;
}

double BankAccount::getBalance()
{
    return balance;
}

void BankAccount::deposit(double money)
{
    balance+=money;
}

void BankAccount::withdraw(double money)
{
    if (money<balance)
    {
        balance-=money;
    }
    else
        cout<<"Balance is not enough"<<endl;
}

BankAccount::~BankAccount(){}
