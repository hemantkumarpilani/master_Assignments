<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1" import= "org.springframework.jdbc.core.JdbcTemplate" 
    import= "connectivity.DatabaseConnectivity" import= "Open_Account.Loan_Account"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	<%
	JdbcTemplate jdbc = new JdbcTemplate(new DatabaseConnectivity().getdataDataSource());
	HttpSession ses = request.getSession();
	Loan_Account account = (Loan_Account) ses.getAttribute("object");
	out.println("Pending loan is : "+account.getMoney());
	%>
</body>
</html>