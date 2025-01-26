#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    string result;
    for(int i = 2; i < n; i++){
        if(n%i==0){
            result = "number is not prime";
            break;
        }else{
            result = "number is prime";
        }
    }
    cout << n << " " << result << endl;
}