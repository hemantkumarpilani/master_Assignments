package validationservlet;

import java.io.IOException;



import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.springframework.jdbc.core.BeanPropertyRowMapper;
import org.springframework.jdbc.core.JdbcTemplate;

import Open_Account.Saving_Account;
import connectivity.DatabaseConnectivity;

/**
 * Servlet implementation class ValidationSaving
 */
@WebServlet("/savingsDB")
public class ValidationSaving extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ValidationSaving() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		Saving_Account account = (Saving_Account) request.getAttribute("object");
		JdbcTemplate jdbc = new JdbcTemplate(new DatabaseConnectivity().getdataDataSource());
		String query= "select Accountno as actNo, Name, Balance as money, Pin from saving_account where Accountno =" +account.getActNo();
		Saving_Account act = jdbc.queryForObject(query, new BeanPropertyRowMapper<Saving_Account>(Saving_Account.class));
		HttpSession session = request.getSession();
		session.setAttribute("object", act);
		if (account.getActNo() == act.getActNo() && account.getPin() == act.getPin())
		{
			response.sendRedirect("menu.html");
		}
		else
		{
			response.sendRedirect("invalid.html");
		}
		
			
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
