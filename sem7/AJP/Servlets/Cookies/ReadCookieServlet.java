package Cookies;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class ReadCookieServlet extends HttpServlet {
    public void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        Cookie[] ck = request.getCookies();
        if (ck != null)
            out.print("Hello " + ck[0].getValue());
        out.close();
    }

}
