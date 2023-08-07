package transaction.current;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


import org.springframework.jdbc.core.JdbcTemplate;

import Open_Account.Current_Account;

import connectivity.DatabaseConnectivity;

/**
 * Servlet implementation class WithdrawalC
 */
@WebServlet("/WithdrawalC")
public class WithdrawalC extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public WithdrawalC() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String mon= request.getParameter("mon");
		int money= Integer.parseInt(mon);
		int balance = 0;
		HttpSession ses = request.getSession();
		Current_Account account = (Current_Account) ses.getAttribute("object");
		balance = account.getMoney()-money;
		if(balance <= -100001)
		{
			response.sendRedirect("conditionC.html");
		}
		else 
		{
			JdbcTemplate jdbc = new JdbcTemplate(new DatabaseConnectivity().getdataDataSource());
			String query= "update current_account set balance = " +balance+ " where accountno = "+account.getActNo();
			jdbc.update(query);
			response.sendRedirect("withdrawalAll.html");
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
