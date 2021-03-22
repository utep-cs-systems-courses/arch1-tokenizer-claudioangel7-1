#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "history.h"
#include "tokenizer.h"


int main()
{
    
    //List *history = init_history();
    int id[10];
    char str[100];
    char test[50];
    char line[50];
    char r;
    int ans = -1;
        
   
    while(ans != 0)
    {
        printf("\nTest menu\n");
        printf("1.space_char \n2.non_space_char \n3.word_start \n4.word_end \n5.count_words \n6.TOKENIZER \n7.print history");
        
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
                fgets(test, strlen(test), stdin);
                printf("\n%d\n", space_char(test[0]));
                break;
                
            case 2:
                printf("Testing non_space_char, input a word\n");
                fgets(test, strlen(test), stdin);
                printf("\n%d\n", non_space_char(test[0]));
                break;
                
            case 3:
                printf("Testing word_start, input a word\n");
                fgets(test, strlen(test), stdin);
                printf("\n%s\n", word_start(test));
                break;
                
            case 4:
                printf("Testing word_end, input a word\n");
                fgets(test, strlen(test), stdin);
                printf("\n%s\n", word_terminator(test));
                break;
                
            case 5:
                printf("Testing count_words, input a phrase\n");
                fgets(test, strlen(test), stdin);
                printf("\n%d\n", count_words(test));
                break;
                
            case 6:
                  while(1)
                    {
                    printf("Input a phrase: ");
                    fgets(str, 100, stdin);
                    
                    int len = strlen(str);
                    
                    if(str[len-1] == '\n' ){
                        str[len-1] = '\0';
                    }
                    
                    //add_history(history, str);
                    char **tokens = tokenize(str);
                    
                    print_tokens(tokens);
                    }
                
            case 10:
                ans = 0;
            /*
            case 7:
                print_history(history);
                
            case 8:
                char retrievedStr[50];
                printf("Input an id to retrieve a string item\n");
                fgets(id, 10, stdin);
                retrievedStr = get_history(history, id);
                char **tokens = tokenize(retrievedStr);
                print_tokens(tokens);
                
            case 9:
                printf("Free history\n");
                free_history(history);
                */
            
            
            default:
                break;
        }
    }
    return 1;
}
 
