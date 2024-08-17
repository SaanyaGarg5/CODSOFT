# include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;

    cout<<"YOU ARE USING A CALCULATOR"<<endl;

    cout<<"YOU CAN CHOOSE ANY OF THE FOLLOWING OPERATIONS"<<endl;  
    cout<<"Choose 1 for addition"<<endl;
    cout<<"Choose 2 for subtraction"<<endl;
    cout<<"Choose 3 for multiplication"<<endl;
    cout<<"Choose 4 for  Division "<<endl;
    cout<<"Choose 5 for Modulus"<<endl;
    
    int ch;
    cout<<"enter the choice"<<endl;
    cin>>ch;

    switch(ch){

        case 1:cout<<"the addition of two numbers is : "<<a+b<<endl;
               break;

        case 2:cout<<"the subtraction of two numbers is : "<<a-b<<endl;
               break;

        case 3: cout<<"The multiplication of two numbers is : "<<a*b<<endl;
                break;

        case 4: cout<<"The division of two numbers is : "<<a/b<<endl;
                break;

        case 5: cout<<"The mod of two numbers is : "<<a%b<<endl;
                break;

        default: cout<<"entered a wrong number : "<<endl;
                break; 



        return 0;      
    }

    
}