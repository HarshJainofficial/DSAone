// SubArray
#include <bits/stdc++.h>
using namespace std ;
void SubArray(int arr[] ,int n ){
    // Print SubArrayfrom arr[0....n-1]
    for(int i = 0 ; i < n ; i++){
        // Pick up Starting Point
        for(int j = i ; j < n ; j++){
            //Pick Up Ending Point 
            for(int k = i ; k <= j ; k++ )
            // Print SubArray between Start and Ending 
            cout << arr[k] <<" " ;
            cout << endl ;    

            
        }
        
    }
}
int main(){
    int arr[] = { 12, 11, 10 , 2  , 1};
    int n = sizeof(arr)/sizeof(arr[0]) ;
    SubArray(arr , n) ;
}