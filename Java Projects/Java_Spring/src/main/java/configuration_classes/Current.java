package configuration_classes;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

import Open_Account.Current_Account;

@Configuration
public class Current {
	
	@Bean
	public Current_Account account()
	{
		return new Current_Account();
		
	}

}
