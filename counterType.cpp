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
    if (ct >= 0)
    {
        ct++;
      
    }
}

void counterType::decrementCounter()  //mut
{
    
    if (ct > 0)
    {
        ct--;

    }
    else
    {
        cout << "Counter is already at zero. Cannot decrement further." << endl;
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


void counterType::resetCounter(int count)
{
    ct = count;
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
