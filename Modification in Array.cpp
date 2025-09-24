// Experiment Number - 10
// Siddhesh Gajare
// ENTC (A3)
// 25070122505

#include<iostream>
using namespace std;

void change(int &changeposition,int &value,int (&arr)[],int &n)
{
    for(int i=0;i<n;i++){
        if(i==changeposition){
            arr[i]=value;
        }
    }
    cout<<"New Array is :- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

int main()
{
    int n;
    cout<<"Enter the Size of Array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Values of the Array :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int changeposition;
    cout<<"Enter the Position of an Array to be Change :- ";
    cin>>changeposition;
    int value;
    cout<<"Enter The New Value :- ";
    cin>>value;
    change(changeposition,value,arr,n);
}

Output :-
Enter the Size of Array :- 5
Enter the Values of the Array :- 100 200 300 400 500
Enter the Position of an Array to be Change :- 2
Enter The New Value :- 350
New Array is :- 100 200 350 400 500 

=== Code Execution Successful ===
