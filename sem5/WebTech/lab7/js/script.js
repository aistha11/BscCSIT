$(document).ready(function(){
    $('button').click(function(){
        // // $('#title').css('color','red');//single css
        // $('#title').css({'color':'red','background-color':'gray','opacity':'0.5'});//multiple css
        // $('.content').html('This is a content of the jquery ');
        var title = $('#title');
        title.css('opacity','1');
        interval = setInterval(function(){
            var oldOpacity = title.css('opacity');
            if(oldOpacity == 0)
                clearInterval(interval);
            else    
                title.css('opacity',oldOpacity - 0.01);
        },10);
    });
});