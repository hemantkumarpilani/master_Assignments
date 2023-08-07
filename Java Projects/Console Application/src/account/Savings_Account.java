package account;

public class Savings_Account extends Account {
	static double interest_rate=4;
	double interest;
	double time=2.5;
	
	public Savings_Account() {
		// TODO Auto-generated constructor stub
	}
	
	public Savings_Account(double v1, String v2, double v3) {
		super(v1,v2,v3);
	}

	public void withdrawal(int amount) {
		if (this.getBalance()>10000) {
			if (this.getBalance() - amount<=10000) {
				System.out.println("Balance should be greater than 10000 rupees");
			}
			else {
				this.setBalance(this.getBalance()-amount);
				System.out.println("Balance is "+this.getBalance());
			}
		}
	}

	@Override
	public void interest_calculate() {
		interest= (this.getBalance()*interest_rate*time)/100;
		System.out.println("Interest is " +interest);
	}

	@Override
	public void overthecounter() {
		System.out.println("Over the counter activities of savings account");		
	}

	@Override
	public void accountlifecycle() {
		System.out.println("Account lifecycle of savings account");
	}

	@Override
	public void endofdayreport() {
		System.out.println("End of day report for daily transactions of savings account");
	}
	
}
