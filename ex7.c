#include <stdio.h>


int main(){
int size;
printf("inter the size of the array  : ");
scanf("%d",&size);
int tab[size];

for(int i=0;i<size;i++){
    printf("inter the value of index %d  : ",i);
    scanf("%d", &tab[i]);
}
for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){
        if(tab[j]>tab[j+1]){
            int temp=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=temp;
        }
    }
  
}
printf("the result : ");
for(int i =0;i<size;i++){
     printf("%d ", tab[i]);
}
 

return 0;
}