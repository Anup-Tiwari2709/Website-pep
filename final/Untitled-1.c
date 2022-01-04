# include<stdio.h>
void main(){
   int a[] = {50, 20, 30, 40, 10},i,j,temp;
    for(int i=0; i<4; i++){
        for(int j=1; j<5; j++){
            a[i]>a[j];
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    printf("%d",a[i]);
    }
    