#include <iostream>
using namespace std;

template <class T>
class Pair {
    T x;
    T y;
    
public:
    Pair(T a, T b) : x(a), y(b) {}

    T max() { return x > y ? x : y; }
    T min() { return x < y ? x : y; }
}; 
int main() {
    Pair<int> p1(10, 12); 
    
    cout << p1.max() << endl;
    cout << p1.min();
    
    return 0;
}