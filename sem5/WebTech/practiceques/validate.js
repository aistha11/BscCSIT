function validateForm() {
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;
    var gender = document.getElementsByName("gender");
    var hobbies = document.getElementsByName("hobbies");

    if(username == ""){
        alert("Username is required");
        return false;
    }else if (username.length <= 4){
        alert("Username must be 4 characters long");
        return false;
    }else if (password == ""){
        alert("Password is required");
        return false;
    }else if (password){

    }else if(!(gender[0].checked || gender[1].checked || gender[2].checked )){
        alert("Please select your gender");
        return false;
    }else if (!(hobbies[0].checked || hobbies[1].checked || hobbies[2].checked)){
        alert("Please select at least one of the hobby.");
        return false;
    }

    return true;
}