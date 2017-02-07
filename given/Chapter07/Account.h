// Account.h is the Account class specification file.
class Account
{
 private:
   double balance;
   double intRate;
   double interest;
   int transactions;
 
 public:
 
   // Constructor
	Account(double rate = 0.045, double bal = 0.0)  
   {  balance = bal;  intRate = rate; 
      interest = 0.0; transactions = 0;
   }
 
   void makeDeposit(double amount)
   {  balance += amount;
      transactions++;
   }
 
   bool withdraw(double amount);  // Defined in account.cpp
 
   void calcInterest()
   {  interest = balance * intRate; 
      balance += interest;
   }
 
   double getBalance()
   {  return balance;
   }
 
   double getInterest()
   {  return interest;
   }
 
   int getTransactions()
   {  return transactions;
   }
};
