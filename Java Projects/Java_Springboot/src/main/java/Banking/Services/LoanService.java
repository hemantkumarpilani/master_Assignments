package Banking.Services;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.context.request.RequestContextHolder;
import org.springframework.web.context.request.ServletRequestAttributes;

import Banking.Models.Loan_Account;
import Banking.Models.SavingAccount;
import Banking.Repositories.LoanRepository;
import jakarta.servlet.http.HttpSession;

@Service
public class LoanService {
	
	@Autowired
	LoanRepository loan;
	
	public String addAccount(Loan_Account act)
	{
		act.setMoney(0-act.getMoney());
		loan.save(act);
		return "Account added";
	}

	public boolean validation(Loan_Account act) {
		if (loan.existsById(act.getActNo()))
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
		Loan_Account act = (Loan_Account) session.getAttribute("loan");
		Loan_Account act1 = loan.findById(act.getActNo()).get();
		act1.setMoney(act1.getMoney()+money);
		loan.save(act1);
	}

	public Loan_Account checkBalance() {
		HttpSession session =((ServletRequestAttributes) RequestContextHolder.getRequestAttributes()).getRequest().getSession();
		Loan_Account act = (Loan_Account) session.getAttribute("loan");
		Loan_Account act1 = loan.findById(act.getActNo()).get();
		return act1;
	}

}
