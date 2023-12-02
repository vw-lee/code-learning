// expressions and statements

#include <iostream>
#include <vector>

using namespace std;

int main() { 
    
    double num1 {10}; 
    double num2 {5}; 

    vector <double> result (5,0);
    result[0] = num1 * num2;
    result[1] = num1 / num2;
    result[2] = int(num1) % int(num2);
    result[3] = num1 + num2;

    cout << "the result is " 
    << endl
    << result[0] 
    << endl
    << result[1] 
    << endl
    << result[2] 
    << endl
    << result[3] 
    << endl
    << endl;

    int counter1 {0};
    int counter2 {0};

    counter1++;
    ++counter2;
    cout << counter1 << endl;
    cout << counter2 << endl;

    return 0;
}



















