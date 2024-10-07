#include <iostream>
using namespace std;

void inputArray(int* arr, const int size) {
    cout << "Enter " << size << " elements for the array(through a space): ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

//task1
void copyArray(int* source, int* destination, const int size) {
    cout << "task 1" << endl;

    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }

    cout << "Destination array elements: ";
    for (int i = 0; i < size; i++) {
        cout << *(destination + i) << " ";
    }
    cout << endl << endl;
}

//task2
void reverseArray(int* arr, const int size) {
    cout << "task 2" << endl;

    cout << "Reversed array elements: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }
    cout << endl << endl;
}

//task3
void copyArrayInReverse(int* source, int* destination, const int size) {
    cout << "task 3" << endl;

    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + (size - 1 - i));
    }

    cout << "Destination array elements in reverse order: ";
    for (int i = 0; i < size; i++) {
        cout << *(destination + i) << " ";
    }
    cout << endl << endl;
}

int main() {
    const int size = 5;
    int source[size];
    int destination[size];

    inputArray(source, size);

    copyArray(source, destination, size);
    reverseArray(source, size);
    copyArrayInReverse(source, destination, size);

    return 0;
}
