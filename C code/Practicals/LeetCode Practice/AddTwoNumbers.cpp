#include <stdio.h>

//This challenge gives two linked lists, digits are stored in reverse order, return the sum of the two lists l1 = [2,4,3] l2 = [5,6,4] Ans = [7,0,8]

void linkedSum(int size, int size2, int linkedList1[], int linkedList2[]){

    

}

int main(){

    int size1, size2;

    printf("Please input the size of the first linked list\n");
    scanf("%d", &size1);

    printf("please input the size of the second linked list\n");
    scanf("%d", &size2);

    int linkedList1[size1];
    int linkedList2[size2];

    printf("please input the first linked list ");
    for (int x = 0; x < size1; x++){
        scanf("%d", linkedList1[x]);
    }

    printf("please input the second linked list ");
    for (int x = 0; x < size1; x++){
        scanf("%d", linkedList2[x]);
    }
    
}