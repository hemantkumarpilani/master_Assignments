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

import org.hibernate.Query;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import Open_Account.Salary_Account;
import Open_Account.Saving_Account;

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
		Configuration cfg = new Configuration();
		cfg.configure();
		SessionFactory factory = cfg.buildSessionFactory();
		Session session = factory.openSession();
		Transaction tr = session.beginTransaction();
		HttpSession ses = request.getSession();
		Salary_Account account = (Salary_Account) ses.getAttribute("object1");
		LocalTime current;
		current = LocalTime.now();
		LocalTime previous = account.getTime();
		long  difference = current.getMinute() - previous.getMinute();
		if(difference>3)
		{
			response.sendRedirect("salarynotification.html");
		}
		else 
		{
			balance = account.getMoney()+money;
			Query q = session.createQuery("update Salary_Account set money=:m, time=:t where actNo=:a");
			q.setParameter("m", balance);
			q.setParameter("a", account.getActNo());
			q.setParameter("t", current);
			q.executeUpdate();
			tr.commit();
			session.close();
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
