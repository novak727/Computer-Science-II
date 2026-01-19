#include <iostream>
using namespace std;

const int MAX = 20;
template <class T>
void PrintArray(T ar[], int size); // end of scope of T

template <class T>
void FillByUser(T ar[], int& size);

int main() {
    int array[MAX] = {10, 20, 30};
    int size = 3;
    PrintArray(array, size);
    cout << endl;
    FillByUser(array, size);
    cout << endl;
    PrintArray(array, size);
    cout << endl;

    return 0;
}

template <class T> // known to the end of the routine
void PrintArray(T ar[], int size) {
    for (int i = 0; i < size; i++)
        cout << i << ": " << ar[i] << endl;
}

template <class T>
void FillByUser(T ar[], int& size) {
    cout << "How many (less than or equal to " << MAX << ")? ";
    cin >> size;
    if (size > MAX || size < 0)
        size = MAX;
    for (int i = 0; i < size; i++) {
        T temp;
        cout << "Val? ";
        cin >> temp;
        ar[i] = temp;
    }
}