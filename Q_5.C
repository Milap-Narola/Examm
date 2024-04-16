/*O N M L K
  J I H G
  F E D
  C B 
  A*/
  #include <stdio.h>

int main() {
     
    int i, j,n=79;
    
    for (i = 5; i >=1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%c ", n--);
        }
        printf("\n");
    }
    
    return 0;
}
