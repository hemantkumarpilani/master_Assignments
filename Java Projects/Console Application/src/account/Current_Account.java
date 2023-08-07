package account;

public class Current_Account extends Account {
	static double interest_rate=4;
	double interest;
	double time=1;
	
	public Current_Account() {
		// TODO Auto-generated constructor stub
	}
	
	public Current_Account(double v1, String v2, double v3) {
		super(v1, v2, v3);
	}

	public void withdrawal(int amount) {
		this.setBalance(this.getBalance()-amount);
		if (this.getBalance()<(-100000)) {
			System.out.println("Reach withdrawal limit");
			return;
		}
		System.out.println("Balance is " +this.getBalance());
	}

	@Override
	public void interest_calculate() {
		if (this.getBalance()>0) {
			System.out.println("No interest on deposit money");
		}
		else {
			interest= (this.getBalance()*interest_rate*time)/100;
			System.out.println("Interest is " +(-interest));
		}
		
	}
	
	@Override
	public void overthecounter() {
		System.out.println("Over the counter activities of current account");		
	}

	@Override
	public void accountlifecycle() {
		System.out.println("Account lifecycle of current account");
	}

	@Override
	public void endofdayreport() {
		System.out.println("End of day report for daily transactions of current account");
	}

}
