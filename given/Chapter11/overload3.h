#include <iostream>
using namespace std;

class NumberArray {
private:
    double *aPtr;
    int arraySize;
public:
    // Copy assignment and copy constructor
    NumberArray& operator=(const NumberArray &right);
    NumberArray(const NumberArray &);

    // Default constructor and regular constructor
    NumberArray();
    NumberArray(int size, double value);

    // Move Assignment and Move Constructor
    NumberArray& operator=(NumberArray &&);
    NumberArray(NumberArray &&);

    // Destructor
    ~NumberArray();

    void print() const;
    void setValue(double value);
};
