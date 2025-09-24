// Experiment Number - 10
// Siddhesh Gajare
// ENTC (A3)
// 25070122505

#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int A=5, B=10;
    cout<<"*USING POINTERS*"<<endl<<endl;
    cout<<"Value of A,B Before Swapping :- "<<endl;
    cout<<"A = "<<A<<endl<<"B = "<<B<<endl<<endl;
    swap(&A , &B);
    cout<<"Value of A,B After Swapping :- "<<endl;
    cout<<"A = "<<A<<endl<<"B = "<<B;
    
}

Output :-
*USING POINTERS*

Value of A,B Before Swapping :- 
A = 5
B = 10

Value of A,B After Swapping :- 
A = 10
B = 5

=== Code Execution Successful ===
