#include <bits/stdc++.h>

int searchOp(int arr[] , int n  , int key){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == key){
            return i ;
        }
    }
    return -1 ;
}
using namespace std ;
int main(){
    int arr[] = { 12, 10 , 5 , 4 , 89} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    int key ;
    cin >> key ;
    
    int position = searchOp(arr , n , key) ;
    
    if(position == -1){
        cout << "Your input doesn't Match with array" ;
    }else{
        cout << "your output is at position " << position + 1<< endl ;
    }
    
    return 0 ;
    
}
