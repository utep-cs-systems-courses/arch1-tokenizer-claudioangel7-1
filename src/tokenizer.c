#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

/* Return true (non-zero) if c is a whitespace characer
   ('\t' or ' ').  
   Zero terminators are not printable (therefore false) */
int space_char(char c){
    if(c == ' ' || c == '\t'){
      return 0;
    }
    return 1;
}

/* Return true (non-zero) if c is a non-whitespace 
   character (not tab or space).  
   Zero terminators are not printable (therefore false) */ 
int non_space_char(char c){
    if(c == ' ' || c == '\t'){
      return 1; 
    }
    return 0;
}

/* Returns a pointer to the first character of the next 
   space-separated word in zero-terminated str.  Return a zero pointer if 
   str does not contain any words. */
char word_start(char *str){
  while(*str != '\0'){
    if(*str != ' ')       //return the pointer current position if character being pointed is letter.
      return *str;    
    else              //Move pointer if character being pointed is space
      str++;
  }
}

/* Returns a pointer terminator char following *word */
char *word_terminator(char *word){

  int isWord = 0;

  while(*word != '\0'){
    if(*word != ' ' && !isWord){    //Move the pointer until finding letter
      isWord = 1;
    }

    if((word[1] == '\0') && isWord){   //return the pointer at the next position if its a space
      return ++word;
    }
    word++;
  }
}

/* Counts the number of words in the string argument. */
int count_words(char *str){
  int count = 0;

  while(*str != '\0'){         
    if(*str != ' '|| *str == '\t' || *str == '\n'){ //Move the pointer until finding a letter
      count++;           //Increment by one the pointer if a word is found
    }
    str++;
  }
  return count;
}


/* Returns a fresly allocated new zero-terminated string 
   containing <len> chars from <inStr> */

//char *copy_str(char *inStr, short len){

//}

/* Returns a freshly allocated zero-terminated vector of freshly allocated 
   space-separated tokens from zero-terminated str.

   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string" 
     tokens[3] = 0
*/
//char **tokenize(char* str){

//}

/* Prints all tokens. */
//void print_tokens(char **tokens){
//}

/* Frees all tokens and the vector containing themx. */
//void free_tokens(char **tokens){
//}
