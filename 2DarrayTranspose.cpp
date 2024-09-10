#include<iostream>
using namespace std;

int main() {
     int row,column;
     cout<<"Enter the row and column: ";
     cin>>row>>column;

     int arr[row][column]; //declaration of 2d array

     //Taking input from user

     cout<<"Taking input from the user: "<<endl;
     for(int i=0; i<row; i++) {
         for(int j=0; j<column; j++) {
            cin>>arr[i][j];
         }
     }

     //printing the 2d elements
     cout<<"Before Transpose: "<<endl;
     for(int i=0; i<row; i++) {
         for(int j=0; j<column; j++) {
             cout<<arr[i][j]<<" " ;
         }
         cout<<endl;
     }

     /*int transpose[row][column]
        for(int i=0; i<column; i++) {
          for(int j=0; j<row; j++) {
           transpose[i][j] = arr[j][i];
           }
        }*/

     cout<<"After Transpose: "<<endl;
     for(int i=0; i<column; i++) {
         for(int j=0; j<row; j++) {
               cout<<arr[j][i]<<" " ;
         }
         cout<<endl;
     }

}