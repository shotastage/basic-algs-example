#include <iostream>

int main() {
    using namespace std;

    int numbers[] = {21, 1, 1, 10, 6, 7, 12, 9, 3, 31};
    int arrysize = sizeof(numbers)/sizeof(numbers[0]);

    // Before sort log
    cout << "Before sort: ";
    for(int i = 0; i < arrysize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Main sort procedure
    for (int i = 0; i < arrysize-1; i++) {
        for (int j = 0; j < arrysize-i-1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // XOR swap without using extra memory
                numbers[j] = numbers[j] ^ numbers[j + 1];
                numbers[j + 1] = numbers[j] ^ numbers[j + 1];
                numbers[j] = numbers[j] ^ numbers[j + 1];
            }
        }
    }

    // Show sort result
    cout << "After sort:  ";
    for(int i = 0; i < arrysize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
