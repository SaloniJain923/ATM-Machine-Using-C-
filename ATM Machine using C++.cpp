#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Bank{
    
    private:
    string name;
    int account_number;
    char account_type[10];
    int amount = 0;
    int balance = 0;
    
    public:
    
    void setvalue()
    {
        cout<<"Enter Name : \n";
        cin.ignore();
        getline(cin,name);
        
        cout<<"Enter the Account Number :\n";
        cin>>account_number;
        cout<<"Enter the Account Type :\n";
        cin>>account_type;
        cout<<"Enter Balance :\n";
        cin>>balance;
    }
    
    void showdata()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Account Number : "<<account_number<<endl;
        cout<<"Account Type : "<<account_type<<endl;
        cout<<"Balance : "<<balance<<endl;
        
    }
    
    void deposit()
    {
        cout<<"Enter the amount to be deposited : \n";
        cin>>amount;
    }
    
    void showbalance()
    {
        balance = balance + amount;
        cout<<"Your Total Balance is : "<<balance<<endl;
    }
    
    void withdraw()
    {
        int amt, available_amount;
        cout<<"Enter the amount that you wish to withdraw : \n";
        cin>>amt;
        available_amount = balance - amt;
        cout<<"Available Balance is : "<<available_amount<<endl;
    }
};

int main()
{
    Bank b;
    int choice;
    while(1)
    {
        cout<<"\n------------------------------------------"
            <<"\n------------------------------------------"
            <<"\n        WELCOME TO ATM MACHINE            "
            <<"\n------------------------------------------"
            <<"\n------------------------------------------\n\n";
        cout<<"Enter your choice :\n";
        cout<<" 1. Enter Name, Account Number, Account Type\n"
            <<" 2. Balance Enquiry\n"
            <<" 3. Deposit Money\n"
            <<" 4. Withdraw Money\n"
            <<" 5. Cancel\n";
        cin>>choice;
        
        switch(choice)
        {
            case 1 :
                b.setvalue();
                break;
            case 2 :
                b.showdata();
                break;
            case 3 :
                b.deposit();
                b.showbalance();
                break;
            case 4 :
                b.withdraw();
                break;
            case 5 :
                exit(1);
                break;
            default :
                cout<<"Invalid Choice\n";
        }
    }
}