
<?php
    session_start();
    if(isset($_SESSION['suserid']))
        header('Location:index.php');
    require 'db.php';
    if(isset($_POST['login'])){
        extract($_POST);
        $user = $pdo->prepare("SELECT * FROM tbl_user WHERE username= :username AND password= :password");
        $criteria = [
            'username' => $username,
            'password' => $password
        ];
        $user->execute($criteria);
        if($user->rowCount()==1){
            $row = $user->fetch();
            $_SESSION['suserid'] = $row['id'];
            header('Location:index.php');
        }
        else{
            echo 'Invalid Credentials. Please Try Again.';
            // header('Location:user.php');
        }
    }
?>

<h2>Login Here</h2>

<form action="" method="post">
    Username: <input type="text" name="username" id=""><br><br>
    Password: <input type="password" name="password" id=""><br><br>
    <input type="submit" value="Login" name="login">
</form>