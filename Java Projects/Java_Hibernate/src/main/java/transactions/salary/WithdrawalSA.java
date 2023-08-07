package transactions.salary;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.Time;
import java.time.LocalTime;

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

/**
 * Servlet implementation class WithdrawalSA
 */
@WebServlet("/WithdrawalSA")
public class WithdrawalSA extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public WithdrawalSA() {
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
			balance = account.getMoney()- money;
			Query q = session.createQuery("update Salary_Account set money=:m, time=:t where actNo=:a");
			q.setParameter("m", balance);
			q.setParameter("a", account.getActNo());
			q.setParameter("t", current);
			q.executeUpdate();
			tr.commit();
			session.close();
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
