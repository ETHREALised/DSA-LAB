// To implement the CPP program for Delete the values in Array.

#include <iostream>
using namespace std;

int main() {
    int arr[100], size, value;
        
            cout << "Enter number of elements: ";
                cin >> size;

                    cout << "Enter elements:\n";
                        for(int i = 0; i < size; i++) {
                                cin >> arr[i];
                                    }

                                        cout << "Enter value to delete: ";
                                            cin >> value;

                                                int index = -1;

                                                    // Find the index of the value
                                                        for(int i = 0; i < size; i++) {
                                                                if(arr[i] == value) {
                                                                            index = i;
                                                                                        break;
                                                                                                }
                                                                                                    }

                                                                                                        if(index == -1) {
                                                                                                                cout << "Value not found in array.\n";
                                                                                                                    } else {
                                                                                                                            // Shift elements to left
                                                                                                                                    for(int i = index; i < size - 1; i++) {
                                                                                                                                                arr[i] = arr[i + 1];
                                                                                                                                                        }

                                                                                                                                                                size--;  // Reduce array size

                                                                                                                                                                        cout << "Array after deletion:\n";
                                                                                                                                                                                for(int i = 0; i < size; i++) {
                                                                                                                                                                                            cout << arr[i] << " ";
                                                                                                                                                                                                    }
                                                                                                                                                                                                        }

                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                            }