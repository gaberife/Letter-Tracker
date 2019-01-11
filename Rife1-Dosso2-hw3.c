#include <stdio>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void printArray(int arr[] , int length) {
  printf("-----------Problem 1 1----------\n");
  int* watchV = arr; // points watchV to the front of the array
  printf("The elements in your Array are: \n");
  for( int i = 0; i < length; i++ , watchV++){
    printf("%d ", *watchV);
  }
}

void textData() {
  printf("-----------Problem 2-----------\n");
  char text[1001];//establishes array for the input 
  int c = 0, f = 0, count[123] = {0}, x;
  char spec[6] = {' ','.',',','!','?','\''};

  printf("Type any sentence that comes to mind, just no more than 1000 characters please\n");
  printf("\n");
  gets(text);
//Conversion -- Done
  while(text[c]) {
    text[c] = tolower(text[c]);
    c++;
    }
  printf("\n");
//Counting -- Done 
  while (text[f] != '\0') {
    if (text[f] <= 'z') {
    x = text[f];
    count[x]++;
  }
  f++;
}
  for (int i = 97; i < 123; i++){
    printf("%c : %d\n", i, count[i]);
  }
  for (int i = 0; i < 6; i++){
    printf("%c : %d\n", spec[i], count[spec[i]]);
  }
}

int main (){
	testArr[] = {3,5,6,2}; 
	textData();
	return 0;
}
