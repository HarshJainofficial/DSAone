#include <bits/stdc++.h>
using namespace std ;
int insertionSort(int arr[] , int n , int key , int capacity){
    if(n >= capacity)
        return n ;
    
    arr[n] = key ;
    return (n+1) ;
}
int main(){
    int arr[10] = { 12 , 11  , 10 , 5 , 7} ;
    int capacity = sizeof(arr)/sizeof(arr[0]) ;
    
    int n = 5 ;
    int key = 25 ;
    
    cout << "Before insertion Sorting " << endl ;
    for(int i = 0 ; i  < n ; i++){
        cout << arr[i] << " "  ;
    }
    cout << endl ;
    
    cout << "After insertionSort" << endl;
    n = insertionSort(arr ,  n , key , capacity ) ;
    
    for(int i = 0 ; i  < n ; i++){
        cout << arr[i] << " " ;
    }
    
    
    
}

















// #include <bits/stdc++.h>

// int searchOp(int arr[] , int n  , int key){
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == key){
//             return i ;
//         }
//     }
//     return -1 ;
// }
// using namespace std ;
// int main(){
//     int arr[] = { 12, 10 , 5 , 4 , 89} ;
//     int n = sizeof(arr)/sizeof(arr[0]) ;
//     int key ;
//     cin >> key ;
    
//     int position = searchOp(arr , n , key) ;
    
//     if(position == -1){
//         cout << "Your input doesn't Match with array" ;
//     }else{
//         cout << "your output is at position " << position + 1<< endl ;
//     }
    
//     return 0 ;
    
// }
