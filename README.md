---
# 🧪 Experiment 10 :- Pointer Operations (Call by Value and Call by Reference)

---

🔄 Q1. Swapping Using Call by Value

✅ Aim
To swap two numbers using the call by value method.

📚 Theory

In call by value, copies of the actual parameters are passed to the function. Changes made inside the function do not affect the original variables.

📐 Syntax (C)
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

🧠 Logic

Pass values of two variables to a function.

Swap the values locally inside the function.

Original variables remain unchanged.

💻 Code
```cpp
#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
```

📌 Conclusion

Call by value swaps local copies only; original variables remain unchanged outside the function.

---

🔁 Q2. Swapping Using Call by Reference
✅ Aim

To swap two numbers using call by reference method.

📚 Theory

In call by reference, addresses of the variables are passed to the function. Changes inside the function affect the original variables.

📐 Syntax (C with pointers)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

🧠 Logic

Pass addresses of variables to the function.

Use pointers to dereference and swap values.

Original variables are modified.

💻 Code
```cpp
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
```

📌 Conclusion

Call by reference swaps actual variables by passing their addresses.

---

🔄 Q3. Swapping Using Pointers
✅ Aim

To swap two numbers using pointers explicitly.

📚 Theory

Pointers can store addresses of variables, and through dereferencing, their values can be modified.

📐 Syntax
void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

🧠 Logic

Declare pointers pointing to variables.

Swap values using dereferencing.

💻 Code
```cpp
#include <stdio.h>

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a = 20, b = 40;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
```

📌 Conclusion

Swapping using pointers allows direct modification of variable values through memory addresses.

---

🔄 Q4. Modification in Array
✅ Aim

To modify elements of an array and display the updated array.

📚 Theory

Arrays are stored in contiguous memory locations. Using pointers or indices, array elements can be modified.

📐 Syntax
for (int i = 0; i < size; i++) {
    arr[i] = arr[i] + 10; // example modification
}

🧠 Logic

Traverse the array.

Update each element as per requirement.

Print updated array.

💻 Code
```cpp
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Original array: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Modification: add 10 to each element
    for (int i = 0; i < 5; i++)
        arr[i] += 10;

    printf("Modified array: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
```

📌 Conclusion

Array elements can be modified easily using indexing and reflected throughout the array.
