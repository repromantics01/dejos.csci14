#include <iostream>
#include <cmath>
#include "cylinderTank.h"
using namespace std;

cylinderTank::cylinderTank()
{
    radius = 0;
    height = 0;
    aveDrainRate = 0;
    aveFillRate = 0;
}

void cylinderTank::setHeight (double h)
{
    height = h;
}

void cylinderTank::setRadius (double r)
{
    radius = r;
}

void cylinderTank::setDrainRate (double dR)
{
    aveDrainRate = dR;
}

void cylinderTank::setFillRate (double fR)
{
    aveFillRate = fR;
}

double cylinderTank::getHeight ()
{
    return height;
}

double cylinderTank::getRadius ()
{
    return radius;
}

double cylinderTank::getDrainRate ()
{
    return aveDrainRate;
}
double cylinderTank::getFillRate ()
{
    return aveFillRate;
}

double cylinderTank::volume ()
{
    return M_PI*pow(radius,2)*height;
}

void cylinderTank::timeToFillEmpty()
{
    double fTime = (volume()*1000)/(aveFillRate-aveDrainRate);
    int hr = static_cast<int>(fTime)/3600;
    int minute = static_cast<int>(fTime)/60%60;
    int secs = static_cast<int>(fTime)%60;
    cout<<"Time Taken to Fill Empty Cylinder"<<endl;
    cout<<hr<<":"<<minute<<":"<<secs<<endl;
}

void cylinderTank::timeToFillPartial(double iV)
{
    double fTime = ((volume()-iV)*1000)/(aveFillRate-aveDrainRate);
    int hr = static_cast<int>(fTime)/3600;
    int minute = static_cast<int>(fTime)/60%60;
    int secs = static_cast<int>(fTime)%60;
    cout<<"Time Taken to Fill Partially-Filled Cylinder"<<endl;
    cout<<hr<<":"<<minute<<":"<<secs<<endl;
}

cylinderTank::~cylinderTank(){}
