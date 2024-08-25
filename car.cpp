#include<iostream>
#include<unistd.h>
#include<string.h>
using namespace std;
class Car
{
    public:
    string brand;
    string model;
    int year;
};
int main()
{
    Car carObj1;
    carObj1.brand="BMW";
    carObj1.model="X5";
    carObj1.year=1999;
    Car carObj2;
    carObj2.brand="Ford";
    carObj2.model="Mustang";
    carObj2.year=1969;
    cout<<carObj1.brand<<"\n"<<carObj1.model<<"\n"<<carObj1.year<<"\n";
    cout<<carObj2.brand<<"\n"<<carObj2.model<<"\n"<<carObj2.year<<"\n";
    return 0;

}