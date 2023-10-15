#include <iostream>
#include <cmath>
using namespace std;
float calculateAverage(float english, float maths, float chemistry, float social_science, float biology);
string calculateGrade(float percentage);
int main()
{
    float english, maths, chemistry, social_science, biology, total, sum, percentage;
    char grade;
    string name;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> english;
    cout << "Enter marks for Maths: ";
    cin >> maths;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;
    cout << "Enter marks for Social Science: ";
    cin >> social_science;
    cout << "Enter marks for Biology: ";
    cin >> biology;
    cout << "Student Name: " << name << endl;
    percentage = calculateAverage(english, maths, chemistry, social_science, biology);
    calculateGrade(percentage);
}
float calculateAverage(float english, float maths, float chemistry, float social_science, float biology)
{
    float sum, percentage;
    sum = english + maths + chemistry + social_science + biology;

    percentage = (sum / 500) * 100;

    cout << "Percentage: " << percentage << "%" << endl;
    return percentage;
}
string calculateGrade(float percentage)
{
    char grade;
    if (percentage >= 90)
    {
        grade = 'A';
        cout << "Grade: " << grade << "+" << endl;
    }
    else if (percentage >= 80)
    {
        grade = 'A';
        cout << "Grade: " << grade << endl;
    }
    else if (percentage >= 70)
    {
        grade = 'B';
        cout << "Grade: " << grade << "+" << endl;
    }
    else if (percentage >= 60)
    {
        grade = 'B';
        cout << "Grade: " << grade << endl;
    }
    else if (percentage >= 50)
    {
        grade = 'C';
        cout << "Grade: " << grade << endl;
    }
    else if (percentage >= 40)
    {
        grade = 'D';
        cout << "Grade: " << grade << endl;
    }
    else
    {
        grade = 'F';
        cout << "Grade: " << grade << endl;
    }
}
