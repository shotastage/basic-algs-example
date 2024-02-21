#include <iostream>


int main(int argc, char *argv[])
{
    using namespace std;

    int numbers[10] = {1, 4, 6, 7, 2, 9, 3, 21, 10, 11};

    // Before sort log
    cout << "Before sort: ";
    for(int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Main sort procedure
    int arrysize = sizeof(numbers)/sizeof(numbers[0]);
    for (int i = 0; i < arrysize-1; i++) {
        for (int j = 0; j < arrysize-i-1; j++) {
            if (numbers[j] != numbers[j + 1]) {
                numbers[j] = numbers[j] ^ numbers[j + 1];
                numbers[j + 1] = numbers[j] ^ numbers[j + 1];
                numbers[j] = numbers[j] ^ numbers[j + 1];
            }
        }
    }

    // Show sort result
    cout << "After sort:  ";
    for(int i = 0; i < 10; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
