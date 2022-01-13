<html>
    <body>
        <%
        String ISBN = request.getParameter("ISBN");
        String title = request.getParameter("title");
        String auth = request.getParameter("authors");
        int price = Integer.parseInt(request.getParameter("price"));
        String pub=request.getParameter("pub");
        %>
        <h2>
            <center>
                <%@ page import = "java.sql.*" %>
                <%
                Connection con= DriverManager.getConnection("jdbc:mysql://localhost/ebook",
                "root", "123456");
                Statement stmt = conn.createStatement();
                String sql ="insert into books values (‘"+ISBN+ "’, ‘“+title+”’,’“+auth+”’,
                ‘" +price+"’, ‘“+pub+”’)"; stmt.executeUpdate (sql);
                out.println("Book is Added Successfully");
                %>
            <center>
        <h2>
    </body>
</html>