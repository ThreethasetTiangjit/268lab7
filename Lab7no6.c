#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int random100to200();

int main(){
    srand(time(NULL));
    int m,n,x,y,m1=0,n1=0;
    scanf("%d %d",&m,&n);
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        y=1;
        while(y==1){
        y=0;
        x=random100to200();
        for(int q=0;q<=i;q++){
            for(int e=0;e<=j;e++){
                if(A[q][e]==x){
                    y=1;}}}
    }
    A[i][j]=x;}}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",A[i][j]);}
    printf("\n");}
}
int random100to200(){
    int random_num=(rand()%101)+100;
    return random_num;
}