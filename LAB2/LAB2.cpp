#include <iostream>

int main()
{

    int j, i;
    int r, temp, f=1;
    int sumOfF=0;

    for(j=10; j<=10000000; j++)
    {
        sumOfF=0;
        temp = j;
        while(temp>=1)
        {
            r=temp%10;
            i=1;
            while(i<=r)
            {
                f*=i;
                i++;
            }
            sumOfF+=f;
            f=1;
            temp/=10;
        }
        if(sumOfF==j)
            std::cout<<j<<",";
    }
}