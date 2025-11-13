#include <stdio.h>

int main() {

    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    
    int *ptr = &grid[0][0];

    printf("Access using single pointer:\n");
    printf("%d\n", *(ptr));       
    printf("%d\n", *(ptr + 3));   
    printf("%d\n", *(ptr + 7));   

    int *p2 = &grid[1][0];

    printf("\nAccess using second row pointer with indexing:\n");
    printf("%d\n", p2[0]);   
    printf("%d\n", p2[1]);   
    printf("%d\n", p2[-1]); 

    
    printf("\nNumbers divisible by 3:\n");
    for(int i = 0; i < 12; i++) {
        if(*(ptr + i) % 3 == 0)
            printf("%d ", *(ptr + i));
    }
    printf("\n");

   
    int *last = &grid[2][3];
    printf("\nLast element of grid: %d\n", *last);

    return 0;
}

