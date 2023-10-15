#include <iostream>
#include <cmath>
using namespace std;
int calculate_game(string year_type, int holiday_count, int num_of_weekends);

int main()
{
    string year_type;
    int holiday_count, num_of_weekends;
    cout << "Enter year type: ";
    cin >> year_type;
    cout << "Enter number of holidays: ";
    cin >> holiday_count;
    cout << "Enter number of weekends: ";
    cin >> num_of_weekends;
    int play_times = calculate_game(year_type,holiday_count,num_of_weekends);
    cout << play_times;
}
int calculate_game(string year_type, int holiday_count, int num_of_weekends)
{
    float play_times;
    int result = 48 - num_of_weekends;
    play_times = (holiday_count * (2 / 3)) + (result * (3 / 4)) + (48 - result);
    if (year_type == "leap")
    {
        play_times = play_times + (play_times * 0.15);
    }
    return play_times;
}
