#include <iostream>
#include <string>
using namespace std;

class Library {
protected:
    string bookname;
    string author;

public:
    Library(string n, string a) : bookname(n), author(a) {}

    void display() {
        cout << "The book name is: " << bookname << endl;
        cout << "The author is: " << author << endl;
    }
};

class Ebook : public Library {
private:
    int size;
    string format;

public:
    Ebook(string n, string a, int s, string f) : Library(n, a), size(s), format(f) {}

    void display() {
        Library::display();
        cout << "The file size of the ebook is " << size << " MB" << endl;
        cout << "The file format is: " << format << endl;
    }
};

int main() {
    Ebook E[3] = {
        Ebook("Physics Galaxy", "H.C.V", 10, "txt"),
        Ebook("Chemistry", "Ojha sir", 12, "txt"),
        Ebook("Black Book", "xyz", 13, "txt")
    };

    for (int i = 0; i < 3; i++) {
        cout << "The details of the book[" << i + 1 << "] are:" << endl;
        E[i].display();
        cout << endl;
    }

    return 0;
}