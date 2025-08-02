#include <iostream>
using namespace std;

// function to calculate current age
void findAge(int current_date, int current_month,
             int current_year, int birth_date,
             int birth_month, int birth_year)
{
    // days of every month
    int month[] = {31, 28, 31, 30, 31, 30,
                   31, 31, 30, 31, 30, 31};

    // if birth date is greater than current date
    // then do not count this month and add 30
    // to the date so as to subtract the date and
    // get the remaining days
    if (birth_date > current_date)
    {
        current_date = current_date + month[birth_month - 1];
        current_month = current_month - 1;
    }

    // if birth month exceeds current month, then do
    // not count this year and add 12 to the month so
    // that we can subtract and find out the difference
    if (birth_month > current_month)
    {
        current_year = current_year - 1;
        current_month = current_month + 12;
    }

    // calculate date, month, year
    int calculated_date = current_date - birth_date;
    int calculated_month = current_month - birth_month;
    int calculated_year = current_year - birth_year;

    // print the present age
    cout << "Present Age" << endl;
    cout << "Years: " << calculated_year << endl;
    cout << "Months: " << calculated_month << endl;
    cout << "Days: " << calculated_date << endl;
}

// driver code to check the above function
int main()
{
    // current date (dd/mm/yyyy)
    int current_date, current_year, current_month;
    cout << "Enter current date (dd/mm/yyyy): \n";
    cin >> current_date >> current_month >> current_year;

    // birth date (dd/mm/yyyy)
    int birth_date, birth_month, birth_year;
    cout << "Enter birthdate (dd/mm/yyyy): \n";
    cin >> birth_date >> birth_month >> birth_year;

    // function call to print age
    findAge(current_date, current_month, current_year,
            birth_date, birth_month, birth_year);

    return 0;
}
