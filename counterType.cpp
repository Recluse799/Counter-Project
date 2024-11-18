//Implementation File for the class counterType

#include <iostream> 
#include "counterType.h"


using namespace std;

void counterType::setCounter(int count)
{
    if (0 <= count)
        ct = count;
    else
        ct = 0;
}

void counterType::getCounter(int& count) const //accessor
{
    count = ct;
   
}

void counterType::incrementCounter()  //mutator
{
    ct++;
    if (ct >= 0)
    {
        //min = 0;
        incrementCounter();
    }
}

void counterType::decrementCounter()  //mut
{
    ct--;
    if (ct >= 1)
    {
       // min = 0;
        decrementCounter();
    }
}

void counterType::printCounter() const
{
    if (ct >= 0)
        
    cout << ct << ":";


}

bool counterType::equalCounter(const counterType& othercounter) const //mut
{
    return (ct == othercounter.ct);
}


void counterType::resetCounter()
{
   ct = 0;
}

counterType::counterType(int count)  //mutator, same as setcounter
{
    if (0 >= count)
        ct = count;
    else
        ct = 0;

}

counterType::counterType()  //default constructor
{
    ct = 0;
    
}
