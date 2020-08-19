#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define True 1
#define False 0
int read_command(char *);
int main(int argc, char const *argv[])
{
    char rline[1024];
    int status=read_command(rline);
    /*  strcat(arrya_address,"chack back slash");
       printf("%d %s",string_length,arrya_address);
       printf("\n%c",arrya_address[0]);
 */
printf("%d",status);
    
    return 0;
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