BankAccount::BankAccount(int accountnumber, int openingbalance) {
    this.accountnumber = accountnumber;
    this.balance = balance;
}

BankAccount::depositmoney(double amount) {
    if (amount <= 0) {
        cout << "Error: attempting to deposit non-positive amount" << endl;
    }
    if (amount > 0) {
        this.balance = this.balance + amount;
    }
}

BankAccount::withdrawmoney(double amount) {
    if (amount < 0) {
        

    }
