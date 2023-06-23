#include <iostream>

using namespace std;


int main() {
  // store user inout for the size of the array in an int variable.
  int size;
  cout << "Size: " << endl;
  cin >> size;

  // create a new array with "size" elements,
  // and have myArray point to the first element.
  int* myArray = new int[size];

  // allocate the value for every element in the array.
  for (int i = 0; i < size; i++){
    cout << "Element [" << i << "] :" << endl;
    // store user input in current index of the array.
    // use '*' to derefrence it, otherwise it's an address.
    cin >> *(myArray+i);
  }

  // output the full array.
  for (int i = 0; i < size; i++){
    cout << myArray[i] << "  ";
  }

  // deallocate the array.
  delete[] myArray;
  // deallocate the pointer.
  myArray = NULL;
  
}
