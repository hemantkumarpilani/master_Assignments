package Open_Account;




public class Loan_Account {

	
	int actNo;
	String name;
	int pin;
	int money;
	
	public Loan_Account() {
		// TODO Auto-generated constructor stub
	}

	public Loan_Account(int actNo, String name, int pin, int money) {
		this.actNo = actNo;
		this.name = name;
		this.pin = pin;
		this.money = money;
	}
	
	public Loan_Account(int actNo, int pin) {
		this.actNo = actNo;
		this.pin = pin;
	}

	public int getActNo() {
		return actNo;
	}

	public void setActNo(int actNo) {
		this.actNo = actNo;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getPin() {
		return pin;
	}

	public void setPin(int pin) {
		this.pin = pin;
	}

	public int getMoney() {
		return money;
	}

	public void setMoney(int money) {
		this.money = money;
	}
}
