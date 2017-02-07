// This program demonstrates the Is-A 
// relation in inheritance.
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

// Base class
class Dog
{
protected:
    double weight;
public:
    Dog(double w)
    {
        weight = w;
    }
    virtual void bark() const
    {
        cout << "I am a dog weighing "
            << weight << " pounds." << endl;
    }
};

// A SheepDog is a special type of Dog
class SheepDog :public Dog
{
    int numberSheep;
public:
    SheepDog(double w, int nSheep) : Dog(w)
    {
        numberSheep = nSheep; 
    }
    void bark() const override
    {
        cout << "I am a sheepdog weighing "
            << weight << " pounds \n   and guarding "
            << numberSheep << " sheep." << endl;
    }
};

int main()
{
    // Create a vector of  dogs    
    vector<shared_ptr<Dog>> kennel
    { 
        make_shared<Dog>(40.5),
        make_shared<SheepDog>(45.3, 50),
        make_shared<Dog>(24.7)
    };

    // Walk by each kennel and make the dog bark
    for (int k = 0; k < kennel.size(); k++)
    {
        cout << k + 1 << ": ";
        kennel[k]->bark();
    }
    return 0;
}