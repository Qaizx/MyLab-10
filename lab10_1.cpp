#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int dice,Student;
string something;

void roll(){
    dice = rand() %9 + 1;

}


string grade(int x){

    string y = "";
    if(x == 1)
        y = "A";
    else if( x == 2)
        y = "B+";
    else if( x == 3)
        y = 'B';
    else if( x == 4)
        y = "C+";
    else if( x == 5)
        y = 'C';
    else if( x == 6)
        y = "D+";
    else if( x == 7)
        y = 'D';
    else if( x == 8)
        y = 'F';
    else if( x == 9)
        y = 'W';
        
    return y;

}

int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    for(int i =0; i<3; i++){
        cin.get();
    }
    roll();
    Student = dice;
    something = grade(Student);
    cout << "You will get " << something << " in this 261102.";

}

