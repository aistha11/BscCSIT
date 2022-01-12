/*
 Step 1: Load the JDBC Driver
 Step 2: Specify the name & location of the database being used
 Step 3: Connect to a database with a Connection object
 Step 4: Execute a SQL Query using a Statement oject
 Step 5: Get the results in a ResultSet object
 Step 6: Finish by closing the ResultSet, Statement and Connection objects
*/

import java.sql.*;
public class TestJDBC {

    static final String CLASSNAME = "com.mysql.cj.jdbc.Driver"; // com.mysql.jdbc.Driver for xampp
    static final String PORT = "3306"; // 3308 for xampp
    static final String DB_URL = "jdbc:mysql://localhost:" + PORT + "/javacsit";
    static final String USERNAME = "root";
    static final String PASSWORD = "123456"; // blank for xampp i.e ""

    public static void main(String[] args) {
        Connection conn = null;
        Statement stmt = null;
        ResultSet rs = null;
        try {
            Class.forName(CLASSNAME);
            conn = DriverManager.getConnection(DB_URL, USERNAME, PASSWORD);
            stmt = conn.createStatement();
            rs = stmt.executeQuery("SELECT * FROM student");
            while (rs.next()) {
                int id = rs.getInt("id");
                String name = rs.getString("name");
                int c = rs.getInt("class");
                String department = rs.getString("department");
                System.out.println("Id: " + id +
                        " Name: " + name +
                        " Class: " + c +
                        " Department: " + department);
            }
            rs.close();
            stmt.close();
            conn.close();
        } catch (SQLException se) {
            System.out.println("SQL Error");
            System.out.println(se.getMessage());
        } catch (ClassNotFoundException cexp) {
            System.out.println("Class Not Found");
            System.out.println(cexp.getMessage());
        }
    }
}