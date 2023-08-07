package retrievalservlet;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import Open_Account.Loan_Account;



/**
 * Servlet implementation class LoanAct
 */
@WebServlet("/loanS")
public class LoanAct extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public LoanAct() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String actNo= request.getParameter("act");
		String p= request.getParameter("pin");
		int pin= Integer.parseInt(p);
		int no= Integer.parseInt(actNo);
		Loan_Account act = new Loan_Account(no,pin); 
		RequestDispatcher rd= request.getRequestDispatcher("loannDB");
		request.setAttribute("object", act);
		rd.forward(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
