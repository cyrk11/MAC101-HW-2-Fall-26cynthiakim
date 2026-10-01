#include <iostream>
using namespace std;
int main() {
    int number;//create an integer variable
    cout<<"Enter a single whole number:";//ask user for a number
    cin>>number;//store their input
    if(number%3==0&&number%5==0){//if else logic
    cout<<"FizzBuzz"<<endl;
    }else if(number%3==0){
    cout<<"Fizz"<<endl;
    }else if(number%5==0){
    cout<<"Buzz"<<endl;
    }else{
    cout<<number<<endl;
    }
    return 0;
}
