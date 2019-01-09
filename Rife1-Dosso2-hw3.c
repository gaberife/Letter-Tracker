#include <stdio>
#include <stdlib.h>
#include <string.h>

/*
Write a function printArray that takes two arguments: an array of ints and the length of the array. It
should print out the contents of the array. BUT, just for practice, do not use any [ ] notation inside of
your function. You can use it to declare the formal parameter if you want (for example, int arr[]),
but don’t use [ ] for indexing. Instead, use pointer arithmetic to access the elements of the array, one at
a time.
*/

void printArray(int arr[],  ){

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

void textData(){

}
/* 
3) When you’re done with all of the above, make a main in which you call each of the functions you
wrote in the problems above. For printArray, give it an array containing the numbers 3, 5, 6, 2, just as an
example.
*/
