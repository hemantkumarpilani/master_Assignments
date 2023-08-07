package connectivity;

import javax.sql.DataSource;

import org.springframework.jdbc.datasource.DriverManagerDataSource;

public class DatabaseConnectivity {
	
	public DataSource getdataDataSource()
	{
		DriverManagerDataSource datasource = new DriverManagerDataSource();
		datasource.setUrl("jdbc:mysql://localhost:3306/accounts");
		datasource.setDriverClassName("com.mysql.cj.jdbc.Driver");
		datasource.setUsername("root");
		datasource.setPassword("Hemant@1234");
		return datasource;
	}
	

}
