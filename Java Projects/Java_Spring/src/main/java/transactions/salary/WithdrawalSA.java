package transactions.salary;

import java.io.IOException;

import java.time.LocalDateTime;



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
		HttpSession session = request.getSession();
		Salary_Account act = (Salary_Account) session.getAttribute("object");
		System.out.println(act.getTime());
		balance = act.getMoney();
		balance = balance-money;
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
