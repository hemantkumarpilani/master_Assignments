package Open_Account;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity
@Table(name = "current_account")
public class Current_Account {

	@Id
	@Column(name = "actno")
	int actNo;
	@Column(name = "name")
	String name;
	@Column(name = "pin")
	int pin;
	@Column(name = "balance")
	int money;
	
	public Current_Account() {
		// TODO Auto-generated constructor stub
	}

	public Current_Account(int actNo, String name, int pin, int money) {
		this.actNo = actNo;
		this.name = name;
		this.pin = pin;
		this.money = money;
	}

	public Current_Account(int actNo, int pin) {
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
