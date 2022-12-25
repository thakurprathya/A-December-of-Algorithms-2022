//December 3 - Minesweeper
#include<iostream>
using namespace std;

void mines(char *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(*((arr+i) +j) != '#'){
                int cnt=0;
                if(i==0 && j==0){
                    if(*((arr+1) +1) == '#'){ cnt++; }
                    if(*((arr+0) +1) == '#'){ cnt++; }
                    if(*((arr+1) +0) == '#'){ cnt++; }
                    *((arr+1) +1) = (int)((char)cnt - '0');
                }
                else if(i==0 && j==n-1){ 
                    if(*((arr+1) +n-2) == '#'){ cnt++; }
                    if(*((arr+0) +n-2) == '#'){ cnt++; }
                    if(*((arr+1) +n-1) == '#'){ cnt++; }
                    *((arr+0) +n-1) = (int)((char)cnt - '0');
                }
                else if(i==n-1 && j==0){ 
                    if(*((arr+n-2) +1) == '#'){ cnt++; }
                    if(*((arr+n-2) +0) == '#'){ cnt++; }
                    if(*((arr+n-1) +1) == '#'){ cnt++; }
                    *((arr+n-1) +0) = (int)((char)cnt - '0');
                }
                else if(i==n-1 && j==n-1){
                    if(*((arr+n-2) +n-2) == '#'){ cnt++; }
                    if(*((arr+n-2) +n-1) == '#'){ cnt++; }
                    if(*((arr+n-1) +n-2) == '#'){ cnt++; }
                    *((arr+n-1) +n-1) = (int)((char)cnt - '0');
                }
                else if(i==0){ 
                    if(*((arr+1) +j-1) == '#'){ cnt++; }
                    if(*((arr+1) +j+1) == '#'){ cnt++; }
                    if(*((arr+1) +j) == '#'){ cnt++; }
                    if(*((arr+0) +j-1) == '#'){ cnt++; }
                    if(*((arr+0) +j+1) == '#'){ cnt++; }
                    *((arr+0) +j) = (int)((char)cnt - '0');
                }
                else if(i==n-1){ 
                    if(*((arr+n-2) +j-1) == '#'){ cnt++; }
                    if(*((arr+n-2) +j+1) == '#'){ cnt++; }
                    if(*((arr+n-2) +j) == '#'){ cnt++; }
                    if(*((arr+n-1) +j-1) == '#'){ cnt++; }
                    if(*((arr+n-1) +j+1) == '#'){ cnt++; }
                    *((arr+n-1) +j) = (int)((char)cnt - '0');
                }
                else if(j==0){ 
                    if(*((arr+i-1) +1) == '#'){ cnt++; }
                    if(*((arr+i+1) +1) == '#'){ cnt++; }
                    if(*((arr+i) +1) == '#'){ cnt++; }
                    if(*((arr+i-1) +0) == '#'){ cnt++; }
                    if(*((arr+i+1) +0) == '#'){ cnt++; }
                    *((arr+i) +0) = (int)((char)cnt - '0');
                }
                else if(j==n-1){ 
                    if(*((arr+i-1) +n-2) == '#'){ cnt++; }
                    if(*((arr+i+1) +n-2) == '#'){ cnt++; }
                    if(*((arr+i) +n-2) == '#'){ cnt++; }
                    if(*((arr+i-1) +n-1) == '#'){ cnt++; }
                    if(*((arr+i+1) +n-1) == '#'){ cnt++; }
                    *((arr+i) +n-1) = (int)((char)cnt - '0');
                }
                else{
                    if(*((arr+i-1) +j) == '#'){ cnt++; }
                    if(*((arr+i-1) +j-1) == '#'){ cnt++; }
                    if(*((arr+i-1) +j+1) == '#'){ cnt++; }
                    if(*((arr+i+1) +j) == '#'){ cnt++; }
                    if(*((arr+i+1) +j-1) == '#'){ cnt++; }
                    if(*((arr+i+1) +j+1) == '#'){ cnt++; }
                    if(*((arr+i) +j-1) == '#'){ cnt++; }
                    if(*((arr+i) +j+1) == '#'){ cnt++; }
                    *((arr+i) +j) = (int)((char)cnt - '0');
                }
            }
        }
    }
}
void printArr(char *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){ cout<<*((arr+i) +j)<<" "; }cout<<endl;
    }
}

int main(){
    int n; cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){ cin>>a[i][j]; }
    }
    char *arr = a[0];
    printArr(arr, n);
    mines(arr, n);
    printArr(arr, n);
    return 0;
}









#include<iostream>
using namespace std;

void printArr(char *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){ cout<<*((arr+i) +j)<<" "; }cout<<endl;
    }
}

int main(){
    int n; cin>>n;
    char arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){ cin>>arr[i][j]; }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] != '#'){
                int cnt=0;
                if(i==0 && j==0){
                    if(arr[1][1] == '#'){ cnt++; }
                    if(arr[0][1] == '#'){ cnt++; }
                    if(arr[1][0] == '#'){ cnt++; }
                    arr[0][0] = char((char)cnt - '0');
                }
                else if(i==0 && j==n-1){ 
                    if(arr[1][n-2] == '#'){ cnt++; }
                    if(arr[0][n-2] == '#'){ cnt++; }
                    if(arr[1][n-1] == '#'){ cnt++; }
                    arr[0][n-1] = char((char)cnt - '0');
                }
                else if(i==n-1 && j==0){ 
                    if(arr[n-2][1] == '#'){ cnt++; }
                    if(arr[n-2][0] == '#'){ cnt++; }
                    if(arr[n-1][1] == '#'){ cnt++; }
                    arr[n-1][0] = char((char)cnt - '0');
                }
                else if(i==n-1 && j==n-1){
                    if(arr[n-2][n-2] == '#'){ cnt++; }
                    if(arr[n-2][n-1] == '#'){ cnt++; }
                    if(arr[n-1][n-2] == '#'){ cnt++; }
                    arr[n-1][n-1] = char((char)cnt - '0');
                }
                else if(i==0){ 
                    if(arr[1][j-1] == '#'){ cnt++; }
                    if(arr[1][j+1] == '#'){ cnt++; }
                    if(arr[1][j] == '#'){ cnt++; }
                    if(arr[0][j-1] == '#'){ cnt++; }
                    if(arr[0][j+1] == '#'){ cnt++; }
                    arr[0][j] = char((char)cnt - '0');
                }
                else if(i==n-1){ 
                    if(arr[n-2][j-1] == '#'){ cnt++; }
                    if(arr[n-2][j+1] == '#'){ cnt++; }
                    if(arr[n-2][j] == '#'){ cnt++; }
                    if(arr[n-1][j-1] == '#'){ cnt++; }
                    if(arr[n-1][j+1] == '#'){ cnt++; }
                    arr[n-1][j] = char((char)cnt - '0');
                }
                else if(j==0){ 
                    if(arr[i-1][1] == '#'){ cnt++; }
                    if(arr[i+1][1] == '#'){ cnt++; }
                    if(arr[i][1] == '#'){ cnt++; }
                    if(arr[i-1][0] == '#'){ cnt++; }
                    if(arr[i+1][0] == '#'){ cnt++; }
                    arr[i][0] = char((char)cnt - '0');
                }
                else if(j==n-1){ 
                    if(arr[i-1][n-2] == '#'){ cnt++; }
                    if(arr[i+1][n-2] == '#'){ cnt++; }
                    if(arr[i][n-2] == '#'){ cnt++; }
                    if(arr[i-1][n-1] == '#'){ cnt++; }
                    if(arr[i+1][n-1] == '#'){ cnt++; }
                    arr[i][n-1] = char((char)cnt - '0');
                }
                else{
                    if(arr[i-1][j] == '#'){ cnt++; }
                    if(arr[i-1][j-1] == '#'){ cnt++; }
                    if(arr[i-1][j+1] == '#'){ cnt++; }
                    if(arr[i+1][j] == '#'){ cnt++; }
                    if(arr[i+1][j-1] == '#'){ cnt++; }
                    if(arr[i+1][j+1] == '#'){ cnt++; }
                    if(arr[i][j-1] == '#'){ cnt++; }
                    if(arr[i][j+1] == '#'){ cnt++; }
                    arr[i][j] = char((char)cnt - '0');
                }
            }
        }
    }
    
    char *a= arr[0];
    printArr(a, n);
    return 0;
}
