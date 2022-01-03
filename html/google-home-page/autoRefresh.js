function autoRefresh(time){
	setTimeout("location.reload(true);", time);
}		
	window.onload = autoRefresh(1000);
	