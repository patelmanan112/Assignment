#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=n; i>0; i--){
      for(int j=0;j<=n-i;j++){
       
          printf("%c",'A' +j);
      } ;
      for(int k=n-i-1; k>=0;k--){
          printf("%c",'A'+k);
      }printf("\n");
  }

return 0;
}