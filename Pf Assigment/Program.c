#include<stdio.h>
int main()
    {
        // First initialize the variable  
        int user_input_size ;
        printf("Please Enter input lenght =");

        // stored value in "user_input_size" 
        scanf("%d",&user_input_size);

        // initialize an array and its length is depending upon "user_input_size" 
        int arr[user_input_size];

        // stored values in Array 
        for (int i = 0; i < user_input_size; i++)
        {
            printf("Please enter your numbers =");
            scanf("%d",&arr[i]);
        }

        // then iterate the loop on Array & print the array 
        for (int i = 0; i < user_input_size; i++)
        {
            printf("User input Values %d \n",arr[i]);
        }
  }

