
function vowelsAndConsonants(s) {
    for(var i = 0; i < s.length; i++)
        {
            //Print vowels
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u')
                {
                    console.log(s[i])
                }
        }
    
     for(var i = 0; i < s.length; i++)
        {
            //Print vowels
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' &&
            s[i] != 'u')
                {
                    //Prints consonants
                    console.log(s[i])
                }
        }
   
}