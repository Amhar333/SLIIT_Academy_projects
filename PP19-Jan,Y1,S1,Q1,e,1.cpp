#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
    int grade, second;
    cout << "grade > ";
    cin >> grade;
    second = 0;
    
    if (grade <= 65){
        if (grade >= 55){
            second = second + 1;
        }
    }
    return 0;
}
