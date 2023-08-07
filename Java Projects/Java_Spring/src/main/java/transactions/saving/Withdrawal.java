package transactions.saving;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


import org.springframework.jdbc.core.JdbcTemplate;

import Open_Account.Saving_Account;
import connectivity.DatabaseConnectivity;

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
		HttpSession ses = request.getSession();
		Saving_Account account = (Saving_Account) ses.getAttribute("object");
		balance = account.getMoney()-money;
		if (balance > 10000)
		{
			JdbcTemplate jdbc = new JdbcTemplate(new DatabaseConnectivity().getdataDataSource());
			String query= "update saving_account set balance = " +balance+ " where accountno = "+account.getActNo();
			jdbc.update(query);
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
