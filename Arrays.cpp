#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "how many numbers do you want to work with? ";
    cin >> amount;

    int numbers[amount];
    cout << "enter each number:" << endl;

    for (int i = 0; i < amount; i++) {
        cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < amount; i++) {
        sum += numbers[i];
    }

    cout << "the sum of these numbers is " << sum << "." << endl;

    return 0;
}
