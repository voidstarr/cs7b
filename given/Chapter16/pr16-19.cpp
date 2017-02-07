// This program solves the word transformation puzzle. 
#include <iostream>  
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Prototype
void sort(char str[], int size, vector<int>& transpositions);

int main()
{
    // The two words and a copy of the first word
    char str1[] = "spot";
    char str1Copy[] = "spot";
    char str2[] = "stop";

    // These vectors hold the list of transpositions
    vector<int> transpose;
    vector<int> reverse_transpose;

    // Sort the two words
    cout << "The first word is " << str1 <<  endl
         << "The second word is " << str2 << endl;
    sort(str1, 4, transpose);
    sort(str2, 4, reverse_transpose);

    // Apply the first list of transpositions
    cout << "The transformation steps are: " << endl;
    cout << str1Copy <<  " ";
    for (int k = 0; k < transpose.size(); k++)
    {
        int index = transpose[k];        
        swap(str1Copy[index], str1Copy[index + 1]);
        cout << str1Copy << " ";
    }
    // Apply the second list of transpositions in reverse order
    for (int k = reverse_transpose.size()-1; k >=0 ; k--)
    {
        int index = reverse_transpose[k];
        swap(str1Copy[index], str1Copy[index + 1]);
        cout << str1Copy << " ";
    }
    cout << endl;
    return 0;
}

//*************************************************************
// This is a version of Bubblesort that saves a list of all   *
// transpositions that are needed to sort the list            *
//*************************************************************
void sort(char str[], int size, vector<int>& transpositions)
{
    // Last index of portion yet to be sorted
    int upperBound = size-1; 

    while (upperBound  > 0)
    {
        for (int k = 0; k < upperBound; k++ )
        {
            if (str[k] > str[k+1])
            {
                // Save the swap index
                transpositions.push_back(k);
                swap(str[k], str[k+1]);
            }
        }
        upperBound--;
    }
}


