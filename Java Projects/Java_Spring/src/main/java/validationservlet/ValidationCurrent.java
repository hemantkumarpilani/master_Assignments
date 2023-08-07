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

import Open_Account.Current_Account;

import connectivity.DatabaseConnectivity;

//import Existing_Account.Account;

/**
 * Servlet implementation class ValidationCurrent
 */
@WebServlet("/currenttDB")
public class ValidationCurrent extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ValidationCurrent() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		Current_Account account = (Current_Account) request.getAttribute("object");
		JdbcTemplate jdbc = new JdbcTemplate(new DatabaseConnectivity().getdataDataSource());
		String query= "select Accountno as actNo, Name, Balance as money, Pin from current_account where Accountno =" +account.getActNo();
		Current_Account act = jdbc.queryForObject(query, new BeanPropertyRowMapper<Current_Account>(Current_Account.class));
		HttpSession session = request.getSession();
		session.setAttribute("object", act);
		if (account.getActNo() == act.getActNo() && account.getPin() == act.getPin())
		{
			response.sendRedirect("menuC.html");
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
