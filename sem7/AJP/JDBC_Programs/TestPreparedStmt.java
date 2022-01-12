// Same Code for SQL Exceptions
import java.sql.*;
public class TestPreparedStmt {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/javacsit", "root", "123456");
            PreparedStatement pstmt = conn.prepareStatement("UPDATE Student SET name = ? WHERE id = ?");
            pstmt.setString(1, "Sita");
            pstmt.setInt(2, 1);
            pstmt.executeUpdate();
            pstmt.close();
            conn.close();
        } catch (SQLException se) {
            System.out.println("SQL Error!!!! More: "+se.getMessage());
        } catch (ClassNotFoundException ce) {
            System.out.println("Class Not Found Error!!!! More: "+ce.getMessage());
        }
    }
}
