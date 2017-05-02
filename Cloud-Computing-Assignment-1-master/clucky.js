/**
 * Created by Chakresh Singh on 9/27/2016.
 */

  function cLucky() {
    var USERNAME = document.f.nm.value;
    var upper_name = USERNAME.toUpperCase();
    var count = 0;
    for (i = 0; i < upper_name.length; i++) {
      //sum of ascii values of each alphabet
      count = count + upper_name.charCodeAt(i);
    }
    count = Math.round((count/upper_name.length));
    alert("Your lucky number is: "+ count);
  }

