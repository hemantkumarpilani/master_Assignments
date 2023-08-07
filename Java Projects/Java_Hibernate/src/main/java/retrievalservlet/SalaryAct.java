package retrievalservlet;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import Open_Account.Salary_Account;



/**
 * Servlet implementation class SalaryAct
 */
@WebServlet("/salaryS")
public class SalaryAct extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public SalaryAct() {
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
		Salary_Account act = new Salary_Account(no, pin); 
		RequestDispatcher rd= request.getRequestDispatcher("salarySDB");
		request.setAttribute("object", act);
		request.setAttribute("pin", pin);
		request.setAttribute("actno", no);
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
