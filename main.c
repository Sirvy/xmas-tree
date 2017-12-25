#include <stdio.h>
#include <stdlib.h>

/*
 * Prints trunk quarter of the tree size
 * @param int size - tree size
 */
void printTrunk(int size)
{
    int i, j;
    for (i = 0; i < size/4; i++) {
        for (j = 0; j < size-1; j++) {
            printf(" ");
        }
        printf("M\n");
    }
}

/*
 * Prints xmass tree
 * @param int size - tree size
 */
void printTree(int size) 
{
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size-i; j++) {
            printf(" ");
        }
        for (j = 0; j < (i*2)-1; j++) {
            int r = rand() % size;
            if (r == size-1) printf("@");
            else printf("A");
        }
        printf("\n");
    }

    printTrunk(size);
}

int main (void)
{
    int size;

    printf("Size: ");
    if (scanf("%d", &size) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    printTree(size);
    return 0;
}