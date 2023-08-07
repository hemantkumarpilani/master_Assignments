package validationservlet;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


import org.springframework.jdbc.core.BeanPropertyRowMapper;
import org.springframework.jdbc.core.JdbcTemplate;


import Open_Account.Loan_Account;
import connectivity.DatabaseConnectivity;

//import Existing_Account.Account;

/**
 * Servlet implementation class ValidationLoan
 */
@WebServlet("/loannDB")
public class ValidationLoan extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ValidationLoan() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		Loan_Account account = (Loan_Account) request.getAttribute("object");
		JdbcTemplate jdbc = new JdbcTemplate(new DatabaseConnectivity().getdataDataSource());
		String query= "select Accountno as actNo, Name, Balance as money, Pin from loan_account where Accountno =" +account.getActNo();
		Loan_Account act = jdbc.queryForObject(query, new BeanPropertyRowMapper<Loan_Account>(Loan_Account.class));
		HttpSession session = request.getSession();
		session.setAttribute("object", act);
		if (account.getActNo() == act.getActNo() && account.getPin() == act.getPin())
		{
			response.sendRedirect("menuL.html");
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
