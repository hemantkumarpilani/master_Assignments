package Banking.Controllers;

import org.springframework.web.bind.annotation.GetMapping;

@org.springframework.stereotype.Controller

public class HomeController {
	
	@GetMapping("/homepage")
	public String homepage()
	{
		return "Homepage";
	}
	
	@GetMapping("/open")
	public String openAccount()
	{
		return "Openaccount";
	}
	
	@GetMapping("/existing")
	public String existingAccount()
	{
		return "ExistingAccount";
	}

}
