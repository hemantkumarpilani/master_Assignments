package Servlets;

import java.io.IOException;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import Open_Account.Saving_Account;
import configuration_classes.Saving;

/**
 * Servlet implementation class SavingAccount
 */
@WebServlet("/saving")
public class SavingAccount extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public SavingAccount() {
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
		ApplicationContext ctx = new AnnotationConfigApplicationContext(Saving.class);
		Saving_Account act= (Saving_Account) ctx.getBean("account");
		act.setName(name);
		act.setActNo(no);
		act.setPin(pin);
		act.setMoney(mon);
		RequestDispatcher rd = request.getRequestDispatcher("savingdb");
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
