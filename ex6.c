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
int n;
printf("entrer le facteur : ");
scanf("%d",&n);
for(int i=0 ; i<size;i++){
   
printf("%d apres la multiplication : %d \n",tab[i],tab[i]*n);
}
return 0;
}
