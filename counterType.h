#pragma once // Ensures the file is included only once

class counterType
{
    //counterType.h, the specification file for the class counterType

    public:
        void setCounter(int count);
        //Function to set the time.
        //The time is set according to the parameters.
        //Postcondition: hr = hours; min = minutes; 
        //               sec = seconds;
        //               The function checks whether the 
        //               values of hours, minutes, and seconds 
        //               are valid. If a value is invalid, the 
        //               default value 0 is assigned.

        void getCounter(int& count) const; //(int& count) const;
        //Function to return and set count.
        //Postcondition: count = ct; 

        void printCounter() const;
        //Function to print the time.
        //Postcondition: The time is printed in the form
        //               hh:mm:ss.

        void  resetCounter();
        //Function to increment the time by one second.
        //Postcondition: The time is incremented by one second.
        //               If the before-increment time is 
        //               23:59:59, the time is reset to 00:00:00.

        bool equalCounter(const counterType& othercounter) const;
            // not sure


        void incrementCounter();
        //Function to increment the time by one minute.
        //Postcondition: The time is incremented by one minute. 
        //               If the before-increment time is 
        //               23:59:53, the time is reset to 00:00:53.

        void decrementCounter();
        //Function to increment.
        //Postcondition: The couint is incremented.
        //               If the before-increment is 
        //               not 0, the count is reset to 0.
        
        //(const clockType& otherClock) const;
        //Function to compare the two times.
        //Postcondition: Returns true if this time is equal to 
        //               otherClock; otherwise, returns false.

        counterType(int count);
        //Constructor with parameters
        //The count is set according to the parameters.
        //Postcondition: ct = count; 
        //               The constructor checks whether the 
        //               values of count are valid. If a value is invalid, the 
        //               default value 0 is assigned.

        counterType();
        //Default constructor
        //The count is set to 0.
        //Postcondition: count = 0; 

    private:
        int ct;  //variable to store the count
       
    };

};

