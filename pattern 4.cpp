#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
     int star =n;
     int space = 0;

    //write your code here
    for(int i=1 ; i <=n ; i++){
        for( int j=1 ; j <= space ;j++){
            cout <<"\t";
        }
        for (int j=1 ; j <= star ; j++){
            cout<<"*\t";
        }
        cout<<endl;
       star--; 
       space ++;
       
    }

}
