#pragma once // Ensures the file is included only once;  

class counterType
{
    //counterType.h, the specification file for the class counterType; class definition

 public:
    void setCounter(int count);
    //Function to set the counter.
    //Pre: The counter is set according to the parameters, must be nonnegative.
    //Postcondition: ct = count;
    //               The function checks whether the 
    //               values is valid. If a value is invalid, the 
    //               default value 0 is assigned.

    void getCounter(int& count) const; //(int& count) const;
    //Function to return and set count.
    //Postcondition: count = ct; 

    void printCounter() const;
    //Function to print the count.
    //Postcondition: The count is printed 

    void resetCounter(int count);
    // Pre: accepts count, Function to reset. 
    //Postcondition: The count is reset to 0.

    //              .

    bool equalCounter(const counterType& othercounter) const;
    // Pre: accepts two objects and compares them
    // Postcondition: Returns true if the counts are equal to 
    //               otherClock; otherwise, returns false.



    void incrementCounter();
    //Pre: accepts nonnegative number, Function to increment the count.
    //Postcondition: The count is incremented by one . 
    //               If the before-increment count is 
    //               1, after the count is 2. 

    void decrementCounter();
    //Pre: accepts nonnegative number, Function to decrement the count.
    //Postcondition: The count is decremented by one . 
    //               If the before-decrement count is 
    //               1, after the count is 0.

    counterType(int count);
    //Constructor with parameters
    //The count is set according to the parameters, count either accepted as a nonnegative number, or set to 0.
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

