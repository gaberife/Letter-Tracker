#include <stdio>
#include <stdlib.h>
#include <string.h>


void printArray(int arr[] , int length) {
  printf("-----------Problem 1 1----------\n");
  int* watchV = arr; // points watchV to the front of the array
  printf("The elements in your Array are: \n");
  for( int i = 0; i < length; i++ , watchV++){
    printf("%d ", *watchV);
  }
}

/*
2) Write a function textData that asks the user to type a few sentences. It then counts how many of each
letter (ignoring case) and punctuation occur in the sentences, and prints out this data.
Notes:
 Treat upper- and lower-case letters as the same. So you’ll need to do some conversions. ASCII math
is probably the simplest way. In C, recall that you can basically just treat a char like an int and it will
use the ASCII value.
 You only have to count the following non-alphabetic characters:
<space> . ! ? ‘ ,
For any other characters encountered, just count it in an “all else” slot.
 Use an array to keep your counts. Again, use some ASCII math for the letters, and then a few special
cases with a switch statement for the non-alphabetic characters.
 Use the #define preprocessor directive to define constants like SPACE that specify the index in the
array for your <space> count. This will make your code much easier to read and debug – so you don’t
have to memorize what value index you use for each symbol.
 Your code should be able to handle up to 1000 characters typed.
 As always, use good coding practices here. Don’t do any exhaustive thing like make a separate
variable for every character, have a couple dozen ifs, etc.
*/

void textData() {
  printf("-----------Problem 2-----------\n");
  int cap = 1001;
  char text[cap];
  char* curr = text;
  printf("Type any sentence that comes to mind, just no more than 1000 characters please\n");
  gets(text);
  printf("Analysis \n");
  for(int c = 0 ; c <= 127; c++) {

    printf("%c :\n" , c);
  // for(int i = 0; i < strlen(text); i++)
  }
    }
}

int main (){
  int testArr[] = {3,5,6,2};
  
  
  
  
return 0;
}
