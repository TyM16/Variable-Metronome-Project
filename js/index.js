var $button1;
var $button2;
var $mockImage;



$(document).ready(function() { //As soon as the page is ready... Do this.

    $buttonL = $("#mockButtonLeft");
    $buttonR = $("#mockButtonRight");
    $mockImage = $(".mockImage");

    i = parseInt(1); //Two images, can be one or two.

    $buttonL.click(function(){ //User clicks left button.
   
        if (i === parseInt("2")){ //if current image is 2nd, change to first.
            i = parseInt("1");
    
            $mockImage.attr("src", "images/VMPMock1.jpg");
        }
    
        else { //Else change to second.
            i = parseInt("2");
            
            $mockImage.attr("src", "images/VMPMock2.jpg"); 
        }
    });
    
    $buttonR.click(function(){ //User clicks right button.
        if (i === parseInt("2")){ //if current image is 2nd, change to first.
            i = parseInt("1");
    
            $mockImage.attr("src", "images/VMPMock1.jpg");
        } 
        
        else { //Else change to second.
            i = parseInt("2");
            
            $mockImage.attr("src", "images/VMPMock2.jpg"); 
        }
    });
});