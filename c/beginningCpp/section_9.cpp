
#include <iostream>
#include <vector>

using namespace std;

int main() { 

    int num {0};
    
    cout << "enter an integer from 1 - 3: " << endl;
    cin >> num;

    switch (num)
    {
    case 1: cout << "you entered 1"; break;
    case 2: cout << "you entered 2"; break;
    case 3: 
    if (num * 2 != 2) {
        cout << "bingo!" << endl;
    } 
    break;
    
    default: cout << "invalid!" << endl; break;
    }

    return 0;
}



















