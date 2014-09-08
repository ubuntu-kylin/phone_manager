// JavaScript Document
function load()
{
	

	var i;
	for(i=1;i<8;i++){
        $("#content_tab"+i).hide();
		}
        $("#content_tab1").show();
		
    $('#content_tab1').load('file/myphone.html');
    $('#content_tab2').load('file/app.html');
    $('#content_tab3').load('file/file.htmloadbl');
    $('#content_tab4').load('file/music.html');
    $('#content_tab5').load('file/wallpaper.html');
    $('#content_tab6').load('file/album.html');
    $('#content_tab7').load('file/help.html');
    return false;
}

function changecontent(id){
	var i;

    for(i=1;i<8;i++){
        $("#content_tab"+i).hide();
		
		}
        $("#content_"+id).fadeIn();
		
	
	}
	
	
