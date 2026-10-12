#include <iostream>
using namespace std;
struct Book {
    string title;
    float price;
};
int main() {
    Book* myBook = new Book{"malgudi days", 67.50};
    cout << "Book Title: " << myBook->title << endl;
    cout << "Price: Rs. " << myBook->price << endl;
    delete myBook;
    return 0;
}