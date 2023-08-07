package transactions.saving;

import java.io.IOException;
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

import Open_Account.Saving_Account;

/**
 * Servlet implementation class Withdrawal
 */
@WebServlet("/withdrawalS")
public class Withdrawal extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Withdrawal() {
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
		Saving_Account account = (Saving_Account) ses.getAttribute("object1");
		balance = account.getMoney()-money;
		if (balance > 10000)
		{
			Query q = session.createQuery("update Saving_Account set money=:m where actNo=:a");
			q.setParameter("m", balance);
			q.setParameter("a", account.getActNo());
			q.executeUpdate();
			tr.commit();
			session.close();
			response.sendRedirect("withdrawalAll.html");
		}
		else 
		{
			response.sendRedirect("conditionS.html");
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
