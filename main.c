#include <stdio.h>
#include "my_mat.h"

int main(){
    while(1) {
        char arg;
        scanf("%c" , &arg);
        if(arg == 'A'){
            CreateMatrix();
        }else if (arg == 'B'){
            int i;
            int j;
            scanf("%d %d", &i , &j);
            IsTherePath(i , j);
        }else if (arg == 'C'){
            int i;
            int j;
            scanf("%d %d", &i , &j);
            ShortestPath(i , j);
        }else if (arg == 'D'){
            break;
        }    
    }
    return 0;           
}