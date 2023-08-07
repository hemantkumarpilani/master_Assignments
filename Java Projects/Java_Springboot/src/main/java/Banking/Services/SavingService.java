package Banking.Services;

import java.net.http.HttpRequest;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.context.request.RequestContextHolder;
import org.springframework.web.context.request.ServletRequestAttributes;

import Banking.Models.SavingAccount;
import Banking.Repositories.SavingRepository;
import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.http.HttpSession;


@Service
public class SavingService {
	
	@Autowired
	SavingRepository saving;
	
	public String addAccount(SavingAccount act)
	{
		saving.save(act);
		return "Account added";
	}
	
	public boolean validation(SavingAccount act)
	{
		if (saving.existsById(act.getAccountNo()))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public void depositTransaction(int money)
	{
		HttpSession session =((ServletRequestAttributes) RequestContextHolder.getRequestAttributes()).getRequest().getSession();
		SavingAccount act = (SavingAccount) session.getAttribute("saving");
		SavingAccount act1 = saving.findById(act.getAccountNo()).get();
		act1.setMoney(act1.getMoney()+money);
		saving.save(act1);
	}
	
	public boolean withdrawalTransaction(int money)
	{
		HttpSession session =((ServletRequestAttributes) RequestContextHolder.getRequestAttributes()).getRequest().getSession();
		SavingAccount act = (SavingAccount) session.getAttribute("saving");
		SavingAccount act1 = saving.findById(act.getAccountNo()).get();
		act1.setMoney(act1.getMoney()-money);
		if(act1.getMoney() > 10000)
		{
			saving.save(act1);
			return true;
		}
		else
		{
			return false;
		}
		
	}
	
	public SavingAccount checkBalance()
	{
		HttpSession session =((ServletRequestAttributes) RequestContextHolder.getRequestAttributes()).getRequest().getSession();
		SavingAccount act = (SavingAccount) session.getAttribute("saving");
		SavingAccount act1 = saving.findById(act.getAccountNo()).get();
		return act1;
	}
	

}
