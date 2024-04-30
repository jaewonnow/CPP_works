#include <iostream>
using namespace std;

class Link {
    public:
        Link(){}
        int data_;
        Link * next_;
    friend class List;
};


class List {
    public:
        List():first_(0){}
        bool find(int n){
            Link * p;
            for (p=first_; p; p=p->next_){
                if (p->data_ == n) return true;
            }
            return false;
        }
        void insert(int data){
            Link * t = new Link();
            t->next_ = first_;
            t->data_ = data;
            first_ = t;
        }
        void printall(){
            Link * p;
            cout << "START: ";
            for (p=first_; p; p = p->next_){
                cout << p->data_ << " --> " ;
            }
            cout << "END" << endl;
        }
    protected:
        Link * first_;
};

class Set:private List{
    public:
        bool find(int n){
            List::find(n);
        }
        void insert(int data){
            if(!find(data)) List::insert(data);
        }
        void printall(){
            List::printall();
        }

};

int main(){
    List l;
    l.insert(1); l.insert(2); l.insert(3); l.insert(2);
    l.printall();

    Set s;
    s.insert(1);  s.insert(2); s.insert(3); s.insert(2);
    s.printall();

}