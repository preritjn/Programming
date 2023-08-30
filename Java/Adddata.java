import java.sql.*;

class Adddata {
	public static void main(String args[]) {
		try {
			Class.forName("com.mysql.jdbc.Driver");
			Connection con = DriverManager.getConnection(
					"jdbc:mysql://localhost:3306/test",
                    "root", 
                    "Pkjainbgr@30");

			Statement stmt = con.createStatement();
			String query = "INSERT INTO CUSTOMERS VALUES "
                            + "(1, 'Amit', 25, 3000, 'Hyderabad'), "
                            + "(2, 'Kalyan', 27, 4000, 'Vishakhapatnam'), "
                            + "(3, 'Manyata', 25, 5000, 'Vijayawada')";
            int i = stmt.executeUpdate(query);
            System.out.println("Rows inserted: "+i);
			//ResultSet rs = stmt.executeQuery("select * from student");
			//while (rs.next())
			//	System.out.println(rs.getInt(1) + "  " + rs.getString(2) + "  " + rs.getString(3));
			//con.close();
		} catch (Exception e) {
			System.out.println(e);
		}
	}
}
