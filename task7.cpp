

#include <iostream>
#include <string>
using namespace std;
string calculate_time(float extra_time, float arrival_time);
int main()
{
    double start_hrs, start_mins, arrival_hrs, arrival_mins;
    float extra_time, arrival_time; 
    cout << "Enter Exam Starting Time (hour): ";
    cin >> start_hrs;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> start_mins;
    cout << "Enter Student hour of arrival: ";
    cin >> arrival_hrs;
    cout << "Enter Student minutes of arrival: ";
    cin >> arrival_mins;
    extra_time = (start_hrs * 60) + start_mins;
    arrival_time = (arrival_hrs * 60) + arrival_mins;
    string result = calculate_time(extra_time, arrival_time);
    cout << result << endl;
}
string calculate_time(float extra_time, float arrival_time)
{
    if ((extra_time - arrival_time)>=0 && (extra_time - arrival_time)<30)
    {
        cout << "On time" << endl;
    }
    if ((arrival_time - extra_time)>0)
    {
        cout << "Late" << endl;
    }
    if ((extra_time - arrival_time)>30)
    {
        cout << "Early" << endl;
        if ((extra_time - arrival_time)>0)
        {
            cout << "Test: " << extra_time - arrival_time << endl;
        }
    }
    if ((extra_time - arrival_time) == 30)
    {
        return to_string(extra_time - arrival_time) + " minutes before the start";
    }
    if ((extra_time - arrival_time)<30 && (extra_time - arrival_time)>0)
    {
        return to_string(extra_time - arrival_time) + " minutes before the start";
    }
}