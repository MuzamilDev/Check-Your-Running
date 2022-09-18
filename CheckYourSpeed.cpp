#include<iostream>
using namespace std;

int main()
{

    float distance , time , speed;

    cout<<"Enter The distance you have covered i,e in Meters "<<endl;
    cin>>distance;

    cout<<"Enter time in which you covered the distance i,e in Seconds "<<endl;
    cin>>time;

    speed=distance/time;

    cout<<"Your speed is "<<speed<<"m/s"<<endl;

    return 0;
}
