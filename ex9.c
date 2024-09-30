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
printf("le tableaux origine : ");
for(int i=0;i<size;i++){
printf("%d",tab[i]);
}
printf("\n");
printf("le inverse version : ");
for(int i=0;i<size-1;i++){//veeeeeeeeeeeeeeeery important
for(int j=0;j<size-i-1;j++){//wlhta mohima lys7ablk 
        
            int temp=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=temp;
        }
}
    for(int i=0;i<size;i++){
        printf("%d ",tab[i]);
    }
  return 0;
}