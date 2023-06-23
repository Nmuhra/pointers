#include <iostream>

using namespace std;

int main() {
  // implementing the 2D array.
  
  int rows,cols;
  // get user input for the dimensions.
  cout << "Rows, Cols: " << endl;
  cin >> rows >> cols;

  // dynamically allocate the dimensions of the array
  int** table = new int*[rows];
  for (int i = 0; i < rows; i++){
    table[i] = new int[cols];
  }

  // deallocating the array
  // we start from the end, last array and we build up to the 
  // pointer of the array of pointers (**table)

  // delete the outermost arrays
  for (int i = 0; i < rows; i++){
    delete[] table[i];
  }
  // delete the array of pointers
  delete[] table;
  // set the pointer **table to NULL
  table = NULL;
}
