#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row;
    cout<<"Enter no. of rows : ";
    cin>>row;
    cout << endl;

    int col;
    cout<<"Enter no. of col : ";
    cin>>col;
    cout<<endl;

    int** arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    cout << "Enter "<<row*col<<" values seperately : ";
    // taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    // printing array
    cout << "Output Array : "<< endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }

    return 0;
}
