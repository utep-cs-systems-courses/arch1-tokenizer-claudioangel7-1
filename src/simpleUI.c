#include <stdio.h>
int main(){
 
  char ans[50];
  while(1){
    printf("Input a word or '0' to exit: ");
    fgets(ans,50,stdin);
    
    if(ans[0] == '0')
      break;
    printf("%s\n",ans);
  }
  return (0);
}
