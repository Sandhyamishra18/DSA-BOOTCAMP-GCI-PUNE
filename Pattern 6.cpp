#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
     int star = n / 2 + 1;
    int space = 1;
    
    //write your code here
    for( int i = 1; i <=n; i++){
        for( int j = 1; j<=star ; j++){
            cout<<"*\t";
        }
        for(int j =1; j <= space ; j++){
            cout<<"\t";
            
        }
        for( int j = 1;j<= star ; j++){
            cout<<"*\t";
        }
    
    
    cout<<endl;
if ( i <= n/2){
    star --;
    space += 2;
   
}    
  else{
      star ++;
      space -= 2;
  }
}
}
