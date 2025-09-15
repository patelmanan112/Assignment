#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i ; j++){
            printf(" ");
        }
        for(int k=0; k<2*i-1; k++){
            printf("%c",'A'+count);
            count++;
        } printf("\n");
        count=0;
    }
    for(int l=0; l<=n; l++){
        for(int m=0; m<l; m++){
            printf(" ");
        }
        for(int p=0; p<2*(n-l)-1; p++){
            printf("%c",'A'+count);
            count++;
        } printf("\n");
        count =0;
    }
    return 0;
}




#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    for(int i=0; i<n; i++){  // 0 
        for(int j=0; j<n-i ; j++){ // 0 
            printf(" ");
        }
        for(int k=0; k<2*i-1; k++){ // 0 X 1 
            printf("%c",'A'+count);
            count++;
        }
        for(int v=0; v<n; v++){
            
        }
        printf("\n");
        count=0;
        
    }
    for(int l=0; l<=n; l++){
        for(int m=0; m<l; m++){
            printf(" ");
        }
        for(int p=0; p<2*(n-l)-1; p++){
            printf("%c",'A'+count);
            count++;
        } printf("\n");
        count =0;
    }
    return 0;
}