/*
Name: Krish Garg
Roll No: 1024150236

Q6. Book and Textbook using single inheritance.
*/

#include <iostream>
using namespace std;

class Book {
protected:
    string title;
public:
    Book(string t) { title = t; }
};

class TextBook : public Book {
    string subject;
public:
    TextBook(string t, string s) : Book(t) {
        subject = s;
    }
    void display() {
        cout << title << " " << subject << endl;
    }
};

int main() {
    TextBook tb("Physics", "Mechanics");
    tb.display();
    return 0;
}
