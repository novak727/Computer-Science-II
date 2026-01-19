#include <iostream>
using namespace std;

int SumIt(int N);
int SumRec(int N);
int FibIt(int N);
int FibRec(int N);
// TODO: Add recursive print routine
void PrintRec(int N);

int main() {
    int input;
    cout << "Enter an N: ";
    cin >> input;

    while (input > 0) {
        cout << "SumIt(" << input << "): " << SumIt(input) << endl;
        cout << "SumRec(" << input << "): " << SumRec(input) << endl;
        cout << "FibIt(" << input << "): " << FibIt(input) << endl;
        cout << "FibRec(" << input << "): " << FibRec(input) << endl;
        cout << "PrintRec(" << input << "): ";
        PrintRec(input);
        cout << "Enter an N: ";
        cin >> input;
    }

    return 0;
}

int SumIt(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N;
        N -= 1;
    }

    return sum;
}

int SumRec(int N) {
    if (N > 1)
        return N + SumRec(N-1);
    return N;
}

int FibIt(int N) {
    int first = 1;
    int second = 1;
    for (int i = 2; i <= N; i++) {
        int temp = first;
        first = second;
        second = first + temp;
    }
    return first;
}

int FibRec(int N) {
    if (N == 1 || N == 2)
        return 1;
    else
        return FibRec(N-1) + FibRec(N-2);
}

void PrintRec(int N) {
    for (int i = N; i > 0; i--)
        cout << i << " ";
    cout << endl;
}
