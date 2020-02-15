function showTime(){
    var date = new Date();
    var hr = date.getHours();
    var min = date.getMinutes();
    var sec = date.getSeconds();
    var ampm = (hr>12) ? "PM" : "AM";

    if(hr==0)
        hr=12;
    if(hr>12)
        hr-=12;

        
    hr = (hr<10) ? "0" + hr : hr;
    min = (min<10)? "0" + min : min;
    sec = (sec<10)? "0" + sec : sec;

    var time = hr + ":" + min + ":" + sec + " " + ampm;

    var clock = document.getElementById("clock");
    clock.innerText = time;
    clock.innerContent = time;
    clock.style.padding = "300px 550px";
    clock.style.fontSize = "30px";

    setInterval(showTime,1000);
}



document.addEventListener('DOMContentLoaded', showTime);