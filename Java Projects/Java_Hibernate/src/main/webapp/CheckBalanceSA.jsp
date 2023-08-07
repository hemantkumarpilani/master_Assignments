<%@page import="Open_Account.Salary_Account"%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1" import= "org.hibernate.Session" import= "org.hibernate.SessionFactory"
    import= "org.hibernate.Transaction" import= "Open_Account.Salary_Account"
    import= "org.hibernate.cfg.Configuration"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	<%
	Configuration cfg = new Configuration();
	cfg.configure();
	SessionFactory factory = cfg.buildSessionFactory();
	Session sesson = factory.openSession();
	Transaction tr = sesson.beginTransaction();
	HttpSession ses = request.getSession();
	Salary_Account account = (Salary_Account) ses.getAttribute("object1");
	out.println("Balance is : "+account.getMoney());
	%>
</body>
</html>