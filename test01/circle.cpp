#include <iostream>
using namespace std;

#include "circle.h"
circle :: circle()
{
    radius = 1;
    cout<<"������ "<<radius;
    cout<<" �� ����"<<endl;
}

circle :: circle (int r)
{
    radius = r;
    cout<<"������ "<<radius<<" �� ����"<<endl;
}

double circle :: getarea()
{
    return 3.14 * radius * radius;
}
