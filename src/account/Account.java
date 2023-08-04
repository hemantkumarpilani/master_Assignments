package account;

public abstract class Account {
	private double AccountNo;
	private String Name;
	private double Balance;
	
	public Account() {
		// TODO Auto-generated constructor stub
	}
	
	public Account(double accountNo, String name, double balance) {
		AccountNo = accountNo;
		Name = name;
		Balance = balance;
	}

	public double getAccountNo() {
		return AccountNo;
	}

	public void setAccountNo(double accountNo) {
		AccountNo = accountNo;
	}

	public String getName() {
		return Name;
	}

	public void setName(String name) {
		Name = name;
	}

	public double getBalance() {
		return Balance;
	}

	public void setBalance(double balance) {
		Balance = balance;
	}

	public  void deposit(int amount) {
		Balance += amount;
		System.out.println("Balance is " +Balance);
	}
	
	public abstract void withdrawal(int amount); 
	
	public void check_balance() {
		System.out.println("Balance is " +Balance + " rupees");
	}
	
	public abstract void interest_calculate();
	
	public abstract void overthecounter();
	
	public abstract void accountlifecycle();
	
	public abstract void endofdayreport();
	
}
