// Counter Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "counterType.h"

using namespace std;

int main()
{
    counterType myCount;
    counterType userCount;

    int count;
    

    //Set myCount
    myCount.setCounter(10);                         //Line 18

    cout << "Line 2: myCount: ";                       //Line 20
    myCount.printCounter();  //print the time of myCounter   Line 21
    cout << endl;                                      //Line 22

    cout << "Line 5: userCount: ";                     //Line 24
    userCount.printCounter(); //print the time of yourCounter Line 25
    cout << endl;                                      //Line 26

    //Set the time of userCount
    userCount.setCounter(5);                           //Line 29

    cout << "Line 31: After setting,userCount: ";      //Line 31
    userCount.printCounter(); //print the time of yourCounter Line 32
    cout << endl;                                      //Line 33

    //Compare myCount and userCount
    if (myCount.equalCounter(userCount))                  //Line 36
        cout << "Line 37: Both counts are equal."
        << endl;                                      //Line 38
    else                                               //Line 39
        cout << "Line 40: The two counts are not equal."
        << endl;                                        //Line 41

    cout << "Line 43: Enter the count: ";                //Line 43
    cin >> count ;                                     //Line 44  put 6
    cout << endl;                                      //Line 45

    //Set the time of myClock using the value of the
    //variables counter
    myCount.setCounter(count);                          //Line 49

    cout << "Line 51: New myCount: ";                    //Line 51
    myCount.printCounter();   //print the time of myCount   Line 52
    cout << endl;                                        //Line 53

    //increment the time of myCount by one 
    myCount.incrementCounter();                         //Line 56

    cout << "Line 58: After incrementing myCount by "
        << "one, myCount: ";                            //Line 59
    myCount.printCounter();   //print the time of myCounter  Line 60
    cout << endl;                                       //Line 61

    //decrement the time of myCount by one 
    myCount.decrementCounter();                        //Line 64

    cout << "Line 66: After decrementing myCount by "
        << "one, myCount: ";                            //Line 67
    myCount.printCounter();   //print the time of myCounter   Line 68
    cout << endl;                                      //Line 69

    //Retrieve the count of the 
    //object myCount
    myCount.getCounter(count);                          //Line 73

    //Output the value of count  
    cout << "Line 76: count = " << count
       << endl;                                           //Line 77

    //Reset the count of the 
    //object myCount
    myCount.resetCounter(count);                         //Line 81

    //Output the value of count 
    cout << "Line 84: After reset myCount "
        << " myCount: ";
    myCount.printCounter();   //print the time of myCount   Line 86
    cout << endl;                                      //Line 87

    // Attempt to decrement the counter after reset
    cout << "Counter after attempting to decrement: "; // line 90
    myCount.decrementCounter();
    cout << "Line 92: number after decrementing myCount ";  //Line 92
    myCount.printCounter();   //print count of myCount   Line 93
    cout << endl;

    return 0;
}//end main
