#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "history.h"
#include "tokenizer.h"
#include "tokenizer.c"

int main()
{

    char str[100];
    char test[50];
    char line[50];
    char r;
    int ans = -1;
        
   
    while(ans != 0)
    {
        printf("\nTest menu\n");
        printf("1.space_char \n2.non_space_char \n3.word_start \n4.word_end \n5.count_words \n6.Tokenize \n7.exit \n8.TOKENIZER \n ");
        
        fgets (line, sizeof(line), stdin);
        r = sscanf (line, "%d", &ans);
        if ((r == 0) | (r == EOF)){
            printf ("\nChoose an option\n");
            ans = -1;
        }
        
        switch(ans)
        {
            case 1:
                printf("Testing space_char, input a word\n");
                fgets(test, sizeof(test), stdin);
                printf("\n%d\n", space_char(test[0]));
                break;
                
            case 2:
                printf("Testing non_space_char, input a word\n");
                fgets(test, sizeof(test), stdin);
                printf("\n%d\n", non_space_char(test[0]));
                break;
                
            case 3:
                printf("Testing word_start, input a word\n");
                fgets(test, sizeof(test), stdin);
                printf("\n%s\n", word_start(test));
                break;
                
            case 4:
                printf("Testing word_end, input a word\n");
                fgets(test, sizeof(test), stdin);
                printf("\n%s\n", word_terminator(test));
                break;
                
            case 5:
                printf("Testing count_words, input a phrase\n");
                fgets(test, sizeof(test), stdin);
                printf("\n%d\n", count_words(test));
                break;
                
            case 6:
                printf("Testing tokenize, input a phrase\n");
                fgets(test, sizeof(test), stdin);
                char **s = tokenize(test);
                print_tokens(s);
                break;
                
            case 8:
                  while(1)
                    {
                    printf("Input a phrase: ");
                    fgets(str, 100, stdin);
                    
                    int len = strlen(str);
                    
                    if(str[len-1] == '\n' ){
                        str[len-1] = '\0';
                    }
                    
                    char** tokens = tokenize(str);
                    
                    print_tokens(tokens);
                    }
                
            case 7:
                ans = 0;
            
            
            default:
                break;
        }
    }
    return 1;
}
 
