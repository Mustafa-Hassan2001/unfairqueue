#ifndef UNFAIRQUEUE_H
#define UNFAIRQUEUE_H
#include <iostream>



class UnfairQueue
{
public:
    UnfairQueue();

    char* front();
    void pop();
    void push(char element);

    size_t size();


    size_t m_Size;
    char *m_Data;
};

#endif // UNFAIRQUEUE_H
