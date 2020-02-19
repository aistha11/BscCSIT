<?php
    session_start();
    if(!isset($_SESSION['suserid'])){
        header('Location:login.php');
    }
?>
<?php
    // $pdo = new PDO('mysql:dbname=everestcsit;host=localhost','root','');
    require 'db.php';
    if(isset($_POST['add'])){
        // $name = $_POST['name'];
        // $address = $_POST['address'];
        // $email = $_POST['email'];
        // $birthdate = $_POST['birthdate'];
        extract($_POST); //makes variables of array indexes
        $r = $pdo->query("INSERT INTO tbl_user(id,name,address,email,birthdate) VALUES('','$name','$address','$email','$birthdate')");
        // if($r == true) echo 'User Detail inserted';
        // else echo 'Not Inserted';
        echo 'Inserted';
    }
    if(isset($_GET['msg'])){
        echo $_GET['msg'];
    }
    if(isset($_GET['id'])){

        $id = $_GET['id'];
        $del = $pdo->query("DELETE FROM tbl_user WHERE id='$id'");
        header('Location:user.php?msg=User Deleted');
    }
?>
<br>
<button><a href="index.php">Home</a></button>

<h3>Enter User Details</h3>
<form action="" method="POST">
    Name : <input type="text" name="name" id=""><br><br>
    Address : <input type="text" name="address" id=""><br><br>
    Email : <input type="email" name="email" id=""><br><br>
    Birth Date : <input type="date" name="birthdate" id=""><br><br>
    <input type="submit" value="Add" name="add">
</form>

<h3>User List</h3>

<table border="2">
    <tr>
        <th>Name</th>
        <th>Address</th>
        <th>Email</th>
        <th>Birthdate</th>
        <th>Action</th>
    </tr>
    <?php
        $userList = $pdo->query("SELECT * FROM tbl_user");
        foreach($userList as $user){?>
            
                <tr>
                    <td><?php echo $user['name']; ?></td>
                    <td><?php echo $user['address']; ?></td>
                    <td><?php echo $user['email']; ?></td>
                    <td><?php echo $user['birthdate']; ?></td>
                    <td>
                        <a href="edituser.php?id=<?php echo $user['id'];?>">Edit</a>
                        <a href="user.php?id=<?php echo $user['id'];?>">Delete</a>
                    </td>
                </tr>
                
            <?php }
    ?>
</table>

<!-- $_POST = [
    name => Ram,
    address = > KTm,
    email => ram@gmail.com
    birthdate => 2120-1-1
    add => Add
] -->