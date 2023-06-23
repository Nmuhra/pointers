#include <iostream>

using namespace std;

int main() {
  // Declarre array with 5 elements
  int array[5];

  // the the user populate the array.
  for (int i=0; i < 5; i++){
    cout<< "Element " << (i+1) <<": ";
    cin >> array[i];
  }

  // Output the array using a pointer.
  for( int i=0; i < 5; i++){
    cout << *(array + i) << "  ";
  }
}
