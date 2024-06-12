  #include <iostream>
using namespace std;

bool isFib(int);
void dispFibsInRange(int, int);
void dispFibsReciprocalInRange(int, int);
double fibsReciprocalSumInRange(int, int);

int main()
{
    int x=0, y=10;
    cout<<isFib(y)<<"\n";
    dispFibsInRange(x, y);
    dispFibsReciprocalInRange(x, y);
    cout<<fibsReciprocalSumInRange(x, y);

}

bool isFib(int x)
{
    int n1=0, n2=1, n3=1;
    while(n3<x)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    return x==n3;
}

void dispFibsInRange(int x, int y)
{
    for(int i=x; i<=y; i++)
    {
        if(isFib(i))
            cout<<i<<" ";
    }
        cout<<"\n";
}

void dispFibsReciprocalInRange(int x, int y)
{
    double rec, fib;
    for(int i=x; i<=y; i++)
    {
        if(isFib(i))
        {
            fib = i;
            rec = 1/fib;
            cout<<rec<<" ";
        }
    }
    cout<<"\n";
}

double fibsReciprocalSumInRange(int x, int y)
x`{
    double sum=0, fib, rec;
    for(int i=x; i<=y; i++)
    {
        if(isFib(i))
        {
            fib = i;
            rec = 1/fib;
            sum+=rec;
        }
    }
    return sum;
}

