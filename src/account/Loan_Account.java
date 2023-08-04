package account;

public class Loan_Account extends Account {
	
	static double interest_rate=4;
	double interest;
	double time=1;
	
	public Loan_Account() {
		// TODO Auto-generated constructor stub
	}

	public Loan_Account(double v1, String v2, double v3) {
		super(v1, v2, v3);
	}
	
	public void deposit(int amount) {
		this.setBalance(this.getBalance()+amount);
		if (this.getBalance()<0) {
			System.out.println("Pending loan is " +(-this.getBalance()));
		}
		else if (this.getBalance()==0) {
			System.out.println("Balance is : "+this.getBalance());
		}
		
	}

	public void withdrawal(int amount) {
		if (this.getBalance()>=0) {
			this.setBalance(this.getBalance()-amount);
			System.out.println("Balance is " +this.getBalance());
		}
		else {
			System.out.println("Please pay your pending loan");
		}
	}

	@Override
	public void interest_calculate() {
		if (this.getBalance()<0) {
			interest= (this.getBalance()*interest_rate*time)/100;
			System.out.println("Interest is " +(-interest));
		}
	}
	
	public void check_balance() {
		if (this.getBalance()>=0) {
			System.out.println("Balance is " +this.getBalance() + " rupees");
			return;
		}
		System.out.println("Pay pending amount " +(-this.getBalance()));
	}
	
	@Override
	public void overthecounter() {
		System.out.println("Over the counter activities of loan account");		
	}

	@Override
	public void accountlifecycle() {
		System.out.println("Account lifecycle of loan account");
	}

	@Override
	public void endofdayreport() {
		System.out.println("End of day report for daily transactions of loan account");
	}

	
}
