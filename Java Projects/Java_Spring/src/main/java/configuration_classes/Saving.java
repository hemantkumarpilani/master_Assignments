package configuration_classes;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

import Open_Account.Saving_Account;

@Configuration
public class Saving {
	
	@Bean
	public Saving_Account account()
	{
		return new Saving_Account();
		
	}

}
