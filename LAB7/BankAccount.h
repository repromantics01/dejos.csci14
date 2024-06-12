#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED

class BankAccount
{
    public:
        int accountNumber;
        double balance;

    public:
        BankAccount();
        BankAccount(int, double);
        void setAccountNumber(int);
        int getAccountNumber();
        double getBalance();
        void deposit(double);
        void withdraw(double);
        ~BankAccount();
};

#endif // BANKACCOUNT_H_INCLUDED
