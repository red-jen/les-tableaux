#include <stdio.h>
// #include <stdlib.h>

int main(){
int size;
printf("inter the size of the array  : ");
scanf("%d",&size);
int tab[size];

for(int i=0;i<size;i++){
    printf("inter the value of index %d  : ",i);
    scanf("%d", &tab[i]);
}
for(int i=0;i<size;i++){
    printf("the value of index %d is %d",i,tab[i]);
    printf("\n");
}


return 0;
}