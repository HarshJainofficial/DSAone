// InsertionSort
#include <bits/stdc++.h>
using namespace std ;

void swapSort(int *a , int *b ){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}

void SelectionSort(int arr[] ,int n ){
    int i , j  , k ;
    for(i = 0 ; i < n - 1; i++){
        k = i ;
        for( j = i+1 ; j < n ;  j++  ){
            if(arr[j] < arr[k] ){
                k =  j ;
            }
        swapSort(&arr[k] , &arr[i]) ;
        }
    }
    
    

    
}

void PrintArray(int arr[] , int n){
    for(int i = 0 ;  i < n ; i++){
        cout << arr[i] << " " ;
    }
}

int main(){
    int arr[] = { 12, 11, 10 , 2  , 1};
    int n = sizeof(arr)/sizeof(arr[0]) ;
    SelectionSort(arr , n) ;
    PrintArray(arr, n ) ;
}