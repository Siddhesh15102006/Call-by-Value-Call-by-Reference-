// Experiment Number - 10
// Siddhesh Gajare
// ENTC (A3)
// 25070122505

#include<iostream>
using namespace std;

void swap(int A, int B) 
{
    int temp;
    temp = A;
    A = B;
    B = temp;
    cout << "Value of A,B After Swapping:" << endl;
    cout << "A = " << A << endl << "B = " << B << endl << endl;
}

int main()
{
    int A = 100, B = 200;

    cout << "*CALL BY VALUE*" << endl << endl;

    cout << "Value of A,B Before Swapping :- " << endl;
    cout << "A = " << A << endl << "B = " << B << endl << endl;

    swap(A, B); 
    
    return 0;
}

Output :- 
*CALL BY VALUE*

Value of A, B Before Swapping :- 
A = 100
B = 200

Value of A,B After Swapping:
A = 200
B = 100



=== Code Execution Successful ===    
