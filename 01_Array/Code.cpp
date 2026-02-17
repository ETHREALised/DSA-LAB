// To implement the CPP program for Insert the values in Array.

#include <iostream>
using namespace std;

int main() 
{
    int n;

        cout << "Enter number of elements: ";
            cin >> n;

                int arr[n];   // Declare array

                    cout << "Enter " << n << " values:\n";
                        
                            for(int i = 0; i < n; i++)
                                {
                                        cin >> arr[i];   // Insert values into array
                                            }

                                                cout << "\nArray elements are:\n";
                                                    
                                                        for(int i = 0; i < n; i++)
                                                            {
                                                                    cout << arr[i] << " ";
                                                                        }

                                                                            return 0;
                                                                            }