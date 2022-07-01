#include <iostream>
using namespace std;
int main() {
    int num[]={1,2,3,4,5};
    int n=5;
    int del;
    cout << "Enter a number to deleting(1-5): ";
    cin>>del;
    
    //search
    for(int i=0;i<5;i++)
    {
        if(num[i]==del){
            //delete or move to last index
            for(int j=i;j<4;j++){
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
            i--;
            n--;
        }
    }
    for (int i=0; i<4;i++){
        cout<<""<<num[i];
    }

    return 0;
}