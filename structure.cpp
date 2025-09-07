// This line adds input/output features like cout and cin
#include <iostream>   

// This lets us use "cout" and "cin" directly without writing "std::cout"
using namespace std;  

// Main function -> every C++ program starts from here
int main() {
    // Make a variable (box) to store a number
    int number;  
    
    // Ask the user to type a number
    cout << "Enter a number: " << endl;  // endl moves to the next line
    
    // Take input from the user and put it inside "number"
    cin >> number;  
    
    // Show the number back to the user
    cout << "You entered: " << number << endl;  
    
    // End the program successfully
    return 0;  
}
