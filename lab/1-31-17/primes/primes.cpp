#include <iostream>
#include <vector>


using namespace std;

void primeFact(int/*, vector<int>&*/);

int main()
{
        int yourNumber;
            vector<int> primes;
                cout << "Enter your number: ";
                    cin >> yourNumber;


                        primeFact(yourNumber/*, primes*/);
}

void primeFact(int number/*, vector<int>& primes*/){

        for(int i = 2; i <= number; i++){
                    while(number%i == 0){
                                    number /= i;
                                                cout << i << " ";
                                                            //primes.push_back(i);
                                                            //        }
                                                            //            }
                                                            //
                                                            //                /*cout << endl;
                                                            //
                                                            //                    for(unsigned int i = 0; i <= primes.size(); i++){
                                                            //                            if(primes[i]!=0){
                                                            //                                        cout << primes[i] << " ";
                                                            //                                                }
                                                            //                                                    }*/
                                                            //
                                                            //                                                    }
