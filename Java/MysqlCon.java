import java.sql.*;

class MysqlCon {
	public static void main(String args[]) {
		try {
			Class.forName("com.mysql.jdbc.Driver");
			Connection con = DriverManager.getConnection(
					"jdbc:mysql://localhost:3306/test",
					"root",
					"Pkjainbgr@30");

			Statement stmt = con.createStatement();
			String query = "CREATE TABLE CUSTOMERS("
							+ "ID INT, "
							+ "NAME VARCHAR(20), "
							+ "AGE INT, "
							+ "SALARY INT, "
							+ "ADDRESS VARCHAR(25) , "
							+ "PRIMARY KEY (ID))";
      	stmt.execute(query);
      	System.out.println("Table Created");
			//ResultSet rs = stmt.executeQuery("select * from student");
			//while (rs.next())
			//	System.out.println(rs.getInt(1) + "  " + rs.getString(2) + "  " + rs.getString(3));
			//con.close();
		} catch (Exception e) {
			System.out.println(e);
		}
	}
}