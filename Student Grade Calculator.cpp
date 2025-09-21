#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double quiz1, quiz2, quiz3;
    double midterm, long1, long2, project;
    double quizAvg, longAvg, finalGrade;

    cout << "Enter Quiz#1: ";
    cin >> quiz1;
    cout << "Enter Quiz#2: ";
    cin >> quiz2;
    cout << "Enter Quiz#3: ";
    cin >> quiz3;

    cout << "Midterm Exam: ";
    cin >> midterm;

    cout << "Long Exam1: ";
    cin >> long1;

    cout << "Long Exam2: ";
    cin >> long2;

    cout << "Project: ";
    cin >> project;

    quizAvg = (quiz1 + quiz2 + quiz3) / 3.0;
    longAvg = (long1 + long2) / 2.0;
    finalGrade = (0.30 * midterm) + (0.30 * longAvg) + (0.15 * quizAvg) + (0.25 * project);

    cout << fixed << setprecision(2);
    cout << "Quiz Average: " << quizAvg << endl;
    cout << "Long Exam Average: " << longAvg << endl;
    cout << "Final Grade: " << finalGrade << endl;

    return 0;
}
