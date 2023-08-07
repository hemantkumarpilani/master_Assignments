package Banking.Models;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name = "saving_account")
public class SavingAccount {
	
	@Id
	@Column(name = "Accountno")
	int AccountNo;
	@Column(name = "Name")
	String name;
	@Column(name = "Pin")
	int pin;
	@Column(name = "Balance")
	int money;
	
	public SavingAccount() {
		// TODO Auto-generated constructor stub
	}

	public SavingAccount(int actNo, String name, int pin, int money) {
		this.AccountNo = actNo;
		this.name = name;
		this.pin = pin;
		this.money = money;
	}

	public int getAccountNo() {
		return AccountNo;
	}

	public void setAccountNo(int actNo) {
		this.AccountNo = actNo;
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

	@Override
	public String toString() {
		return "SavingAccount [AccountNo=" + AccountNo + ", name=" + name + ", pin=" + pin + ", money=" + money + "]";
	}
	
	

}
