#include <iostream>
using namespace std;
string position_check(int height, int x_cord, int y_cord);
int main()
{
    int x_cord, y_cord, height;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> x_cord;
    cout << "Enter y_cord coordinates: ";
    cin >> y_cord;
    cout << position_check(height, x_cord, y_cord) << endl;
}
string position_check(int height, int x_cord, int y_cord)
{
    if (x_cord >= 0 && x_cord <= 3 * height)
    {
        if (y_cord == 0 || y_cord == height)
            return "Border"; //for top or bottom
    }
    if (y_cord >= 0 && y_cord <= 4 * height)
    {
        if (x_cord = 0 || x_cord == 2 * height)
            return "Border";//for right or left
    }
    if (x_cord == height &&y_cord >= height && y_cord <= 3 * height)
        return "Border"; // for right 

    else if (x_cord > 0 && x_cord < 2 * height && y_cord > 0 && y_cord < 4 * height)
        return "Inside";
    else
        return "Outside";
}
