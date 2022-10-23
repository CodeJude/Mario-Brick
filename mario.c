#include <stdio.h>


int main(){
    int n;
    //Users Input
    printf("Size: ");
    scanf("%d",&n);

    //For each row
    for (int i=0; i<n; i++) {

        //For each column
        for (int j=0; j<=n; j++){

            //Print Brick
            printf("#");
        }
        //Move to next row
        printf("\n");
    }

    return 0;
}
