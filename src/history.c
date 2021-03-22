#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int counter;

/* Initialize the linked list to keep the history. */
List* init_history()
{
  List *temp;
  temp = (*List)malloc(sizeof(List));
  return temp;
}

/* Add a history item to the end of the list.
   List* list - the linked list
   char* str - the string to store
*/


void add_history(List *list, char *str)
{
    counter++;
    
    if(counter == 1){
        Item *item_add = (*Item)malloc(sizeof(Item));
        item_add->id = counter;
        item_add->str;
        list->root = item_add;
    }else{
        Item *node = list->root;
        while(node->next != NULL){
            node = node->next;
        }
        node->next = (*Item)malloc(sizeof(Item));
        node->next->str;
        node->next->next = NULL;
        node->next->id = counter;
    }
    
}

/* Retrieve the string stored in the node where Item->id == id.
   List* list - the linked list
   int id - the id of the Item to find */


char *get_history(List *list, int id)
{
    Item *node = list->root;
    while(node != NULL){
        if(node->id == id){
            return node->str;
        }
        node = node->str;
    }
    
}

// *Print the entire contents of the list. */


void print_history(List *list)
{
    Item *node = list-> root;
    while(node != NULL){
        printf("%d: \"%s\"\n", node->id, node, node->str);
        node = node->next;
    }
}

// *Free the history list and the strings it references. */

void free_history(List *list)
{
    Item *node;
    while((node = list->root) != NULL){
        list->root = list->root->next;
        free(node);
    }
}

