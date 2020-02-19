<?php
    session_start();
    if(!isset($_SESSION['suserid'])){
        header('Location:login.php');
    }
?>
<?php
    // $pdo = new PDO('mysql:dbname=everestcsit;host=localhost','root','');
    require 'db.php';
    $id = $_GET['id'];
    $stmt = $pdo->query("SELECT * FROM tbl_user WHERE id = '$id'");
    $user = $stmt->fetch();

    if(isset($_POST['update'])){
        extract($_POST);
        $pdo->query("UPDATE tbl_user SET name = '$name', address='$address', email='$email', birthdate ='$birthdate' WHERE id='$id'");
        header('Location:user.php?msg=User Updated');
    }
?>

<h3>Edit User Details</h3>
<form action="" method="POST">
<input type="hidden" name="id" value="<?php echo $user['id'];?>">
    Name : <input type="text" name="name" id="" value="<?php echo $user['name'];?>"><br><br>
    Address : <input type="text" name="address" id="" value="<?php echo $user['address'];?>"><br><br>
    Email : <input type="email" name="email" id="" value="<?php echo $user['email'];?>"><br><br>
    Birth Date : <input type="date" name="birthdate" id="" value="<?php echo $user['birthdate'];?>"><br><br>
    <input type="submit" value="Update" name="update">
</form>

<button><a href="index.php">Go Pack</a></button>