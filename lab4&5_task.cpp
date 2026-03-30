#include <iostream>
#include <string>
using namespace std;

class Branch;

class Account {
    private:
        string accountHolder;
        static string bankName;
        static float interestRate;
         float balance;
         Branch *branchs;
    public:

        Account(string accountHolder = "", float balance = 0, Branch *b = nullptr) : accountHolder(accountHolder), balance(balance), branchs(b){}

        void showbalance() const {
        cout << "Balance: " << balance << endl; 
        }
        static void updateinterest(float Rate) {
         interestRate = Rate;
        }
        static void updatebankname(string name){
            bankName = name;
        }
};

    float Account :: interestRate = 0;
    string Account :: bankName;

class Branch {
    private:
        string branchname;
        string city; 
        Account accounts[10];
        int count = 0;
       
    public:
    Branch(string city) : city(city) {}
    
  
    void addaccounts(Account account) {
        accounts[count++] = account; 
    }

};


int main() {
    Branch b1("DHA");
    Account :: updateinterest(6.00);
    Account a1("Hunain", 200000000, &b1),a2("Zain", 2500000, &b1);
    b1.addaccounts(a1);
    b1.addaccounts(a2);
    a1.showbalance();
    a2.showbalance();
    Account :: updatebankname("Meezan Bank");
  
    return 0;
}
