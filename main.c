#include "stack.h"

int main()
{
    STACK* stk = (STACK*) calloc(1, sizeof(STACK));
    StackConstructor(stk, 10);
    ELEM a = 0;
    for (double i = 1; i < 100; i++)
        StackPush(stk, i);

    for (int j = 0; j < 95; j++)
    {
        a = StackPop(stk);
    }
    PrintStack(stk);
    StackDestructor(stk);
    return 0;
}
