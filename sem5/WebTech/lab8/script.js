function getData(){
    var xmlHttp = new XMLHttpRequest();
    xmlHttp.open('GET','assets/bookstore.xml',true);
    xmlHttp.send();

    xmlHttp.onreadystatechange = function(){
        if(xmlHttp.readyState == 4){
            // document.getElementsByClassName('result')[0].innerHTML = xmlHttp.responseXML;
            var xmlDoc = xmlHttp.responseXML;
            var text ='';
            var titles = xmlDoc.getElementsByTagName('title');
            for(var i=0; i< titles.length;i++){
                text+= titles[i].innerHTML+'</br>';
            }
            // alert(text);
            document.getElementsByClassName('result')[0].innerHTML=text;
        }
    }
}

function myFunction(){
    var button = document.getElementById('get-data');
    button.addEventListener('click',getData);
}
document.addEventListener('DOMContentLoaded',myFunction);