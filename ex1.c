#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tab[]={1,2,3,4,5,6,7,8,9,};
    for(int i=0;i<=sizeof(tab)/sizeof(tab[0]);i++){
        printf("%d\n",tab[i]);
    }
    return 0;

}