package database;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.jdbc.core.JdbcTemplate;

import Open_Account.Current_Account;
import Open_Account.Saving_Account;
import connectivity.DatabaseConnectivity;

/**
 * Servlet implementation class SavingDatabase
 */
@WebServlet("/currentdb")
public class CurrentDatabase extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public CurrentDatabase() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		Current_Account act = (Current_Account) request.getAttribute("object");
		JdbcTemplate jdbc = new JdbcTemplate(new DatabaseConnectivity().getdataDataSource());
		String sql = "insert into current_account values (?,?,?,?)";
		Object[] arg = {act.getActNo(),act.getName(),act.getMoney(),act.getPin()}; 
		jdbc.update(sql, arg);
		response.sendRedirect("Accountcreate.html");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
