#include <iostream>
using namespace std ;

template < class T >

T Larger( T x,T y ){

    return  x>y?x:y ;
}
template < class T >
void swapValues( T &x,T &y){
    T temp = x;
    x = y;
    y = temp;
}


int main(){
    Larger(3,5);
    int x = 10 ,y=20;
   swapValues(x,y);
   cout<<x<<" "<<y<<endl;
return 0 ; 
}