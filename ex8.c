#include <stdio.h>
// #include <stdlib.h>

int main(){
int size;
printf("inter the size of the array  : ");
scanf("%d",&size);
int tab[size];
int copie[size];

for(int i=0;i<size;i++){
    printf("inter the value of index %d  : ",i);
    scanf("%d", &tab[i]);
}
printf("le tableaux originale : ");
for(int i=0;i<size;i++){
    copie[i]=tab[i];
    
    printf("%d   ",tab[i]);
}
printf("\n");
printf("la copie de tableaux");
for(int i=0;i<size;i++){
    tab [i]=copie[i];
    
    printf(" %d   ",copie[i]);
}
return 0;
}


