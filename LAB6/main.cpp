#include <iostream>
#include "cylinderTank.h"
using namespace std;

int main()
{
    cylinderTank c;
    c.setHeight(4);
    c.setRadius(2);
    c.setDrainRate(0.3);
    c.setFillRate(2.2);
    cout<<c.volume()<<endl;
    c.timeToFillEmpty();
    c.timeToFillPartial(4.3);
}
