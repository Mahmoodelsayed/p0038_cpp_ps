#include <iostream>

using namespace std;

int main()
{
    // prompting user for 2 operands and an operator 1.5/2
    float num1, num2;
    char proc;
    
    cout<<"please Enter Two number :)\nnow you can Enter frist number a= ";
    cin>>num1;
    if(cin.fail()==true)
    {
        cout<<"Error please input number\n";
        system("pause");
        return 5;
    }
    
    cout<<"now you can Enter scond number b= ";
    cin>>num2;
    if(cin.fail()==true)
    {
        cout<<"Error please input number\n";
        system("pause");
        return 5;
    }
    
    int a=num1, b=num2;
    
    cout<<"Choose operation (+,-,*,/): \n";
    cin>>proc;

    // checking user inputs and processing 2/4
    // printing the result if all data is valid 1/1
    switch (proc)
    {
        case '+':cout<<"("<<num1<<"+"<<num2<<")= "<<num1+num2<<endl;break;
        case '-':cout<<"("<<num1<<"-"<<num2<<")= "<<num1-num2<<endl;break;
        case '*':cout<<"("<<num1<<"*"<<num2<<")= "<<num1*num2<<endl;break;
        
        case '/':{
            if(num2!=0)
                cout<<"("<<num1<<"/"<<num2<<")= "<<num1/num2<<endl;
            else
            {
                if(num1!=0)
                    cout<<"Error"<<num1<<"/0 Wrong\n";
                else
                    cout<<"Infinite number of solutions: (0 / 0) is Undefined Quantity.\n";
            }
        } // 0.5/1
        break;

        case '%':{
            if(num1==a && num2==b)
                cout<<"("<<num1<<"%"<<num2<<")= "<<a%b<<endl;
            else
                cout<<"Cannot execute modulo operation for floating point numbers.\n";
        } // 0/1
        break;
        
        default:cout<<"Wrong choice you can choice between(-,+,*,/)\n";break; // 1/1
    } // 0.5/1
    
    return 0;
}
// good work 👍 7/10
