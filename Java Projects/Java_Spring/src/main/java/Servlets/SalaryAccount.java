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

import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import Open_Account.Salary_Account;
import configuration_classes.Salary;
import configuration_classes.Saving;

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
		DateTimeFormatter format = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
		LocalDateTime now = LocalDateTime.now(); 
		String DateTime = now.format(format); 
		RequestDispatcher rd= request.getRequestDispatcher("salarydb");
		ApplicationContext ctx = new AnnotationConfigApplicationContext(Salary.class);
		Salary_Account act = (Salary_Account) ctx.getBean("account");
		act.setActNo(no);
		act.setName(name);
		act.setMoney(mon);
		act.setPin(pin);
		act.setTime(now);
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
