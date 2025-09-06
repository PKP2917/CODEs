//-----> LOOPS

/* 
- Loops are used when we want to execute a block of code multiple times.
- Instead of writing the same statements again and again, loops help us repeat tasks efficiently.

Types of loops in C++
    1) for loop
    2) while loop
    3) do-while loop
    Loop control statements: break, continue
*/


//---> FOR LOOP 
/*
A 'for' loop is best when the number of iterations is known in advance.
Syntax: for(initialization; condition; update){ body }
Execution: Initialization -> Condition -> Body -> Update -> Repeat until condition false.
*/

/*
//->  Example 1: Print numbers 1 to 17

#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=17; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
*/
/*
//-> Example 2: Multiplication table of 7

#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=10; i++){
        cout<<"7 x "<<i<<" = "<<7*i<<endl;
    }

    return 0;
}
*/
/*
// Example 3: Sum of first 10 natural numbers

#include<iostream>
using namespace std;

int main(){
    int sum=0;
    for(int i=1; i<=10; i++){
        sum += i;
    }
    cout<<"Sum = "<<sum<<endl;

    return 0;
}
*/


//---> WHILE LOOP 
/*
A while loop is best when the number of iterations is not known beforehand.
Syntax: while(condition){ body }
Execution: Condition -> Body -> Update -> Back to condition.
*/

/*
//-> Example 1: Print numbers 1 to 17

#include<iostream>
using namespace std;

int main(){
    int i=1;
    while(i<=17){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    return 0;
}
*/
/*
//-> Example 2: Countdown from 10

#include<iostream>
using namespace std;

int main(){
    int n=10;
    while(n>0){
        cout<<n<<" ";
        n--;
    }
    cout<<endl;

    return 0;
}
*/
/*
//-> Example 3: Print digits of a number

#include<iostream>
using namespace std;

int main(){
    int num=12345;
    while(num>0){
        cout<<num%10<<" ";
        num/=10;
    }
    cout<<endl;

    return 0;
}
*/


//---> DO-WHILE LOOP
/* 
Similar to while loop, but body executes at least once before condition is checked.
Syntax: do{ body }while(condition);
Execution: Body -> Condition -> Repeat if true.
*/

/*
//-> Example 1: Print numbers 1 to 17

#include<iostream>
using namespace std;

int main(){
    int j=1;
    do{
        cout<<j<<" ";
        j++;
    }while(j<=17);
    cout<<endl;

    return 0;
}
*/
/*
//-> Example 2: Menu-driven program

#include<iostream>
using namespace std;

int main(){
    int choice;
    do{
        cout<<"1. Say Hello\n2. Exit\nEnter choice: ";
        cin>>choice;
        if(choice==1) cout<<"Hello!"<<endl;
    }while(choice!=2);

    return 0;
}
*/
/*
//-> Example 3: Factorial using do-while

#include<iostream>
using namespace std;

int main(){
    int k=5, fact=1, counter=1;
    do{
        fact *= counter;
        counter++;
    }while(counter<=k);
    cout<<"Factorial of 5 = "<<fact<<endl;

    return 0;
}
*/


//---> BREAK STATEMENT
/*
Break is used to exit a loop immediately.
Control jumps to the first statement after the loop.
*/

/*
//-> Example 1: Stop loop when i==5

#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=10; i++){
        if(i==5) break;
        cout<<i<<" ";
    }
    cout<<" <- loop stopped at 5"<<endl;

    return 0;
}
*/
/*
//-> Example 2: Search element in array

#include<iostream>
using namespace std;

int main(){
    int arr[5]={3,7,2,9,5}, key=9;
    for(int i=0; i<5; i++){
        if(arr[i]==key){
            cout<<"Element found at index "<<i<<endl;
            break;
        }
    }

    return 0;
}
*/
/*
//-> Example 3: Infinite loop with break

#include<iostream>
using namespace std;

int main(){
    int count=0;
    while(true){
        cout<<"Count = "<<count<<endl;
        if(count==3) break;
        count++;
    }

    return 0;
}
*/


//---> CONTINUE STATEMENT
/*
Continue is used to skip the current iteration and move to the next one.
*/

/*
//-> Example 1: Skip when i==5

#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=10; i++){
        if(i==5) continue;
        cout<<i<<" ";
    }
    cout<<" <- skipped 5"<<endl;

    return 0;
}
*/
/*
//-> Example 2: Print only even numbers

#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=10; i++){
        if(i%2!=0) continue;
        cout<<i<<" ";
    }

    return 0;
}
*/
/*
//-> Example 3: Skip negative inputs

#include<iostream>
using namespace std;

int main(){
    int arr[6]={3,-2,5,-7,8,1};
    for(int i=0; i<6; i++){
        if(arr[i]<0) continue;
        cout<<"Positive: "<<arr[i]<<endl;
    }

    return 0;
}
*/


//-> Problem Solving

/* 
//-> Factorial of a Number n

#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    int fac=1;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    while (i<=n)
    {
        fac=fac*i;
        i++;  
    }

    cout<<"The Factorial of "<<n<<" is "<<fac<<"."<<endl;

    return 0;
}
*/

/*
//-> Sum of n Numbers

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        sum = sum + i;
        i++;
    }

    cout<<sum<<endl;

    return 0;
}
*/


/*
//-> Sum of All even numbers between i and n

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int i = 2;
    int sum = 0;

    while (i <= n)
    {
        if (i%2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }   

    cout<<sum<<endl;

    return 0;
}
*/

/*
//-> Number is Prime or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    bool a = true;

    int i = 2;

    while (i < n)
    {
        if (n%i == 0)
        {
            a = false;
        }

        i++;
    }
    
    if (a == true)
    {
        cout<<"It is Prime Number"<<endl;
    }
    else{
        cout<<"It is not a Prime Number"<<endl;
    }
    
    return 0;
}
*/