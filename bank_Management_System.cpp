#include<iostream>
#include<vector>

using namespace std;

class BankAccount{
    private:
        string accountHolder;
        double accountNumber;
        double balance;
    
    public:
    // Constructor

        BankAccount(string accoundHolder, double accountNumber, double balance){
            this->accountHolder = accoundHolder;
            this->accountNumber = accountNumber;
            this->balance = balance;
        }
    
    // Founction For Bank Acccount 
   // Deposit Memony in Bank Account
    void deposit (double amount){
        if(amount > 0){
            balance += amount;
            cout << "RS. " << amount << " Deposited Successfully \n";
            cout << "Now your New Balance is " << balance << endl;
        }else{
            cout << "Invaild deposit Amount \n";
        }
    }

    //Withdraw from Bank Account
    
    void withdraw (double amount){
        
        if( amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Your Memony is RS. " << amount << " Withdraw Successfully\n";
            cout << "Your Balance after withdraw " << balance << endl;
        }
        else{
            cout << "SORRY! Your have Enter invaild Amount\n";
        }
    }
    
    // Displaying Account Details

    void display (){
        cout << "Account Holder Name : "<< accountHolder <<endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Balance : " << balance << endl;
    }

    // Using access Modifier

    int getAccounNumber(){
        return accountNumber;
    }


};


int main(){
    vector<BankAccount> account;

    int choice ;
    while(true){
        cout << "==== Bank Management System ====\n";
        cout << "1.Create Account\n";
        cout << "2.Deposit Amount\n";
        cout << "3.Withdraw Amount\n";
        cout << "4.Display Account Details\n";
        cout << "5.Exit from here\n";
        cout << "Enter your best Option : ";
        cin >> choice;

        if(choice == 1){
            string name;
            int accountNumber;
            double totalBalance;

            cout << "Enter your Account Holder name :" ;
            cin.ignore();
            getline(cin , name);
            cout << "Enter Account Number : ";
            cin >> accountNumber;
            cout << "What is your Account Balance : ";
            cin >> totalBalance;

            account.push_back(BankAccount(name, accountNumber, totalBalance));

        }
        else if(choice == 2){
            int accountNumber;
            double amount ;
            cout << "Enter your Account Number: ";
            cin >> accountNumber;

            bool found = false;

            for(auto &vec : account){
                if(vec.getAccounNumber() == accountNumber){
                    cout << "Enter your Deposit Amount : ";
                    cin >> amount;
                    vec.deposit(amount);
                    found = true;
                    break;
                }
            }
            if(!found){
                cout << "Account Not Found.";
            }

        }
        else if(choice == 3){
            int accounNumber;
            double amount;
            cout << "Enter your Account Number : ";
            cin >> accounNumber;

            bool found = false;

            for(auto &vec: account){
                if(vec.getAccounNumber() == accounNumber){
                    cout << "Enter your WithDraw Amount : ";
                    cin >> amount ;
                    vec.withdraw(amount);
                    found = true;
                    break;
                }
            }
            if(!found){
                cout << "Sorry! Account Not Found ";
            }
        }
        else if (choice == 4){
            int accountNumber;
            double amount;
            cout << "Enter your Acccount Number : ";
            cin >> accountNumber;

            bool found = false;

            for(auto &vec: account){
                if(vec.getAccounNumber() == accountNumber){
                    vec.display();
                    found = true;
                    break;
                }
            }
            if(!found){
                cout << "Account Not Found!\n";
            }
        }
        else if (choice == 5){
            cout << "Exiting the System. Thank you!\n";
            break;
        }
        else{
            cout << "Invalid choice! Please try Again.\n";
        }
    }
   
     
    return 0;
}
    
