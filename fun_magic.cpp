#include <iostream>
using namespace std;

// Forward declaration of class Magic
class Magic;

// First class Fun
class Fun {
private:
    float number;
public:
    void getData() {
        cout << "Enter the number - ";
        cin >> number;
    }
    // Declaring friend function to compare data members
    friend void compareNumbers(Fun, Magic);
};

// Second class Magic
class Magic {
private:
    float number;
public:
    void getData() {
        cout << "Enter the number - ";
        cin >> number;
    }
    // Declaring the same friend function
    friend void compareNumbers(Fun, Magic);
};

// Friend function definition
void compareNumbers(Fun f, Magic m) {
    if(f.number > m.number) {
        cout << "Data member of fun is greater." << endl;
    }
    else if(m.number > f.number) {
        cout << "Data member of magic is greater." << endl;
    }
    else {
        cout << "Both data members are equal." << endl;
    }
}

int main() {
    Fun f;
    Magic m;
    
    // Getting input for both objects
    f.getData();
    m.getData();
    
    // Comparing the numbers
    compareNumbers(f, m);
    
    return 0;
}