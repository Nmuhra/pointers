#include <iostream>

using namespace std;

// this function takes the array and the size of it as arguments as well as 2 addresses which represent min and max.
void minAndMax(int arr[], int size, int *min, int *max) {
  // finding min
  for (int i = 1; i < size; i++) {
    // We use '*' before min to derefrence it, otherwise it would take it as an address and we would get an error.
    if (arr[i] < *min)
      *min = arr[i];
  }
  // finding max
  for (int i = 1; i < size; i++) {
    // We use '*' before max to derefrence it, otherwise it would take it as an address and we would get an error.
    if (arr[i] > *max)
      *max = arr[i];
  }
}

int main() {
  int numbers[5] = {2, -7, 4, 15, -3};
  // initialise min and max to the first element of the array.
  int min = numbers[0];
  int max = numbers[0];

  // call the function, using the '&' before min and max because it take pointers so it has to be an address.
  minAndMax(numbers, 5, &min, &max);

  // output the minimun and maximum values in the array.
  cout << "Min: " << min << endl;
  cout << "Max: " << max << endl;
}
