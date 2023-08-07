package transactions.salary;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.Time;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;
import java.util.Date;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


import org.springframework.jdbc.core.JdbcTemplate;

import Open_Account.Salary_Account;

import connectivity.DatabaseConnectivity;

/**
 * Servlet implementation class DepositSA
 */
@WebServlet("/depositSA")
public class DepositSA extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public DepositSA() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @throws IOException 
	 * @throws ServletException 
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException{
		String mon= request.getParameter("mon");
		int money= Integer.parseInt(mon);
		int balance = 0;
		HttpSession session = request.getSession();
		Salary_Account act = (Salary_Account) session.getAttribute("object");
		balance = act.getMoney();
		balance = balance+money;
		JdbcTemplate jdbc = new JdbcTemplate(new DatabaseConnectivity().getdataDataSource());
		LocalDateTime datetime = LocalDateTime.now();
		int minute = act.getTime().getMinute()- datetime.getMinute();
		if(minute>40)
		{
			response.sendRedirect("salarynotification.html");
		}
		else 
		{
			String query= "update salary_account set balance = " +balance+ " , time = "  + "\""+datetime+"\"" +  " where accountno = " +act.getActNo();
			jdbc.update(query);
			response.sendRedirect("depositAll.html");
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
