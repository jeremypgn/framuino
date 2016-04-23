bool wait(String method, int time){
  if(method == "millisec"){
    delay(time);
    return true;
  }
  if(method == "sec"){
    delay(time*1000);
    return true;
  }
  if(method == "min"){
    delay(time*60000);
    return true;
  }
  if(method == ""){
    debug.println("[WAIT] incompatible method");    
    return false;
  }
}
