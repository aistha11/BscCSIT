function validate(){

    var username = document.getElementById('uname');

    if(username.value.trim().length < 4 ){
        username.style.border = "solid 1px red";
        alert("Username Should Be at least 4");
        return false;
    }

    const password = document.getElementById('upass');
    var regx = /[0-9][a-zA-Z0-9]*[a-zA-Z0-9][$]/;

    
    if(!regx.test(password.value)){
        password.style.border = 'solid 1px red';
        alert("Password should start with digit and end with $");
        return false;
    }

    var education = document.getElementsByName('field[]');

    for(var i=0;i<education.length;i++){
        if(education[i].checked){
            continue;
        }
        alert("Please Select Your educational field.")
        return false;
    }
   return true;
}

