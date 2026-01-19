#include <iostream>
using namespace std;

template <class T>
class Pair {
    T x;
    T y;
public:
    Pair();
    Pair(T v1, T v2);
    void Print()const;
    void Input();
    T GetX()const;
    T GetY()const;
    void SetX(T e);
    void SetY(T e);
}; // end T's scope

template <class T>
Pair<T>::Pair() {}

template <class T>
Pair<T>::Pair(T v1, T v2):x(v1), y(v2) {}

template <class T>
void Pair<T>::Print()const {
    cout << "<" << x << "," << y << ">";
}

template <class T>
void Pair<T>::Input() {
    T temp;
    cin >> temp;
    x = temp;
    cin >> temp;
    y = temp;
}

template <class T>
T Pair<T>::GetX()const {
    return x;
}

template <class T>
T Pair<T>::GetY()const {
    return y;
}

template <class T>
void Pair<T>::SetX(T e) {
    x = e;
}

template <class T>
void Pair<T>::SetY(T e) {
    y = e;
}


int main() {
    Pair<int> p1(33, -22); // have to specify the type in <> after Pair
    p1.Print(); cout << endl;
    p1.SetX(443);
    p1.SetY(99);
    p1.Print(); cout << endl;
    cout << "X: " << p1.GetX() << endl;
    cout << "Y: " << p1.GetY() << endl;
    cout << "Enter X and Y: ";
    p1.Input();
    p1.Print(); cout << endl;

    return 0;
}