#include "stack.h"
#include "positivestack.h"
int main()
{
    Stack s;
    PositiveStack ps;

    s.insert(1);
    s.insert(2);
    s.insert(-3);
    s.insert(4);
    s.show();

    ps.insert(1);
    ps.insert(2);
    ps.insert(-3);
    ps.insert(4);
    ps.show();
}
