#include <iostream>


int main()
{
    using namespace std;

    int numbers[10] = {21, 1, 4, 10, 6, 7, 12, 9, 3, 31};

    // Before sort log
    cout << "Before sort: ";
    for(int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Show sort result
    cout << "After sort:  ";
    for(int i = 0; i < 10; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
