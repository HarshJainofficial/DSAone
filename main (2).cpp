// bubblesort
#include <bits/stdc++.h>
using namespace std ;
void swap(int *a , int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}

void bubblesort(int arr[] , int n){
    
    for(int i = 0 ; i < n - 1 ; i++)
    for(int j = 0 ; j <  n-i-1 ; j++)
        if(arr[j] > arr[j + 1])
            swap(&arr[j] , &arr[j+1]) ;
    
}
void printarraySort(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++)
        cout << arr[i] << " " ;
    
}


int main() {
    int arr[] = {12, 11, 1 , 2 ,89 } ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    bubblesort(arr , n) ;
    printarraySort(arr , n );
    
}













// #include <bits/stdc++.h>
// using namespace std;

// void swap(int *a , int  *b){
//     int temp = *a ;
//     *a = *b ;
//     *b = temp ;
    
// }

// void bubblesort(int arr[] , int n ){
//     int i , j ;
//     for( i = 0 ; i < n - 1 ; i++ )
//     for( j = 0 ; j < n-i-1; j++)
//             if(arr[j] > arr[j+1])
//                 swap(&arr[j] , &arr[j+1]) ;
// }

// void printarray(int arr[] , int b ){
//     int i ;
//     for( i = 0 ; i < b ; i++)
//         cout << arr[i] << " " ;
    
// }

// int main()
// {
//     int arr[] = { 12, 11 , 10 , 5 , 1} ;
//     int n = sizeof(arr)/sizeof(arr[0]) ;
    
//     bubblesort(arr  , n );
//     printarray(arr , n  );
//     return 0;
// }
