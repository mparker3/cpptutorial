#include <iostream>
using namespace std;

int** makearr (int& width, int& height); //takes addresses of two ints, returns an array with the dimensions of the two ints

void poparray(int** arr, int w, int l); //takes pointer to dynamic array of pointers as arguments along with dimensions, populates array as per user

int main(){
    int i, j;
    int m = 0;
    int n = 0;
    
    int** twodarr = makearr(m, n);
    
    poparray(twodarr, m, n);
    for (i=0; i<m; i++){
        cout<<"\n";
        for (j=0; j<n; j++){
            cout<<twodarr[i][j]<<" ";
        }
    }
    
    for (i=0; i<m; i++){
        delete twodarr[i];
    }
    delete twodarr
    return 0;
}

int** makearr(int& width, int& height) {
    int i, j; //counter variables
    cout<<"Enter width of array: ";
    cin>>width;
    cout<<"\nEnter height of array: ";
    cin>>height;
    int** arr = new int*[width]; //creates a pointer to an array with size "width" of pointers
    for (i=0; i < width; i++){
        arr[i] = new int[height]; //sets value of each pointer in array to an array of size "height"
    }
    for (i=0; i<width; i++) {
        for (j=0; j<height; j++) {
            arr[i][j] = 0; //populates array full of 0s
        }
    }
    return arr;
}

void poparray(int** arr, int w, int h) {
    int i, j;
    int count = 0;
    for (i=0; i<w; i++){
        for (j=0; j<h; j++){
            cout<<"Enter value for slot "<<count+1<<": ";
            cin>>arr[i][j];
            count++;
        }
    }
    return;
}

