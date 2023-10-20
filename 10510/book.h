#ifndef _BOOK_H_
#define _BOOK_H_
#include <iostream>
#include "person.h"
using namespace std;
class Book{
    private:
        string mTitle;
        Person *mAuthor;
        int mPrice;
    public:
        Book(string title, Person * author);
        void print();
        void setPrice(int p);
};
#endif
