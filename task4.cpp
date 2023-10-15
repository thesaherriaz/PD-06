#include<iostream>
#include<cmath>
using namespace std;
float printInputs(char code, float minutes_used);
float amount(char code, char call, float minutes_used);
int main()
{
    float minutes_used,cost, service_type, total;
    char code, call;
    string type;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>code;
    if(code=='p'||code=='P')
    {
        cout<<"Enter time of the call (D/d for day, N/n for night): ";
        cin>>call;
    }
    cout<<"Enter the number of minutes used: ";
    cin>>minutes_used;
    printInputs(code, minutes_used);
    cost=amount( code, call, minutes_used);
    cout<<"Amount Due: $"<<cost;
}
float printInputs(char code, float minutes_used)
{
    if(code=='r'|| code=='R')
    {
        cout<<"Service Type: Regular"<<endl;
    }
    else if(code=='p'|| code=='P')
    {
        cout<<"Service Type: Premium"<<endl;
    }
    cout<<"Total Minutes Used: "<<minutes_used<<" minutes"<<endl;
}
float amount(char code, char call, float minutes_used)
{
    float cost;
    if(code=='r'|| code=='R')
    {
        if(minutes_used<=50)
        {
            cost=10;
        }
        else
        {
            cost=((minutes_used-50)*0.2)+10;
        }
    }
    else if(code=='p'|| code=='P')
    {
        if(minutes_used<=75)
        {
            cost=25;
        }
        else if(minutes_used>75&&call=='d')
        {
            cost=((minutes_used-75)*0.1)+25;
        }
        else if(minutes_used>100&&call=='n')
        {
            cost=((minutes_used-75)*0.05)+25;
        }
    }
    else{
        cout<<"Please enter a letter p/P or r/R.";
    }
    return cost;
}





