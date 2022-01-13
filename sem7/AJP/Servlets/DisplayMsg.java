
/**
 * WAP in java using servlet to display "Hello World!!"
 */
import java.io.*;
import javax.servlet.*;

public class DisplayMsg extends GenericServlet {

    @Override
    public void service(ServletRequest req, ServletResponse res)
            throws ServletException, IOException {

        res.setContentType("text/html");
        PrintWriter pw = res.getWriter();
        pw.println("<html>");
        pw.println("<head>");
        pw.println("<title>Display Msg</title>");
        pw.println("</head>");
        pw.println("<body>");
        pw.println("<h2>Hellow World!!!</h2>");
        pw.println("</body>");
        pw.println("</html>");
        pw.close();

    }
}
