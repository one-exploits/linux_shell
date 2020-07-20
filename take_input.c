#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<readline/readline.h>
#include<readline/history.h>
#include<string.h>
#include<unistd.h>
int take_input(char *);

int take_input(char *pointer){
    char *command;

    command=readline("\033[31mroot\033[93m@\033[32mlocalhost:/#");
    if (strlen(command)!=0)
    {
        add_history(command);
         strcpy(pointer,command);
         return 0;
    }
    else
    {
        return 1;
    }
    
    
    

}
int main(){
    while (1)
    {
        
    
    
    char cmd[1024];
      int status=take_input(cmd);
      printf("\n%s",cmd);
      printf("status %d",status);
      
      
    }
    return 0;
   }