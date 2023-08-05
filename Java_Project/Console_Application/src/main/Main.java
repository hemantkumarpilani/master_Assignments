package main;

import java.util.Scanner;

import account.Account;
import account.Current_Account;
import account.Loan_Account;
import account.Salary_Account;
import account.Savings_Account;

public class Main {

	public static void main(String[] args) {
		int choice=0;
		while (choice!=5) {
			System.out.println("1. Savings Account");
			System.out.println("2. Salary Account");
			System.out.println("3. Current Account");
			System.out.println("4. Loan Account");
			System.out.println("5. Exit");
			System.out.println("Enter choice");
			
			Scanner sc= new Scanner(System.in);
			choice= sc.nextInt();
			switch (choice) {
				case 1:
				{
					// This is switch case
					Account acc= new Savings_Account(1234567,"Hemant",25000);
					choice=0;
					while (choice!=8) {
						System.out.println("1. Deposit");
						System.out.println("2. Withdrawal");
						System.out.println("3. Check Balance");
						System.out.println("4. Interest");
						System.out.println("5. Over the counter activities");
						System.out.println("6. Account lifecycle");
						System.out.println("7. End of day report for daily transactions");
						System.out.println("8. Exit");
						System.out.println("Enter choice");
						choice= sc.nextInt();
						int amount;
						
						switch (choice) {
							case 1:
								{
									System.out.println("Enter amount to be deposit");
									amount= sc.nextInt();
									acc.deposit(amount);
									break;
								}
								
							case 2:
								{
									System.out.println("Enter amount to be withdrawal");
									amount= sc.nextInt();
									acc.withdrawal(amount);
									break;
								}
								
							case 3:
								{
									acc.check_balance();
									break;
								}
								
							case 4:
								{
									acc.interest_calculate();
									break;
								}
								
							case 5:
							{
								acc.overthecounter();
								break;
							}
							
							case 6:
							{
								acc.accountlifecycle();
								break;
							}
							
							case 7:
							{
								acc.endofdayreport();
								break;
							}
								
							default :
								System.out.println("Enter correct choice");
								break;
						}
						
					}
					choice=0;
					break;
				}
				
				case 2:
					{
						Account acc= new Salary_Account(2345678,"Puneet",20000);
						choice=0;
						while (choice!=8) {
							System.out.println("1. Deposit");
							System.out.println("2. Withdrawal");
							System.out.println("3. Check Balance");
							System.out.println("4. Interest");
							System.out.println("5. Over the counter activities");
							System.out.println("6. Account lifecycle");
							System.out.println("7. End of day report for daily transactions");
							System.out.println("8. Exit");
							System.out.println("Enter choice");
							choice= sc.nextInt();
							int amount;
							
							switch (choice) {
								case 1:
									{
										System.out.println("Enter amount to be deposit");
										amount= sc.nextInt();
										acc.deposit(amount);
										break;
									}
									
								case 2:
									{
										System.out.println("Enter amount to be withdrawal");
										amount= sc.nextInt();
										acc.withdrawal(amount);
										break;
									}
									
								case 3:
									{
										acc.check_balance();
										break;
									}
									
								case 4:
									{
										acc.interest_calculate();
										break;
									}
									
								case 5:
								{
									acc.overthecounter();
									break;
								}
								
								case 6:
								{
									acc.accountlifecycle();
									break;
								}
								
								case 7:
								{
									acc.endofdayreport();
									break;
								}
									
								default :
									System.out.println("Enter correct choice");
									break;
							}
					
						}
						choice=0;
						break;
					}
					
				case 3:
					{
						Account acc= new Current_Account(3456789,"Lalit",50000);
						choice=0;
						while (choice!=8) {
							System.out.println("1. Deposit");
							System.out.println("2. Withdrawal");
							System.out.println("3. Check Balance");
							System.out.println("4. Interest");
							System.out.println("5. Over the counter activities");
							System.out.println("6. Account lifecycle");
							System.out.println("7. End of day report for daily transactions");
							System.out.println("8. Exit");
							System.out.println("Enter choice");
							choice= sc.nextInt();
							int amount;
							
							switch (choice) {
								case 1:
									{
										System.out.println("Enter amount to be deposit");
										amount= sc.nextInt();
										acc.deposit(amount);
										break;
									}
									
								case 2:
									{
										System.out.println("Enter amount to be withdrawal");
										amount= sc.nextInt();
										acc.withdrawal(amount);
										break;
									}
									
								case 3:
									{
										acc.check_balance();
										break;
									}
									
								case 4:
									{
										acc.interest_calculate();
										break;
									}
									
								case 5:
								{
									acc.overthecounter();
									break;
								}
								
								case 6:
								{
									acc.accountlifecycle();
									break;
								}
								
								case 7:
								{
									acc.endofdayreport();
									break;
								}
									
								default :
									System.out.println("Enter correct choice");
									break;
							}
					
						}
						choice=0;
						break;
					}
						
					case 4:
					{
						Account acc= new Loan_Account(4567890,"Abhijeet",-50000);
						choice=0;
						while (choice!=8) {
							System.out.println("1. Deposit");
							System.out.println("2. Withdrawal");
							System.out.println("3. Check Balance");
							System.out.println("4. Interest");
							System.out.println("5. Over the counter activities");
							System.out.println("6. Account lifecycle");
							System.out.println("7. End of day report for daily transactions");
							System.out.println("8. Exit");
							choice= sc.nextInt();
							int amount;
							
							switch (choice) {
								case 1:
									{
										System.out.println("Enter amount to be deposit");
										amount= sc.nextInt();
										acc.deposit(amount);
										break;
									}
									
								case 2:
									{
										System.out.println("Enter amount to be withdrawal");
										amount= sc.nextInt();
										acc.withdrawal(amount);
										break;
									}
									
								case 3:
									{
										acc.check_balance();
										break;
									}
									
								case 4:
									{
										acc.interest_calculate();
										break;
									}
									
								case 5:
								{
									acc.overthecounter();
									break;
								}
								
								case 6:
								{
									acc.accountlifecycle();
									break;
								}
								
								case 7:
								{
									acc.endofdayreport();
									break;
								}
									
								default :
									System.out.println("Enter correct choice");
									break;
							}
					
						}
						choice=0;
						break;
					}
					
				default:
					System.out.println("Enter correct choice");
					break;
			}
		}
		   
	}

}
