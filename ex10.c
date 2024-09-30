#include <stdio.h>
// #include <stdlib.h>

int main(){
int size;
int rechercher;
printf("inter the size of the array  : ");
scanf("%d",&size);
int tab[size];

for(int i=0;i<size;i++){
    printf("inter the value of index %d  : ",i);
    scanf("%d", &tab[i]);
}
printf("entrer l'element rechercher : ");
scanf("%d",&rechercher);
for(int i=0;i<size;i++){
    if(rechercher == tab[i]){
        printf("l'element que tu recherche est exist ");
    }else{
        printf("l'element que tu recherche n'est pas exist");
    }
    
}
return 0;
}

