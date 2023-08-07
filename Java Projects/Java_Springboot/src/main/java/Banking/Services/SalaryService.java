package Banking.Services;

import java.time.LocalDateTime;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.web.context.request.RequestContextHolder;
import org.springframework.web.context.request.ServletRequestAttributes;

import Banking.Models.SalaryAccount;
import Banking.Repositories.SalaryRepository;
import jakarta.servlet.http.HttpSession;



@Service
public class SalaryService {
	
	@Autowired
	SalaryRepository salary;
	
	public String addAccount(SalaryAccount act)
	{
		salary.save(act);
		return "Account added";
	}
	
	public boolean validation(SalaryAccount act)
	{
		if (salary.existsById(act.getActNo()))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public boolean depositTransaction(int money)
	{
		HttpSession session =((ServletRequestAttributes) RequestContextHolder.getRequestAttributes()).getRequest().getSession();
		SalaryAccount act = (SalaryAccount) session.getAttribute("salary");
		SalaryAccount act1 = salary.findById(act.getActNo()).get();
		LocalDateTime datetime = LocalDateTime.now();
		int minutes = act1.getTime().getMinute()-datetime.getMinute();
		if(minutes > 10)
		{
			return false;
		}
		else
		{
			act1.setMoney(act1.getMoney()+money);
			act1.setTime(datetime);
			salary.save(act1);
			return true;
		}
	}
	
	public boolean withdrawalTransaction(int money)
	{
		HttpSession session =((ServletRequestAttributes) RequestContextHolder.getRequestAttributes()).getRequest().getSession();
		SalaryAccount act = (SalaryAccount) session.getAttribute("salary");
		SalaryAccount act1 = salary.findById(act.getActNo()).get();
		LocalDateTime datetime = LocalDateTime.now();
		int minutes = act1.getTime().getMinute()-datetime.getMinute();
		if(minutes > 10)
		{
			return false;
		}
		else
		{
			act1.setMoney(act1.getMoney()-money);
			act1.setTime(datetime);
			salary.save(act1);
			return true;
		}
		
	}
	
	public SalaryAccount checkBalance()
	{
		HttpSession session =((ServletRequestAttributes) RequestContextHolder.getRequestAttributes()).getRequest().getSession();
		SalaryAccount act = (SalaryAccount) session.getAttribute("salary");
		SalaryAccount act1 = salary.findById(act.getActNo()).get();
		return act1;
	}

	

}
