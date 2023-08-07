package Open_Account;

import java.time.LocalDateTime;

public class Salary_Account {
	
	
	int actNo;
	String name;
	int pin;
	int money;
	LocalDateTime time;

	public Salary_Account() {
		// TODO Auto-generated constructor stub
	}

	public Salary_Account(int actNo, String name, int pin, int money, LocalDateTime time) {
		this.actNo = actNo;
		this.name = name;
		this.pin = pin;
		this.money = money;
		this.time = time;
	}
	
	public Salary_Account(int actNo, int pin) {
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

	public LocalDateTime getTime() {
		return time;
	}

	public void setTime(LocalDateTime dateTime) {
		this.time = dateTime;
	}
	
}
