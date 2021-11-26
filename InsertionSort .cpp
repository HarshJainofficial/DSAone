// InsertionSort
#include <bits/stdc++.h>
using namespace std ;

// void swapped(int *a , int *b){
//     int temp = *a ;
//     *a = *b ;
//     *b = temp ;
//}

// void BubbleSort(int arr[] , int n ){
//     for(int i = 0 ; i < n - 1 ; i++){
//         for(int j = 0 ; j < n - 1 - i ; j++){
//             if(arr[j]>arr[j+1]){
//                 swapped(&arr[j] , &arr[j+1]) ;

//             }
//         }
//     }

// }
void InsertionSort(int arr[] , int n ){
    int i , j , key ;
    for(int i = 1 ; i < n ; i++){
        key = arr[i] ;
        j = i - 1 ;
        
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j] ;
            j -- ;
            
        
        }
        arr[j + 1] = key ;
    }
    
    
}
void PrintInsertionSort(int arr[] , int n ){
    for(int i  = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
    int arr[] = {  12, 1, 22, 29 , 2 , 3} ;
    int n  = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr , n ) ;
    PrintInsertionSort(arr, n) ;


}
