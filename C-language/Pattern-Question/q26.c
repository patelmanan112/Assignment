#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            printf(" ");
        } 
        for(int k=0; k<2*(n-i)+1; k++){
            
            printf("*");
        }printf("\n");
    }
    return 0; 
}



#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);

  for(int i=n; i>=1; i--){
      
      for(int j=1; j<=2*i-1;j++){
     printf("*");
           
      }   printf("\n");
  }

return 0;
}
