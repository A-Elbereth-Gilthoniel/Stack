#include "stack.h"

int main()
{
    STACK stk = {};
    ELEM a = 0;
    StackConstructor(&stk, 5);
    StackPush(&stk, 20);
    StackPush(&stk, 3);
    StackPush(&stk, 3);
    StackPush(&stk, 1);
    StackPush(&stk, 7);
    for (double i = 1; i < 100; i++)
        StackPush(&stk, i);

    for (int j = 0; j < 95; j++)
    {
        a = StackPop(&stk);
    }
    //a = StackPop(stk);
    printf(SPEC" aka\n", a);


    PrintStack(&stk);
    StackDestructor(&stk);
    return 0;


}
