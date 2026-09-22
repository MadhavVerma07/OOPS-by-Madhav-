#include <iostream>
using namespace std ;

template <class T>
class Array{
    T aaray[5];
    public:
    Array(T arr[5]){
        for(int i=0;i<5;i++){
            aaray[i]=arr[i];
        }
    }
    void display(){
        for(int i=0;i<5;i++){
            cout<<aaray[i]<<" ";
        }
    }
    void max(){
        T max=aaray[0];
        for(int i=1;i<5;i++){
            if(aaray[i]>max){
                max=aaray[i];
            }
        }
        cout<<"Max element is: "<<max<<endl;
    }
    void min(){
        T min=aaray[0];
        for(int i=1;i<5;i++){
            if(aaray[i]<min){
                min=aaray[i];
            }
        }
        cout<<"Min element is: "<<min<<endl;
    }
    void average(){
        T sum=0;
        for(int i=0;i<5;i++){
            sum+=aaray[i];
        }
        cout<<"Average is: "<<sum/5<<endl;
    }
};
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    Array<int> a(arr);
    a.display();
    a.max();
    a.min();
    a.average();
    return 0;
}