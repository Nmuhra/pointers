#include <iostream>

using namespace std;

void print(void* anything, char type){
  // we use a switch case to know which type of pointer to use based on the char that is in the argument.
  switch(type){
    // if the char is 'i' then it's an int pointer
    case 'i':
      cout << *((int*) anything) << endl;
      break;
    
    // if the char is 'c' then it's a char pointer
    case 'c':
      cout << *((char*) anything) << endl;
      break;
  }
}

int main() {
  int number = 8;
  char letter = 'n';

  // we use the address of the variable as the first argument, and we put the first character of the name of the datatype as the second argument.
  print (&number, 'i');
  print (&letter, 'c');
}
