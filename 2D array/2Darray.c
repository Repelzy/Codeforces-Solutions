#include <stdio.h>
 
void intput(int n, int m, int a[][100]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void output(int n, int m, int a[][100]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
}

void sort(int n, int m, int a[][100]){
	int i, j;
    for(i = 0;i<n;i++){
        for(j = 0; j<m; j++){
            int k,l;
            for(k = i; k<n; k++){
                int t = 0;
                if(k == i) t = j+1;
                for(l = t; l<m;l++){
                    if(a[i][j] > a[k][l]){
                        int temp = a[i][j];
                        a[i][j] = a[k][l];
                        a[k][l] = temp;
                    }
                }
            }
        }
    }
     
    output(n,m,a);	
}




int main(){
	int n, m;
    printf("Nhap n, m lan luot: ");
    scanf("%d %d", &n,&m);
     
    //Cap phat bo nho
    int a[100][100];
 
    //Nhap mang
    printf("\n------Nhap mang-----\n");
    intput(n,m,a);
    printf("\n------xuat mang-----\n");
    output(n,m,a);
    printf("\n------Mang tang dan-----\n");
    sort(n,m,a);
     
}

 
