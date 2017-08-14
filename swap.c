#include <stdio.h>
#include <string.h>
void main(){
     char s[20],t;
     int i,j;
     scanf("%s",s);
     printf("\n\nOriginal String     : %s",s);
     for(i=0;i<strlen(s);i=i+2){
     t= s[i];
     s[i] = s[i+1];
     s[i+1] = t;
     }
     printf("\nAfter Swap String: %s",s);
}
