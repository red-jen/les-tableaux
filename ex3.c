#include <stdio.h>
#include <stdlib.h>

int main(){
int size, s=0;

printf("inter the size of the array  : ");
scanf("%d",&size);
int tab[size];

for(int i=0;i<size;i++){
    printf("inter the value of index %d  : ",i);
    scanf("%d", &tab[i]);
}
for(int i=0;i<size;i++){
    s +=tab[i];
    
}
printf("the sum is %d",s);
    

return 0;
}