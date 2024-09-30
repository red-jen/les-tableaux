#include <stdio.h>

#include <stdlib.h>

int main() {
int size;

int max=0;
printf("inter the size of the array :");
scanf("%d", &size);
int tab[size];

for(int i = 0;i<size;i++){
    printf("inter the value of index %d  : ",i);
    scanf("%d", &tab[i]);
}
max=tab[0];
for(int i=1;i<size;i++){
    if(tab[i]<max){
max = tab[i];
    }
    
}
printf("the minimum number is : %d",max);




return 0;
}