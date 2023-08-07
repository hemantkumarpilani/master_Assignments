package Banking.Services;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.web.context.request.RequestContextHolder;
import org.springframework.web.context.request.ServletRequestAttributes;

import Banking.Models.Current_Account;
import Banking.Models.SavingAccount;
import Banking.Repositories.CurrentRepository;
import jakarta.servlet.http.HttpSession;

@Service
public class CurrentService {
	
	@Autowired
	CurrentRepository current;
	
	public String addAccount(Current_Account act)
	{
		current.save(act);
		return "Account added";
	}

	public boolean validation(Current_Account act) {
		if (current.existsById(act.getActNo()))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	public void depositTransaction(int money) {
		HttpSession session =((ServletRequestAttributes) RequestContextHolder.getRequestAttributes()).getRequest().getSession();
		Current_Account act = (Current_Account) session.getAttribute("current");
		Current_Account act1 = current.findById(act.getActNo()).get();
		act1.setMoney(act1.getMoney()+money);
		current.save(act1);
		
	}

	public boolean withdrawalTransaction(int money) {
		HttpSession session =((ServletRequestAttributes) RequestContextHolder.getRequestAttributes()).getRequest().getSession();
		Current_Account act = (Current_Account) session.getAttribute("current");
		Current_Account act1 = current.findById(act.getActNo()).get();
		act1.setMoney(act1.getMoney()-money);
		if(act1.getMoney() <= -100001)
		{
			return false;
		}
		else
		{
			current.save(act1);
			return true;
		}
	}

	public Current_Account checkBalance() {
		HttpSession session =((ServletRequestAttributes) RequestContextHolder.getRequestAttributes()).getRequest().getSession();
		Current_Account act = (Current_Account) session.getAttribute("current");
		Current_Account act1 = current.findById(act.getActNo()).get();
		return act1;
	}

}
