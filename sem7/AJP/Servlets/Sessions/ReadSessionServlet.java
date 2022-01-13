package Sessions;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class ReadSessionServlet extends HttpServlet {
    public void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        HttpSession session = request.getSession(false);
        String n = (String) session.getAttribute("uname");
        out.print("Hello " + n);
        out.close();
    }
}
