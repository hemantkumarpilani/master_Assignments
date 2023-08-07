package transaction.loan;

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


import Open_Account.Loan_Account;

import connectivity.DatabaseConnectivity;

/**
 * Servlet implementation class DepositL
 */
@WebServlet("/depositL")
public class DepositL extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public DepositL() {
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
		HttpSession session = request.getSession();
		Loan_Account act = (Loan_Account) session.getAttribute("object");
		balance = act.getMoney();
		balance = balance+money;
		JdbcTemplate jdbc = new JdbcTemplate(new DatabaseConnectivity().getdataDataSource());
		String query= "update loan_account set balance = " +balance+ " where accountno = "+act.getActNo();
		jdbc.update(query);
		response.sendRedirect("depositAll.html");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
