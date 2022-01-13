package Sessions;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class SetSessionServlet extends HttpServlet {
    public void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        String n = request.getParameter("uname");
        out.print("Welcome" + n);
        HttpSession session = request.getSession();
        session.setAttribute("uname", n);
        out.print("<a href='ReadSessionServlet'>Visit Here</a>");
    }
}
