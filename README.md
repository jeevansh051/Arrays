# Arrays
A basic cpp code while describing arrays.

## Theory:
- C++ provides a data structure, the array, which stores a fixed-size sequential collection of elements of the same type. An array is used 
  to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.
- Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers 
  and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an 
  index.
- All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the 
  last element.
 
### Properties:
- An Array is a collection of data of the same data type, stored at a contiguous memory location.
- Indexing of an array starts from 0. It means the first element is stored at the 0th index, the second at 1st, and so on.
- Elements of an array can be accessed using their indices.
- Once an array is declared its size remains constant throughout the program.
- An array can have multiple dimensions.
- The number of elements in an array can be determined using the sizeof operator.
-W e can find the size of the type of elements stored in an array by subtracting adjacent addresses.

### Declaring Arrays:
- To declare an array in C++, the programmer specifies the type of the elements and the number of elements required by an array as follows ```type arrayName [ arraySize ];```
  
### Initializing Arrays:
- In C++, we can initialize an array in many ways but we will discuss some most common ways to initialize an array. We can initialize an 
  array at the time of declaration or after declaration.

- 1. Initialize Array with Values in C++
  We have initialized the array with values. The values enclosed in curly braces ‘{}’ are assigned to the array. Here, 1 is stored in 
  arr[0], 2 in arr[1], and so on. Here the size of the array is 5.
```int arr[5] = {1, 2, 3, 4, 5};```

- 2. Initialize Array with Values and without Size in C++
  We have initialized the array with values but we have not declared the length of the array, therefore, the length of an array is equal to 
  the number of elements inside curly braces.
```int arr[] = {1, 2, 3, 4, 5};```

- 3. Initialize Array after Declaration (Using Loops)
  We have initialized the array using a loop after declaring the array. This method is generally used when we want to take input from the 
  user or we cant to assign elements one by one to each index of the array. We can modify the loop conditions or change the initialization 
  values according to requirements.
```
for (int i = 0; i < N; i++) {
    arr[i] = value;
}
```

## Outcome of the code:
- Print every element of the array.
- Print a specific value in a specific index of an array.


