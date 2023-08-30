import java.sql.*;
import java.util.Scanner;

class MysqlConWithUserInput {
    public static void main(String args[]) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection(
                    "jdbc:mysql://localhost:3306/test",
                    "root",
                    "Pkjainbgr@30");

            Statement stmt = con.createStatement();
            Scanner scanner = new Scanner(System.in);

            System.out.println("Enter the number of customers to insert:");
            int numCustomers = scanner.nextInt();
            scanner.nextLine();  // Consume the newline character

            StringBuilder queryBuilder = new StringBuilder("INSERT INTO CUSTOMERS VALUES ");

            for (int i = 1; i <= numCustomers; i++) {
                System.out.println("Enter details for customer " + i + ":");
                System.out.print("Name: ");
                String name = scanner.nextLine();
                System.out.print("Age: ");
                int age = scanner.nextInt();
                scanner.nextLine();  // Consume the newline character
                System.out.print("Salary: ");
                int salary = scanner.nextInt();
                scanner.nextLine();  // Consume the newline character
                System.out.print("Address: ");
                String address = scanner.nextLine();

                queryBuilder.append("(")
                        .append(i).append(", '").append(name).append("', ")
                        .append(age).append(", ").append(salary).append(", '").append(address).append("')");

                if (i < numCustomers)
                    queryBuilder.append(", ");
            }

            int numRowsInserted = stmt.executeUpdate(queryBuilder.toString());
            System.out.println("Rows inserted: " + numRowsInserted);

            scanner.close();
            con.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}