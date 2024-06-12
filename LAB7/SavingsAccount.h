#include "BankAccount.h"
#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED

class SavingsAccount : public BankAccount
{
    private:
        double interestRate;

    public:
        SavingsAccount(int, double);
        void setInterestRate(double);
        double getInterestRate();
        double postInterest();
        void withdraw(double);
        void printAccInfo();
        ~SavingsAccount();
};

#endif // SAVINGSACCOUNT_H_INCLUDED
