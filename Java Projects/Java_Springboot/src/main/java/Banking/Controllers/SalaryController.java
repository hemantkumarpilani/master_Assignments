package Banking.Controllers;

import java.time.LocalDateTime;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import Banking.Models.SalaryAccount;
import Banking.Models.SavingAccount;
import Banking.Services.SalaryService;
import jakarta.servlet.http.HttpSession;


@Controller
public class SalaryController {
	
	@Autowired
	SalaryService salary;
	
	@GetMapping("/salaryAccount")
	public String salaryAccount()
	{
		return "Salaryaccount";
	}
	
	@GetMapping("/existingSalary")
	public String existing()
	{
		return "Salaryact";
	}
	
	@PostMapping("/salary")
	public String addAccount(SalaryAccount act)
	{
		LocalDateTime time = LocalDateTime.now();
		act.setTime(time);
		salary.addAccount(act);
		return "Accountcreate";
	}
	
	@PostMapping("/salaryS")
	public String menu(SalaryAccount act1, HttpSession session)
	{
		session.setAttribute("salary", act1);
		if(salary.validation(act1))
		{
			return "menuSA";
		}
		else
		{
			return "invalid";
		}
	}
	
	@GetMapping("/depositSA")
	public String depositPage()
	{
		return "DepositSA";
	}
	
	@PostMapping("/depositSA")
	public String deposit(int money)
	{
		if(salary.depositTransaction(money))
		{
			return "depositAll";
		}
		else
		{
			return "salarynotification";
		}
	}
	
	@GetMapping("/withdrawalSA")
	public String withdrawalPage()
	{
		return "WithdrawalSA";
	}
	
	@PostMapping("/WithdrawalSA")
	public String withdrawal(int money)
	{
		if(salary.withdrawalTransaction(money))
		{
			return "withdrawalAll";
		}
		else
		{
			return "salarynotification";
		}
		
	}
	
	@GetMapping("/checkSA")
	public String checkBalance(Model model)
	{
		SalaryAccount act = salary.checkBalance();
		int money = act.getMoney();
		model.addAttribute("money", money);
		return "CheckBalanceSA";
	}




}
