#include<iostream>
#include<cmath>
using namespace std;
string recommended_activity(string temp, string humidity);
int main()
{
    string temp, humidity, recommendedActivity;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    recommendedActivity=recommended_activity(temp, humidity);
    cout<<"Recommended activity: "<<recommendedActivity;
}
string recommended_activity(string temp, string humidity)
{
    string recommendedActivity;
    if(temp=="warm" && humidity=="dry")
    {
        recommendedActivity="Play tennis";
    }
    else if(temp=="warm" && humidity=="humid")
    {
        recommendedActivity="Swim";
    }
    else if(temp=="cold" && humidity=="dry")
    {
       recommendedActivity="Play basketball";
    }
    else if(temp=="cold" && humidity=="humid")
    {
        recommendedActivity="Watch TV";
    }
    return recommendedActivity;
}