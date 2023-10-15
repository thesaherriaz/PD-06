#include<iostream>
#include<cmath>
using namespace std;
double calculate_fruit_price(string fruit, string day, double quantity);
int main()
{
    string fruit, day;
    float price;
    double quantity, result;
    cout << "Enter the name of fruit: ";
    cin >> fruit;
    cout << "Enter the day of the week: ";
    cin >> day;
    cout << "Enter the quantity of fruit: ";
    cin >> quantity;
    result = calculate_fruit_price(fruit, day, quantity);
    cout << result;
}
double calculate_fruit_price(string fruit, string day, double quantity)
{
    double price;
    if (day != "Sunday" && day != "Saturday")
    {
        if (fruit == "banana")
        {
            price = 2.50 * quantity;
        }
        else if (fruit == "apple")
        {
            price = 1.20 * quantity;
        }
        else if (fruit == "orange")
        {
            price = 0.85 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            price = 1.45 * quantity;
        }
        else if (fruit == "kiwi")
        {
            price = 2.70 * quantity;
        }
        else if (fruit == "pineapple")
        {
            price = 5.50 * quantity;
        }
        else if (fruit == "grapes")
        {
            price = 3.85 * quantity;
        }
        else
        {
            cout << "Error";
        }
    }
    else if (day == "Sunday" || day == "Saturday")
    {
        if (fruit == "banana")
        {
            price = 2.70 * quantity;
        }
        else if (fruit == "apple")
        {
            price = 1.25 * quantity;
        }
        else if (fruit == "orange")
        {
            price = 0.90 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            price = 1.60 * quantity;
        }
        else if (fruit == "kiwi")
        {
            price = 3.00 * quantity;
        }
        else if (fruit == "pineapple")
        {
            price = 5.60 * quantity;
        }
        else if (fruit == "grapes")
        {
            price = 4.20 * quantity;
        }
        else
        {
            cout << "Error";
        }
    }
    else
        {
            cout << "Error";
        }
    // return price;
}