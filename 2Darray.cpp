#include<iostream>
using namespace std;

//Multidimensional array-->array of arrays

//syntax : datatype arrayname[row][column];

// int main() {
//     //declaring 2d array with 3 rows and 3 columns
//     //int arr[2][2] = {1,2,3,4,5,6};
//      int arr[3][3] = {
//         {1,2,3},   //initializing the values to the array
//         {4,5,6},
//         {7,8,9}
//      }; 

//      cout<<"Element at index arr[0][2]: "<<arr[0][2]<<endl;

//      cout<<"Traversing and printing the elements of the 2D array";
//      for(int i=0; i<3; i++) {
//          for(int j=0; j<4; j++) {
//              //cout<<arr[i][j]<<" " ;
//          } 
//      }

// }

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
     cout<<"Printing the elements: "<<endl;
     for(int i=0; i<row; i++) {
         for(int j=0; j<column; j++) {
             cout<<arr[i][j]<<" " ;
         }
         cout<<endl;
     }
}