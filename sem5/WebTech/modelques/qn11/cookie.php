<!-- Creating and retrievin the cookie -->
<?php
    $cookie_name = "user";
    $cookie_value = "Aistha";
    //86400 = 1 day
    setcookie($cookie_name , $cookie_value, time()+(86400*30),"/");
    if(!isset($_COOKIE[$cookie_name])){
        echo "Cookie named ' " . $cookie_name . " ' is not set!";
    }else{
        echo "Cookie ' " . $cookie_name . " ' is set!<br>";
        echo "Value is : " . $_COOKIE[$cookie_name];
    }

?>
<!-- Deleting the Cookie -->
<?php
    //set the expiration date to one hour ago
    setcookie("user","",time()-3600);
    echo "<br>Cookie 'user' is deleted";
?>
<html>
    <body>
        
    </body>
</html>
