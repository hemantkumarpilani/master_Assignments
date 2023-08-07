<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1" import= "org.springframework.jdbc.core.JdbcTemplate" 
    import= "connectivity.DatabaseConnectivity" import= "Open_Account.Current_Account"%>
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
	Current_Account account = (Current_Account) ses.getAttribute("object");
	out.println("Balance is : "+account.getMoney()+ " rupees" );
	%>
</body>
</html>