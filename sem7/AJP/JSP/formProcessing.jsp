<html>
  <head>
    <title>Form Processing</title>
  </head>
  <body>
    <h2>Processing HTML Form</h2>
    <%
        int x=Integer.parseInt(request.getParameter("first"));
        int y=Integer.parseInt(request.getParameter("second"));
        int z=x+y;
        out.println("Sum="+z);
    %>
  </body>
</html>
