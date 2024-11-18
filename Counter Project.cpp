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
    myCount.setCounter(4);                         //Line 1

    cout << "Line 2: myCount: ";                       //Line 2
    myCount.printCounter();  //print the time of myClock    Line 3
    cout << endl;                                      //Line 4

    cout << "Line 5: yourClock: ";                     //Line 5
    userCount.printCounter(); //print the time of yourClock Line 6
    cout << endl;                                      //Line 7

    //Set the time of userCount
    userCount.setCounter(5);                           //Line 8

    cout << "Line 9: After setting,userCount: ";      //Line 9
    userCount.printCounter(); //print the time of yourClock Line 10
    cout << endl;                                      //Line 11

    //Compare myCount and userCount
    if (myCount.equalCounter(userCount))                  //Line 12
        cout << "Line 13: Both times are equal."
        << endl;                                      //Line 13
    else                                               //Line 14
        cout << "Line 15: The two times are not equal."
        << endl;                                        //Line 15

    cout << "Line 16: Enter the count";                //Line 16
    cin >> count ;                                     //Line 17  put 6
    cout << endl;                                      //Line 18

    //Set the time of myClock using the value of the
    //variables counter
    myCount.setCounter(count);                        //Line 19

    cout << "Line 20: New myCount: ";                  //Line 20
    myCount.printCounter();   //print the time of myCount   Line 21
    cout << endl;                                      //Line 22

    //increment the time of myCount by one 
    myCount.incrementCounter();                        //Line 23

    cout << "Line 24: After incrementing myCount by "
        << "one, myCount: ";                   //Line 24
    myCount.printCounter();   //print the time of myClock   Line 25
    cout << endl;                                      //Line 26

    //decrement the time of myCount by one 
    myCount.decrementCounter();                        //Line 28

    cout << "Line 29: After decrementing myCount by "
        << "one, myCount: ";                   //Line 31
    myCount.printCounter();   //print the time of myClock   Line 32
    cout << endl;                                      //Line 33

    //Retrieve the count of the 
    //object myClock
    myCount.getCounter(count);                      //Line 37

    //Output the value of count  
    cout << "Line 39: count = " << count
       << endl;                                           //Line 39

    return 0;
}//end main
