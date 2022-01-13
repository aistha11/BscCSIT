package Cookies;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class SetCookieServlet extends HttpServlet{
    public void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        String n = request.getParameter("uname");
        out.print("Welcome" + n);
        Cookie ck = new Cookie("name", n);// creating cookie object
        ck.setMaxAge(60 * 60 * 24);
        response.addCookie(ck);// adding cookie in the response
        // creating submit button
        out.print("<form action='ReadCookieServlet' method='POST'>");
        out.print("<input type=submit value='go'>");
        out.print("</form>");
        out.close();
    }
}
