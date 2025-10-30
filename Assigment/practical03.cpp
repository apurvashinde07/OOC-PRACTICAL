#include<iostream>
using namespace std;

class SavingAccount{
    private:
    string accountHoldername;
    int accountNumber;
    double balance;
    double interestRate;
    public:
    SavingAccount(string name,int accNumber,double initialbalance, double rate)   
    {
        accountHoldername=name;
        accountNumber=accNumber;
        balance=initialbalance;
        interestRate=rate;
    } 
    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"deposited: "<<amount<<endl;
        }
    }
    void withdraw(double amount){
        if(amount>0 && amount<=balance){
            balance=amount;
            cout<<"withdraw: "<<amount<<endl;
        }
        else{
            cout<<"insufficient balance"<<endl;
        }
    }
    void applyInterest(){
        double interest=balance*interestRate/100;
        balance+=interest;
        cout<<"Interest Applied: "<<interest<<endl;
    }
    void display(){
        cout<<"[saving Account]"<<endl;
        cout<<"Account Holder: "<<accountHoldername<<endl;
        cout<<"Account number: "<<accountNumber<<endl;
        cout<<"balance "<<balance<<endl;
        cout<<"interest rate: "<<interestRate<<endl;
    }
};
class checkingAccount{
    private:
    string accountHoldername;
    int accountnumber;
    double balance;
    double transactionfee;

    public:
    checkingAccount(string name,int accnumber, double initialbalace, double fee){
        accountHoldername=name;
        accountnumber=accnumber;
        balance=initialbalace;
        transactionfee=fee;
    }
    void deposit(double amount){
        if(amount>0){
            balance=amount;
            cout<<"deposited: "<<amount<<endl;

        }
    }
    void withdraw(double amount){
        double total =amount+transactionfee;
        if (total<=balance){
            balance-=total;
            cout<<"withdraw: "<<amount<<transactionfee<<"fee applied"<<endl;
        }
        else{
        cout <<"insufficient balance for withdraw+fee"<<endl;
    }
    }
    void display(){
        cout<<"[checking Account]"<<endl;
        cout<<"Account Holder: "<<accountHoldername<<endl;
        cout<<"Account number: "<<accountnumber<<endl;
        cout<<"balance "<<balance<<endl;
        cout<<"transaction fee "<<transactionfee<<endl;

    }
    };
    int main(){

        cout<<"Name : Apurva Shinde"<<endl;
        cout<<"class : SY-B"<<endl;
        cout<<"Batch : B3"<<endl;
        cout<<"Roll No. : 85"<<endl;
        
        SavingAccount savings("alice",1001,5000.0, 3.0);
        checkingAccount checking("Bob",1002,3000.0,20.0);
        savings.display();
        savings.deposit(1000);
        savings.withdraw(2000);
        savings.applyInterest();
        savings.display();
        checking.display();
        checking.deposit(1000);
        checking.withdraw(2000);
        checking.display();
        return 0;
    }

//output
// Account Holder: alice
// Account number: 1001
// balance 5000
// interest rate: 3
// deposited: 1000
// withdraw: 2000
// Interest Applied: 60
// [saving Account]
// Account Holder: alice
// Account number: 1001
// balance 2060
// interest rate: 3
// [checking Account]
// Account Holder: Bob
// Account number: 1002
// balance 3000
// transaction fee 20
// deposited: 1000
// insufficient balance for withdraw+fee
// [checking Account]
// Account Holder: Bob
// Account number: 1002
// balance 1000

// transaction fee 20
