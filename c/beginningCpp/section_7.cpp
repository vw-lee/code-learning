#include <iostream>
#include <vector>

using namespace std;

int main() {
    char vowels [] {'a','e','i','o','u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
    cin >> vowels[3];
    cout << vowels[3] << endl;
    cout << sizeof(vowels) << endl;

    return 0;
}
