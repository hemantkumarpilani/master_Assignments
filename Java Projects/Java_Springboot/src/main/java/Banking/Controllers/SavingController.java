package Banking.Controllers;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import Banking.Models.SavingAccount;
import Banking.Services.SavingService;
import jakarta.servlet.http.HttpSession;



@Controller
public class SavingController {
	
	@Autowired
	SavingService saving;
	
	@GetMapping("/savingAccount")
	public String savingAccount()
	{
		return "Savingsaccount";
	}
	
	@GetMapping("/existingSaving")
	public String existing()
	{
		return "SA";
	}
	
	@PostMapping("/saving")
	public String addAccount(SavingAccount act)
	{	
		saving.addAccount(act);
		return "Accountcreate";
	}
	
	@PostMapping("/savings")
	public String menu(SavingAccount act1, HttpSession session)
	{
		session.setAttribute("saving", act1);
		if(saving.validation(act1))
		{
			return "menu";
		}
		else
		{
			return "invalid";
		}
	}
	
	@GetMapping("/deposit")
	public String depositPage()
	{
		return "DepositS";
	}
	
	@PostMapping("/depositS")
	public String deposit(int money)
	{
		saving.depositTransaction(money);
		return "depositAll";
	}
	
	@GetMapping("/withdrawal")
	public String withdrawalPage()
	{
		return "WithdrawalS";
	}
	
	@PostMapping("/withdrawalS")
	public String withdrawal(int money)
	{
		if (saving.withdrawalTransaction(money))
		{
			return "withdrawalAll";
		}
		else
		{
			return "conditionS";
		}
		
	}
	
	@GetMapping("/check")
	public String checkBalance(Model model)
	{
		SavingAccount act = saving.checkBalance();
		int money = act.getMoney();
		model.addAttribute("money", money);
		return "CheckBalanceS";
	}

}
