package Banking.Models;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name = "current_account")
public class Current_Account {
	
	@Id
	@Column(name = "Accountno")
	int actNo;
	@Column(name = "Name")
	String name;
	@Column(name = "Pin")
	int pin;
	@Column(name = "Balance")
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

	@Override
	public String toString() {
		return "Current_Account [actNo=" + actNo + ", name=" + name + ", pin=" + pin + ", money=" + money + "]";
	}
	
	
	
}
