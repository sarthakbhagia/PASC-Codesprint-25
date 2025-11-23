#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int compareChars(const void *a, const void *b){
    return (*(char*)a - *(char*)b);
}
int main() {
    int testCases;
    scanf("%d", &testCases);
    char S1[1000];
    char S2[1000];
    
    while(testCases--){
        scanf("%s %s",S1,S2);
        
        if(strlen(S1)!=strlen(S2)){
         printf("NO\n");
            }
        else{
           for(int i=0;i<strlen(S1);i++)
           {
               S1[i]=tolower(S1[i]);
               S2[i]=tolower(S2[i]);

           }
            
               qsort(S1, strlen(S1), sizeof(char), compareChars);
               qsort(S2, strlen(S2), sizeof(char), compareChars);
              
            
            int m=0;
            for(int i=0;i<strlen(S1);i++)
            {
            if(S1[i]!=S2[i])
            {
               m=1;
            }
            }
            if(m==1)
                printf("NO\n");
            else
                printf("YES\n");
            
        }
        
        
    }
}
    
