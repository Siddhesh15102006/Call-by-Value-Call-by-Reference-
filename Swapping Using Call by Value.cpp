// Experiment Number - 10
// Siddhesh Gajare
// ENTC (A3)
// 25070122505

#include<iostream>
using namespace std;

void swap(int &x, int &y) 
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}

int main()
{
    int A = 100 , B = 200;
    
    cout<<"*CALL BY REFERENCE*"<<endl<<endl;
    cout<<"Value of A,B Before Swapping :- "<<endl<<"A = "<<A<<endl<<"B = "<<B<<endl<<endl;
    swap(A,B);
    cout<<"Value of A,B After Swapping :- "<<endl;
    cout<<"A = "<<A<<endl<<"B = "<<B;
}

Output :-
*CALL BY REFERENCE*

Value of A,B Before Swapping :- 
A = 100
B = 200

Value of A,B After Swapping :- 
A = 200
B = 100

=== Code Execution Successful ===
