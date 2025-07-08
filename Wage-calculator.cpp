#include <iostream>
#include <iomanip>  // for std::setprecision and std::fixed

// Compile and test
// g++ Wage-calculator.cpp && ./a.out < <(echo " 2 777") && ./rm ./a.out

using namespace std;

int main() {
    double hourlyPay, hoursPerWeek;
    const int REGULAR_HOURS = 40;
    const int WEEKS_IN_MONTH = 4;
    const int WEEKS_IN_YEAR = 56;

    // Input hourly pay
    cout << "Enter your hourly pay: ";
    cin >> hourlyPay;

    // Input hours worked per week
    cout << "Enter how many hours you work per week: ";
    cin >> hoursPerWeek;

    // Calculate overtime pay rate
    double overtimePay = hourlyPay * 1.5;

    // Calculate weekly pay
    double weeklyPay;
    if (hoursPerWeek > REGULAR_HOURS) {
        double overtimeHours = hoursPerWeek - REGULAR_HOURS;
        weeklyPay = (REGULAR_HOURS * hourlyPay) + (overtimeHours * overtimePay);
    } else {
        weeklyPay = hoursPerWeek * hourlyPay;
    }

    // Calculate total pay for 4 weeks and annual salary
    double totalPay = weeklyPay * WEEKS_IN_MONTH;
    double yearlyPay = weeklyPay * WEEKS_IN_YEAR;

    // Output results with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Weekly pay: $" << weeklyPay << endl;
    cout << "Total pay for 4 weeks: $" << totalPay << endl;
    cout << "Salary pay: $" << yearlyPay << endl;

    return 0;
}
