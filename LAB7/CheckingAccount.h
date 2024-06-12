#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED
#include "BankAccount.h"

class CheckingAccount: public BankAccount
{
    private:
        double interestRate;
        double minBalance;
        double serviceCharge;

    public:
        CheckingAccount();
        CheckingAccount(int, double);
        void setInterestRate(double);
        double getInterestRate();
        void setMinBalance(double);
        double getMinBalance();
        void setServiceCharge(double);
        double getServiceCharge();
        double postInterest();
        void displayCheck(double);
        void printAccInfo();
        ~CheckingAccount();
};

#endif // CHECKINGACCOUNT_H_INCLUDED
