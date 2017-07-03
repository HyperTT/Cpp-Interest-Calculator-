#include <iostream>
#include <iomanip>
#include "money.h"
using namespace std;


int main()
{
    float now, interest, years;
    cout << "== How Much Money Will You Have? ==" << endl;
    cout << "How much money do you have now?" << endl;
    cin >> now;
    cout << "What's the interest rate? (format: 0.05 for 5%)" << endl;
    cin >> interest;
    cout << "How many years will the money sit?" << endl;
    cin >> years;
    cout << fixed << setprecision(2);
    cout << "You will have $" << future_value(now, interest, years) << " in " << years << " years." << endl;

    return 0;
}
