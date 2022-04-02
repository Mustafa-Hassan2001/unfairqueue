#include <iostream>
#include "unfairqueue.h"

int main(int argc, char *argv[])
{
    UnfairQueue myQueue;
    myQueue.push('a');
    myQueue.push('B');
    myQueue.push('C');
    myQueue.push('D');
    myQueue.push('d');
    myQueue.push('e');
    myQueue.push('Q');
    myQueue.push('Z');



    std::cout<<"push test " << myQueue.front() << " " <<myQueue.size()<< std::endl;
     myQueue.pop();
    std::cout<<"pop test " << myQueue.front() << " " <<myQueue.size()<< std::endl;
     myQueue.push('Z');
    std::cout<<"Push (Z) test " << myQueue.front() << " " <<myQueue.size()<< std::endl;
      myQueue.pop();
    std::cout<<"pop test " << myQueue.front() << " " <<myQueue.size()<< std::endl;
    return 0;
}
