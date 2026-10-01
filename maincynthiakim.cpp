#include <iostream>
using namespace std;
int main() {
    int start=0;
    int end=0;
    cout<<"Enter the starting whole number:";//ask user for start and end values
    cin>>start;
    cout<<"Enter the ending whole number:";
    cin>>end;
    if(start>=end){//validating start value is less than end value
        cout<<"Error: The starting number must be less than the ending number."<<endl;
    return 1;//exit the program with an error code
    }
        cout<<"\n--- FizzBuzz Results from "<<start<<" to "<<end<<" ---\n";
    for (int i=start;i<=end;++i){//Loop through every number from start to end
    if(i%3==0&&i%5==0){
        cout<<"FizzBuzz"<<endl;
    }
    else if(i%3==0){
        cout<<"Fizz"<<endl;
    } 
    else if(i%5==0){
        cout<<"Buzz"<<endl;
    } 
    else {
        cout<<i<<endl;
    }}
    return 0;
}
