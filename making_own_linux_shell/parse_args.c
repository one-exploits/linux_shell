#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define True 1
#define False 0
int read_command(char *);
int parse_command(char *,char **);
int main(int argc, char const *argv[])
{
    char rline[1024];
    char *argument[100]={"hdaadhdh","arquam","ls","jhnd","iquedy"};
    int status=read_command(rline);
    int arglen=parse_command(rline,argument);
    /*  strcat(arrya_address,"chack back slash");
       printf("%d %s",string_length,arrya_address);
       printf("\n%c",arrya_address[0]);
 */
printf("%d",arglen);
for (int  i = 0; i<arglen ; i++)
{
   printf("%s\n",argument[i]);
}

}


int read_command(char *arrya_address){
       int string_length;
       int max_char=1024;
       fgets(arrya_address,max_char,stdin);
       string_length=strlen(arrya_address);
       if (arrya_address[string_length-1]=='\n')
       {
           arrya_address[string_length-1]='\0';
       }
       if (arrya_address[string_length-1]=='\0')
       {
           return True;
       }
}

int parse_command(char *command_address,char **argument_address){
     int count=0;
     char *token;
     token=strtok(command_address," ");
     while (token!=NULL)
     {
        
       argument_address[count]=token;
       token=strtok(NULL," ");
       count++; 
     }
     argument_address[count]=NULL;

return count;
}