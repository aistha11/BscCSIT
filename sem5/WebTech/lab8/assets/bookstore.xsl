<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
    <html>
        <body>
        <h2>Book List</h2>
        <table border="2">
            <tr>
                <td>Title</td>
                <td>Price</td>
            </tr>
           <xsl:for-each select="bookstore/book">
                <tr>
                    <td><xsl:value-of select="title"/></td>
                    <td><xsl:value-of select="price"/></td>
                </tr>
           </xsl:for-each>
        </table>
        </body>
    </html>
</xsl:template>
</xsl:stylesheet>