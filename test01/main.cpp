#include <iostream>
using namespace std;
#include "circle.h"

int main ()
{
    circle donut;
    double area = donut.getarea();
    cout<<"donut ������ "<<area<<"�Դϴ� "<<endl;

    circle pizza(30);
    area = pizza.getarea();
    cout<<"pizza������ "<<area <<"�Դϴ� "<<endl;
}
