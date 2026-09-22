#include <iostream>
using namespace std;

template <class T>
class Result {
    T marks[5];
public:
    Result(T arr[5]) {
        for(int i = 0; i < 5; i++) {
            marks[i] = arr[i];
        }
    }
    
    void Total() {
        T total = 0;
        for(int i = 0; i < 5; i++) {
            total += marks[i];
        }
        cout << "Total marks: " << total << endl;
    }
    
    void Average() {
        T total = 0;
        for(int i = 0; i < 5; i++) {
            total += marks[i];
        }
        
        cout << "Average marks: " << total / 5 << endl;
    } 
    
    void Highest() {
        T highest = marks[0];
        for(int i = 1; i < 5; i++) {
            if(marks[i] > highest) {
                highest = marks[i];
            }
        }
        cout << "Highest marks: " << highest << endl;
    }
    
    void Lowest() {
        T lowest = marks[0];
        for(int i = 1; i < 5; i++) {
            if(marks[i] < lowest) {
                lowest = marks[i];
            }
        }
        cout << "Lowest marks: " << lowest << endl;
    }
};

int main() {
    int intMarks[5];
    cout << "Enter integer marks for 5 subjects: ";
    for(int i = 0; i < 5; i++) {
        cin >> intMarks[i];
    }
    
    Result<int> intResult(intMarks);
    intResult.Total();
    intResult.Average();
    intResult.Highest();
    intResult.Lowest();
    
    return 0;
}