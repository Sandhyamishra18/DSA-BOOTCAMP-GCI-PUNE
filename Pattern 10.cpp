#include<iostream>
using namespace std;
int main (){
    int n;
    cin>> n;
    int star = 1;
    int space = n / 2;
    
    // Write your code here
    for( int i = 1; i <= n; i++){
        for( int j =1 ; j <= space ; j++){
            cout<<"\t";
        }
        for( int j = 1 ; j <= star; j++){
            if ( j == 1 || j == star)
            {
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
           
        }
//         cout<<endl;
         
        if ( i <= n / 2 ){
                 star +=2;
                space --;
               
            }
            else {
                star -=2;
                space ++;
                
            } 
            cout<<endl;
    }
    
}
