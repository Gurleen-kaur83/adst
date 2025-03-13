#include <stdio.h>
int main() {
    // int myArray[] ={1,2,3,4,5};

    // // printf("%d\n", myArray[1]);
    // // myArray[1]=6;
    // // printf("%d\n", myArray[1]);
    // int length = sizeof(myArray)/ sizeof (myArray[0]);
    // printf("%lu\n",length);
    
    // for (int i =0;i< length; i++){
    //     printf("%d\n", myArray[i]);
    // }
    // printf("%lu\n", sizeof(myArray));
    
    int ages[] = {20,22,18,35,48,26,87,70};
    float avg;
    int sum=0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    // Loop 
    for (i = 0; i < length; i++) {
    sum += ages[i];
    // sum=sum+ages[i]

    }

    avg = (float) sum / length;
    printf("%d\n",sum);
    printf("%d\n",length);
    printf("The average age is: %.2f\n", avg);
    return 0;
}