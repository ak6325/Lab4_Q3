#include <iostream> 
#include <iomanip>
using namespace std; 

// function to print a real number with a specified field width and precision
void print_real(float number, int fieldspace, int precision) { 
    cout << fixed << setprecision(precision) << setw(fieldspace) << number << endl; 
}

// function to update two real numbers by scaling them by a factor of 10
template<typename T> // allows the function to accept any data type
void update_scale(T& m1, T& m2, T m3 = 10) { // default value of m3 = 10
    // original values of m1 and m2
    T original_m1 = m1; 
    T original_m2 = m2; 
    // updated values of m1 and m2
    m1 = (original_m1 + original_m2) * m3; 
    m2 = (original_m1 - original_m2) * m3; 
}

// function to update two real numbers by scaling them by a factor of 10
int main() {
    float a, b; // declares two real numbers

    cout << "Enter two numbers: "; // prompts the user to enter two numbers
    cin >> a >> b; // reads the two numbers

    cout << "\nThe entered numbers are: \n"; // displays the numbers entered by the user

    // prints the two numbers with a field width of 7 and precision of 3
    print_real(a, 7, 3);
    print_real(b, 7, 3);

    update_scale(a, b); // updates the numbers by scaling them by a factor of 10

    cout << "\nThe new numbers are:\n"; // displays the updated numbers
    
    // prints the updated numbers with a field width of 7 and precision of 3
    print_real(a, 7, 3); 
    print_real(b, 7, 3); 

    return 0; // returns 0 to indicate successful completion
}