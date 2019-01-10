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
  
 Initilizes: 
  
  int numChar; // tracks Number of Characters in sentence
  int text[numChar] = {} // array for the sentnce 
  int c, count[26] = {0};
  
// Part 1: Calls user to unput a sentence under 1000 characters 
  
  printf("Type any sentence that comes to mind, just no more than 1000 characters please\n");
  gets(text);
  for(i = 0; text[i] != '\0'; ++i);{
    numChar++;
  }
  
  
//	Part 2: Code that Counts numbr of Characters in the sentence (Parts 1 and two should be simultanious)
 
      
//  Part 3: Code that runs through the Index of ASCII and compares it to the index of the user inputted sentence
  char* curr = text;
  printf("Analysis: ")
  for (ASCII Aaary){
  	for (Sentence Array[numChar){
  		if(compares Each letter to the current ASCII count){
      ASCII count++;
       printf("%c :\n" , c);
      }
		}
  )
}
int main (){
  int testArr[] = {3,5,6,2}; 
return 0;
}
