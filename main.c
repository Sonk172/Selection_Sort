// Selection Sort
//
// Written by Daniel Slachov
// on 8/01/2023
//
// Sorts an array using the selection algorithm

#include <stdio.h>

// Returns the index of the lowest value in an array
int locate_lowest(int test_data[], int start);

// Swaps the positions of two elements in an array
void swap(int test_data[], int index1, int index2);

// Prints out the contents of an array
void print_array(int array[]);

int main(void) { 
  
  // Test data
  int test_data[] = {123, 5, 9, 3, 4, 2, 8, 65, 78, 43, 34, 89, 999999};

  // Algorithm
  int iteration = 0;
  while (test_data[iteration] != 999999) {
    int lowest = locate_lowest(test_data, iteration);
    swap(test_data, iteration, lowest);
    iteration += 1;;
  }

  // Output
  print_array(test_data);

  return 0; 
}

// Returns the index of the lowest value in an array
int locate_lowest(int test_data[], int start) {
  int lowest_value = test_data[start];
  int lowest_index = start;
  int i = start;
  while (test_data[i] != 999999) {
    if (test_data[i] < lowest_value) {
      lowest_value = test_data[i];
      lowest_index = i;
    }
    i += 1;
  }
  return lowest_index;
}

// Swaps the positions of two elements in an array
void swap(int test_data[], int index1, int index2) {
  int temp = test_data[index1];
  test_data[index1] = test_data[index2];
  test_data[index2] = temp;
}

// Prints out the contents of an array
void print_array(int array[]) { 
  int i = 0;
  printf("Your sorted array is: ");
  while (array[i] != 999999) {
    printf("%d ", array[i]);
    i += 1;
  }
  printf("\n");
}