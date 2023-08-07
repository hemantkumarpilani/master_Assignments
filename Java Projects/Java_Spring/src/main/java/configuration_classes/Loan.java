package configuration_classes;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

import Open_Account.Current_Account;
import Open_Account.Loan_Account;

@Configuration
public class Loan {
	
	@Bean
	public Loan_Account account()
	{
		return new Loan_Account();
		
	}

}
