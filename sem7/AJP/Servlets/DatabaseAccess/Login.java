package DatabaseAccess;

import java.io.*;
import java.sql.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class Login extends HttpServlet {
    Connection con = null;

    public void doPost(HttpServletRequest req, HttpServletResponse resp)
            throws IOException, ServletException {
        PrintWriter out = resp.getWriter();
        resp.setContentType("text/html");
        String url = "jdbc:mysql://localhost/javacsit";
        try {
            String n = req.getParameter("txtid");
            String p = req.getParameter("txtpass");
            Class.forName("com.mysql.jdbc.Driver");
            con = DriverManager.getConnection(url, "root", "123456");

            Statement stmt = con.createStatement();
            String sql = "select * from login where Name='" + n + "' and Password='" + p + "";
            ResultSet rs = stmt.executeQuery(sql);
            if (!rs.next()) {
                out.println("<html><head></Title> Login error </Title> </head><body>");
                out.println("<br><br><br><br><b>Unknown User </b> <br><br> :");
                out.println("<h3>Access denied </h3></body></html>");
            } else {
                out.println("<html><head></Title> Login success </Title></head><body><center>");
                out.println("<br><br><br> Welcome");
                out.println(n + "</b><br>");
                out.println("<h3>You have been Authenticated </h3> </center></body></html>");
            }
            con.close();
        } catch (SQLException se) {
            out.println("Error!!!!" + se);
        } catch (ClassNotFoundException cne) {
            out.println("Error!!!!" + cne);
        }
    }
}
