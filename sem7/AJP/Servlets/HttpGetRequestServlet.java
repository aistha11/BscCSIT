
/**
 * How do you handle HTTP request(GET) using servlet
 */
import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class HttpGetRequestServlet extends HttpServlet {

    @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res) 
                throws ServletException, IOException {
                     
        res.setContentType("text/html");
        PrintWriter pw = res.getWriter();
        pw.println("<html>");
        pw.println("<head>");
        pw.println("<title>Http Get Request using Servlet</title>");
        pw.println("</head>");
        pw.println("<body>");
        pw.println("<h2>Hello World</h2>");
        pw.println("</body>");
        pw.println("</html>");
        pw.close();
        super.doGet(req, res);
    }
}