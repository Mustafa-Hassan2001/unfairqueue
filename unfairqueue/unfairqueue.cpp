#include "unfairqueue.h"

UnfairQueue::UnfairQueue()
{
 m_Size=0;
}

char *UnfairQueue::front()
{
    return m_Data;
}

void UnfairQueue::pop()
{
    char* TempData = new char[--m_Size];
    memcpy(TempData,m_Data+1,m_Size);
    delete m_Data;
    m_Data = TempData;
}

void UnfairQueue::push(char element)
{
    char* TempData = new char[m_Size+1];
    size_t insert = m_Size;
    if(!isupper(element) && m_Size)
    {
    for(size_t i=0;i<m_Size;++i)
    {
       if(isupper(m_Data[i]))
       {
        insert = i;
        TempData[insert] = element;
        memcpy(TempData,m_Data,insert);
        memcpy(TempData+insert+1,m_Data+insert,m_Size-insert);
        break;
       }
    }
    }
    else
    {
    TempData[m_Size] = element;
    memcpy(TempData,m_Data,m_Size);
    }
    delete m_Data;
    m_Data = TempData;
    ++m_Size;
}

size_t UnfairQueue::size()
{
    return m_Size;
}
