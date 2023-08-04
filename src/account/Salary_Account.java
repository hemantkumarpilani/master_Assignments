package account;

import java.time.LocalDate;
import java.time.Period;

public class Salary_Account extends Account {
	LocalDate date;
	LocalDate deposit_date;
	LocalDate withdrawal_date;
	static double interest_rate=4;
	double interest;
	double time=1;
	
	public Salary_Account() {
		// TODO Auto-generated constructor stub
	}
	
	public Salary_Account(double v1, String v2, double v3) {
		super(v1,v2,v3);
		this.date= LocalDate.of(1993, 3, 23);
		this.deposit_date= date;
	}
	
	public void deposit(int amount) {
		this.deposit_date= LocalDate.of(1993, 4, 25);
		Period difference= Period.between(date, deposit_date);
		if (difference.getMonths()>2)
		{
			System.out.println("Your account is frozen");
		}
		else
		{
			this.setBalance(this.getBalance()+amount);
			System.out.println("Balance is " +this.getBalance());
		}
	}

	public void withdrawal(int amount) {
		this.withdrawal_date= LocalDate.of(1993, 4, 20);
		Period difference= Period.between(date, withdrawal_date);
		Period difference1= Period.between(deposit_date, withdrawal_date);
		if ((difference.getMonths()>2) || (difference1.getMonths()>2))
		{
			System.out.println("Your account is frozen");
		}
		else
		{
			if (this.getBalance()==0) {
				System.out.println("Insufficient balance");
				return;
			}
			this.setBalance(this.getBalance()-amount);
			System.out.println("Balance is " +this.getBalance());
		}
	}
	
	

	@Override
	public void interest_calculate() {
		interest= (this.getBalance()*interest_rate*time)/100;
		System.out.println("Interest is " +interest);
	}
	
	@Override
	public void overthecounter() {
		System.out.println("Over the counter activities of salary account");		
	}

	@Override
	public void accountlifecycle() {
		System.out.println("Account lifecycle of salary account");
	}

	@Override
	public void endofdayreport() {
		System.out.println("End of day report for daily transactions of salary account");
	}

}
