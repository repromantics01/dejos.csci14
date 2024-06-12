#include <iostream>
#include <cmath>

using namespace std;

void initArrayRandInt (int [], int );
bool isPrime(int );
bool isEven(int );
void printGoldbachsPairInArray(int [], int );

int main()
{
    //int sampleArr[5] = {10,12,16,18,20};
    int arr[10];
    int s = sizeof(arr)/sizeof(int);
    initArrayRandInt(arr,s);
    for (int i=0; i<s; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //printGoldbachsPairInArray(sampleArr,5);
    printGoldbachsPairInArray(arr,s);

}

void initArrayRandInt (int x[], int s)
{
    for(int i=0; i<s; i++)
    {
        x[i] = 1+rand()%100;
    }
}

bool isPrime(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

bool isEven(int x)
{
    return (x>4 && x%2==0)? true:false;
}

void printGoldbachsPairInArray(int x[], int s)
{
    for (int i=0; i<s; i++)
    {
        if(isEven(x[i]))
        {
            cout<<x[i]<<"=";
            for(int j=2; j<x[i]; j++)
            {
                if(isPrime(j))
                {
                    int k=j+1;
                    while(j+k!=x[i])
                    {
                        k++;
                    }
                    if(j+k==x[i] && isPrime(k) && j<=k)
                        cout<<k<<"+"<<j<<",";
                }
            }
            cout<<endl;
        }
    }
}
