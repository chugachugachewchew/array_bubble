#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void static random_value_generator(int **value);
void static walk_down_array(int loop_counter, int *pointer);
void static bubble_sort(int array[], int size_of_array);
void static prints_algo(int array_after_bubble[], int size_of_array);


void main(){

    //control the size of the array by changing size_control rvalue.
    int size_control = 99, array[size_control], *ptr;
    ptr = &array[0];

    srand(time(NULL));

    walk_down_array(size_control, ptr);

    bubble_sort(array, size_control);

    prints_algo(array, size_control);

}





void static random_value_generator(int **value){
    **value = rand();
}

void static walk_down_array(int loop_counter, int *pointer){
    for(int i = 0; i < loop_counter; i++){
        random_value_generator(&pointer);
        pointer = ++pointer;
    }
}

void static bubble_sort(int array[], int size_of_array){
    for (int i = 0; i < size_of_array; i++){
        for (int j = 0; j < (size_of_array - 1); j++){
            if (array[j] < array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }    
    }   
}

void static prints_algo(int array_after_bubble[], int size_of_array){
    for (int i = 0; i < size_of_array; i++){
    printf("array[%i] = %i\n",i,array_after_bubble[i]);
    }
}