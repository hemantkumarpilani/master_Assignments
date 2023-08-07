package Servlets;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import Open_Account.Loan_Account;

/**
 * Servlet implementation class LoanAccount
 */
@WebServlet("/loan")
public class LoanAccount extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public LoanAccount() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String actNo= request.getParameter("act");
		String name= request.getParameter("username");
		String money= request.getParameter("bal");
		String p= request.getParameter("pin");
		int mon= Integer.parseInt(money);
		int no= Integer.parseInt(actNo);
		int pin= Integer.parseInt(p);
		mon = 0-mon;
		RequestDispatcher rd= request.getRequestDispatcher("configuration_loan");
		Loan_Account act = new  Loan_Account(no, name, pin, mon);
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
