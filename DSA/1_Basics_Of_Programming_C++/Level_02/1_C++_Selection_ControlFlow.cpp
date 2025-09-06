//-----> SELECTION CONTROL STRUCTURES



//--->  IF Statement
/*
#include<iostream>
using namespace std;

int main(){
    // Example 1: Check positive
    int num = 10;
    if(num > 0){
        cout<<num<<" is positive"<<endl;
    }

    // Example 2: Check voting eligibility
    int age = 20;
    if(age >= 18){
        cout<<"Eligible to vote"<<endl;
    }

    return 0;
}
*/


//--->  IF-ELSE Statement
/*
#include<iostream>
using namespace std;

int main(){
    // Example 1: Even or odd
    int num = 7;
    if(num % 2 == 0){
        cout<<num<<" is even"<<endl;
    }else{
        cout<<num<<" is odd"<<endl;
    }

    // Example 2: Pass or fail
    int marks = 35;
    if(marks >= 40){
        cout<<"Pass"<<endl;
    }else{
        cout<<"Fail"<<endl;
    }

    return 0;
}
*/


//--->  ELSE-IF LADDER
/*
#include<iostream>
using namespace std;

int main(){
    // Example 1: Grading system
    int marks = 82;
    if(marks >= 90){
        cout<<"Grade A+"<<endl;
    }else if(marks >= 75){
        cout<<"Grade A"<<endl;
    }else if(marks >= 60){
        cout<<"Grade B"<<endl;
    }else{
        cout<<"Grade C"<<endl;
    }

    // Example 2: Temperature classification
    int temp = 30;
    if(temp > 40){
        cout<<"Very Hot"<<endl;
    }else if(temp > 25){
        cout<<"Warm"<<endl;
    }else if(temp > 10){
        cout<<"Cool"<<endl;
    }else{
        cout<<"Cold"<<endl;
    }

    return 0;
}
*/


//--->  NESTED IF
/*
#include<iostream>
using namespace std;

int main(){
    // Example 1: Check quadrant of a point
    int x = 5, y = -3;
    if(x > 0){
        if(y > 0){
            cout<<"Point lies in Quadrant I"<<endl;
        }else{
            cout<<"Point lies in Quadrant IV"<<endl;
        }
    }

    // Example 2: Scholarship eligibility
    int marks = 85;
    int income = 20000;
    if(marks >= 80){
        if(income < 25000){
            cout<<"Eligible for scholarship"<<endl;
        }else{
            cout<<"Not eligible due to high income"<<endl;
        }
    }

    return 0;
}
*/


//--->  SWITCH-CASE
/*
#include<iostream>
using namespace std;

int main(){
    // Example 1: Day of the week
    int day = 3;
    switch(day){
        case 1: cout<<"Monday"<<endl; break;
        case 2: cout<<"Tuesday"<<endl; break;
        case 3: cout<<"Wednesday"<<endl; break;
        case 4: cout<<"Thursday"<<endl; break;
        case 5: cout<<"Friday"<<endl; break;
        case 6: cout<<"Saturday"<<endl; break;
        case 7: cout<<"Sunday"<<endl; break;
        default: cout<<"Invalid day"<<endl;
    }

    // Example 2: Simple calculator
    char op = '+';
    int a = 5, b = 3;
    switch(op){
        case '+': cout<<a+b<<endl; break;
        case '-': cout<<a-b<<endl; break;
        case '*': cout<<a*b<<endl; break;
        case '/': cout<<a/b<<endl; break;
        default: cout<<"Invalid operator"<<endl;
    }

    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age : "<<endl;
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are 18."<<endl;
        break;
    
    case 17:
        cout<<"You are under-age."<<endl;
        break;
    
    default:
        cout<<"None of the case."<<endl;
        break;
    }

    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter n1 : "<<endl;
    cin>>n1;
    cout<<"Enter n2 : "<<endl;
    cin>>n2;

    cout<<"---------------------------"<<endl;

    char c;
    cout<<"Enter the operation : ";
    cin>>c;

    cout<<"---------------------------"<<endl;

    switch (c)
    {
    case '+':
        cout<<"The Addition is "<<n1+n2<<endl;
        break;
    
    case '-':
        cout<<"The Subtraction is "<<n1-n2<<endl;
        break;

    case '*':
        cout<<"The Multiplication is "<<n1*n2<<endl;
        break;

    case '/':
        cout<<"The Division is "<<n1/n2<<endl;
        break;

    default:
    cout<<"None";
        break;
    }

    cout<<"---------------------------"<<endl;

    return 0;
}
*/


//--->  TERNARY OPERATOR (?:)
/*
#include<iostream>
using namespace std;

int main(){
    // Example 1: Even or odd
    int num = 10;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout<<num<<" is "<<result<<endl;

    // Example 2: Find maximum
    int a = 15, b = 20;
    int max = (a > b) ? a : b;
    cout<<"Maximum is "<<max<<endl;

    return 0;
}
*/