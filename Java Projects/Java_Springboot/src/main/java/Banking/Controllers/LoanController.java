package Banking.Controllers;

import java.time.LocalDateTime;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RestController;

import Banking.Models.Loan_Account;
import Banking.Models.SavingAccount;
import Banking.Services.LoanService;
import jakarta.servlet.http.HttpSession;


@Controller
public class LoanController {
	
	@Autowired
	LoanService loan;
	
	@GetMapping("/loanAccount")
	public String loanAccount()
	{
		return "Loanaccount";
	}
	
	@GetMapping("/existingLoan")
	public String existing()
	{
		return "Loanact";
	}
	
	@PostMapping("/loan")
	public String addAccount(Loan_Account act)
	{	
		loan.addAccount(act);
		return "Accountcreate";
	}
	
	@PostMapping("/loanS")
	public String menu(Loan_Account act, HttpSession session)
	{
		session.setAttribute("loan", act);
		if(loan.validation(act))
		{
			return "menuL";
		}
		else
		{
			return "invalid";
		}
	}
	
	@GetMapping("/depositL")
	public String depositPage()
	{
		return "DepositL";
	}
	
	@PostMapping("/depositL")
	public String deposit(int money)
	{
		loan.depositTransaction(money);
		return "depositAll";
	}
	
	@GetMapping("/pendingloan")
	public String checkBalance(Model model)
	{
		Loan_Account act = loan.checkBalance();
		int money = act.getMoney();
		model.addAttribute("money", money);
		return "CheckBalanceS";
	}

	
	
	



}
