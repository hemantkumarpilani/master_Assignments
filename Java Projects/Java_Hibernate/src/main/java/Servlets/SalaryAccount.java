package Servlets;

import java.io.IOException;
import java.sql.Time;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import Open_Account.Salary_Account;

/**
 * Servlet implementation class SalaryAccount
 */
@WebServlet("/salary")
public class SalaryAccount extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public SalaryAccount() {
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
//		DateTimeFormatter dtf = DateTimeFormatter.ofPattern("HH:mm:ss");  
//		LocalDateTime now = LocalDateTime.now();
		RequestDispatcher rd= request.getRequestDispatcher("configuration_salary");
		Salary_Account act = new Salary_Account(no, name, pin, mon, LocalTime.now());
		request.setAttribute("object", act);
//		request.setAttribute("time", dtf.format(now));
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
