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

import Open_Account.Salary_Account;
import connectivity.DatabaseConnectivity;



/**
 * Servlet implementation class ValidationSalary
 */
@WebServlet("/salarySDB")
public class ValidationSalary extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ValidationSalary() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		Salary_Account account = (Salary_Account) request.getAttribute("object");
		JdbcTemplate jdbc = new JdbcTemplate(new DatabaseConnectivity().getdataDataSource());
		String query= "select Accountno as actNo, Name, Balance as money, Pin, Time from salary_account where Accountno =" +account.getActNo();
		Salary_Account act = jdbc.queryForObject(query, new BeanPropertyRowMapper<Salary_Account>(Salary_Account.class));
		System.out.println(act.getTime());
		System.out.println(act.getActNo());
		System.out.println(act.getName());
		System.out.println(act.getPin());
		System.out.println(act.getMoney());
		HttpSession session = request.getSession();
		session.setAttribute("object", act);
		if (account.getActNo() == act.getActNo() && account.getPin() == act.getPin())
		{
			response.sendRedirect("menuSA.html");
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
