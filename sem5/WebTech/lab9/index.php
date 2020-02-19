<?php
    session_start();
    if(!isset($_SESSION['suserid'])){
        header('Location:login.php');
    }
?>

<!-- <button><a href="login.php">Login Now</a></button> -->
<!-- <div>You are logged In</div> -->
<button><a href="logout.php">Logout</a></button>
<br><br>


<button><a href="user.php">User Page</a></button><br><br>


<h3>This is our dashboard</h3>

<br><br>

