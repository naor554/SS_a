#include <stdio.h>
#include "my_mat.h"

int main(){
    while(1) {
        printf("Choose a Function\n");
        char arg;
        scanf("%c" , &arg);
        if(arg == 'A'){
            CreateMatrix();
        }else if (arg == 'B'){
            printf("Insert Two Edges\n");
            int i;
            int j;
            scanf("%d %d", &i , &j);
            IsTherePath(i , j);
        }else if (arg == 'C'){
            printf("Insert Two Edges\n");
            int i;
            int j;
            scanf("%d %d", &i , &j);
            ShortestPath(i , j);
        }else if (arg == 'D'){
            printf("Bye Bye\n");
            break;
        }    
    }
    return 0;           
}