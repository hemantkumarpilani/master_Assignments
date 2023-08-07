package Banking.Controllers;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import Banking.Models.Current_Account;
import Banking.Models.SavingAccount;
import Banking.Services.CurrentService;
import jakarta.servlet.http.HttpSession;



@Controller
public class CurrentController {
	
	@Autowired
	CurrentService current;
	
	@GetMapping("/currentAccount")
	public String currentAccount()
	{
		return "Currentaccount";
	}
	
	@GetMapping("/existingCurrrent")
	public String existing()
	{
		return "Currentact";
	}
	
	@PostMapping("/current")
	public String addAccount(Current_Account act)
	{	
		current.addAccount(act);
		return "Accountcreate";
	}
	
	@PostMapping("/currentS")
	public String menu(Current_Account act, HttpSession session)
	{
		session.setAttribute("current", act);
		if(current.validation(act))
		{
			return "menuC";
		}
		else
		{
			return "invalid";
		}
	}
	
	@GetMapping("/depositC")
	public String depositPage()
	{
		return "DepositC";
	}
	
	@PostMapping("/depositC")
	public String deposit(int money)
	{
		current.depositTransaction(money);
		return "depositAll";
	}
	
	@GetMapping("/withdrawalC")
	public String withdrawalPage()
	{
		return "WithdrawalC";
	}
	
	@PostMapping("/WithdrawalC")
	public String withdrawal(int money)
	{
		if (current.withdrawalTransaction(money))
		{
			return "withdrawalAll";
		}
		else
		{
			return "conditionC.html";
		}
		
	}
	
	@GetMapping("/checkCurrent")
	public String checkBalance(Model model)
	{
		Current_Account act = current.checkBalance();
		int money = act.getMoney();
		model.addAttribute("money", money);
		return "CheckBalanceC";
	}




}
