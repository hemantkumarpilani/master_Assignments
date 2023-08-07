package Banking.Models;

import java.time.LocalDateTime;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name = "salary_account")
public class SalaryAccount {
	
	@Id
	@Column(name = "Accountno")
	int actNo;
	@Column(name = "Name")
	String name;
	@Column(name = "Pin")
	int pin;
	@Column(name = "Balance")
	int money;
	@Column(name = "Time")
	LocalDateTime time;

	public SalaryAccount() {
		// TODO Auto-generated constructor stub
	}

	public SalaryAccount(int actNo, String name, int pin, int money) {
		this.actNo = actNo;
		this.name = name;
		this.pin = pin;
		this.money = money;
//		this.time = time;
	}
	
//	public Salary_Account(int actNo, int pin) {
//		this.actNo = actNo;
//		this.pin = pin;
//	}

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
