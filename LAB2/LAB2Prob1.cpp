#include <iostream>

int main()
{
    long int n, temp;
    long int maxSum=0, maxNum, sum;
    for (n=10; n<=1000; n++)
    {
        sum=0;
        temp=n;
        while(temp!=1)
        {
            if(temp%2==0)
                temp/=2;
            else
                temp=(temp*3)+1;
            sum+=temp;
        }
        //std::cout<<n<<":"<<sum<<", ";
        if(maxSum<sum)
        {
            maxSum=sum;
            maxNum=n;
        }
            
    }
    std::cout<<maxNum<<" has the highest Collatz Conjecture sum of "<<maxSum;
}