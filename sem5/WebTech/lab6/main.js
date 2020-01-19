function myLoad (){
    //get button
    var button = document.getElementById('button');
    //append click event to that button: function call
    //if there is table
    button.addEventListener('click', generateRandomNum);
    //if there is no table
    // button.addEventListener('click', makeTable); 
    
    //when button is clicked, get all the tds and generate a random number
   
}
function makeTable (){
    var table = document.createElement('table');
    var tr = document.createElement('tr');
    table.appendChild(tr);
    for(var i = 0; i<5;i++){
        var num = Math.ceil(Math.random()*20);
        var td = document.createElement('td');
        var textNode = document.createTextNode(num);
        td.appendChild(textNode);
        tr.appendChild(td);
    }
    document.getElementsByTagName('body')[0].appendChild(table);
   
}

function generateRandomNum(){
    var tables = document.getElementsByTagName('table');
    if(tables.length == 0)
        makeTable();
    //  var tds = document.getElementsByTagName('td');
    var tds = tables[0].getElementsByTagName('td');
     
    for(var i=0; i < tds.length ;i++){
        var num = Math.ceil(Math.random()*20);
        tds[i].innerHTML = num;
    }
}

document.addEventListener('DOMContentLoaded', myLoad);




