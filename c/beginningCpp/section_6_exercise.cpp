#include <iostream>

using namespace std;

int main() {
    const double price_per_small_room = 25;
    const double price_per_large_room = 35;
    const double tax = 0.06;
    const int days_in_a_month = 30;
    
    int number_of_small_room = 0;
    int number_of_large_room = 0;

    cout << "Welcome to Frank's carpet cleaning service!" << endl;
    cout << "\nPlease enter the number of small rooms to be cleaned: ";
    cin >> number_of_small_room;
    cout << "\nPlease enter the number of large rooms to be cleaned: ";
    cin >> number_of_large_room;
    cout << "============================" << endl;
    cout << "\nprice for small rooms is $" << number_of_small_room * price_per_small_room << endl;
    cout << "\nprice for large rooms is $" << number_of_large_room * price_per_large_room << endl;

    cout << "\ntax for small rooms is $" << number_of_small_room * price_per_small_room * tax << endl;
    cout << "\ntax for large rooms is $" << number_of_large_room * price_per_large_room * tax << endl;
    cout << "============================" << endl;
    cout << "\nTotal cost is $" << ((number_of_small_room * price_per_small_room) + (number_of_large_room * price_per_large_room)) * (1 + 1 * tax) << endl;
    cout << "\nThis quote is valid for " << days_in_a_month << " days" << endl;

    return 0;
}

