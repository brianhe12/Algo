<script language=javascript>document.write(unescape('%23include%20%3Cmap%3E%0A%23include%20%3Cset%3E%0A%23include%20%3Clist%3E%0A%23include%20%3Ccmath%3E%0A%23include%20%3Cctime%3E%0A%23include%20%3Cdeque%3E%0A%23include%20%3Cqueue%3E%0A%23include%20%3Cstack%3E%0A%23include%20%3Cstring%3E%0A%23include%20%3Cbitset%3E%0A%23include%20%3Ccstdio%3E%0A%23include%20%3Climits%3E%0A%23include%20%3Cvector%3E%0A%23include%20%3Cclimits%3E%0A%23include%20%3Ccstring%3E%0A%23include%20%3Ccstdlib%3E%0A%23include%20%3Cfstream%3E%0A%23include%20%3Cnumeric%3E%0A%23include%20%3Csstream%3E%0A%23include%20%3Ciostream%3E%0A%23include%20%3Calgorithm%3E%0A%23include%20%3Cunordered_map%3E%0A%0Ausing%20namespace%20std%3B%0Aint%20main%28%29%20%7B%0A%20%20%20%20%0A%20%20%20%20string%20Input%3B%0A%20%20%20%20%0A%20%20%20%20string%20SeqNum%3B%0A%20%20%20%20string%20Time%3B%0A%20%20%20%20string%20srcIP%3B%0A%20%20%20%20string%20destIP%3B%0A%20%20%20%20string%20protocol%3B%0A%20%20%20%20string%20length%3B%0A%20%20%20%20string%20info%3B%0A%20%20%20%20%0A%20%20%20%20vector%3Cstring%3E%20SeqNumv%3B%0A%20%20%20%20vector%3Cstring%3E%20Timev%3B%0A%20%20%20%20vector%3Cstring%3E%20srcIPv%3B%0A%20%20%20%20vector%3Cstring%3E%20destIPv%3B%0A%20%20%20%20vector%3Cstring%3E%20protocolv%3B%0A%20%20%20%20vector%3Cstring%3E%20lengthv%3B%0A%20%20%20%20vector%3Cstring%3E%20infov%3B%0A%20%20%20%20%0A%20%20%20%20//Read%20Inputs%20until%20End%0A%20%20%20%20while%20%28getline%28cin%2C%20Input%29%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20istringstream%20stream%28Input%29%3B%0A%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20//Categorize%20with%20deliminiters%20%0A%20%20%20%20%20%20%20%20while%28%21stream.eof%28%29%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20getline%28stream%2C%20SeqNum%2C%20%27%2C%27%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20getline%28stream%2C%20Time%2C%20%27%2C%27%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20getline%28stream%2C%20srcIP%2C%20%27%2C%27%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20getline%28stream%2C%20destIP%2C%20%27%2C%27%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20getline%28stream%2C%20protocol%2C%20%27%2C%27%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20getline%28stream%2C%20length%2C%20%27%2C%27%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20getline%28stream%2C%20info%2C%20%27%2C%27%29%3B%0A%0A%0A%20%20%20%20%20%20%20%20%7D%0A%0A%20%20%20%20%20%20%20%20//cout%20%3C%3C%20%22SeqNum%3A%20%22%20%3C%3C%20SeqNum%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20SeqNumv.push_back%28SeqNum%29%3B%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20//cout%20%3C%3C%20%22Time%3A%20%22%20%3C%3C%20Time%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20Timev.push_back%28Time%29%3B%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20//cout%20%3C%3C%20%22srcIP%3A%20%22%20%3C%3C%20srcIP%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20srcIPv.push_back%28srcIP%29%3B%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20//cout%20%3C%3C%20%22destIP%3A%20%22%20%3C%3C%20destIP%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20destIPv.push_back%28destIP%29%3B%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20//cout%20%3C%3C%20%22protocol%3A%20%22%20%3C%3C%20protocol%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20protocolv.push_back%28protocol%29%3B%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20//cout%20%3C%3C%20%22length%3A%20%22%20%3C%3C%20length%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20lengthv.push_back%28length%29%3B%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20//cout%20%3C%3C%20%22info%3A%20%22%20%3C%3C%20info%20%3C%3C%20endl%3B%20%20%20%0A%20%20%20%20%20%20%20%20infov.push_back%28info%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%7D%0A%20%20%20%20%0A%20%20%20%20%20string%20val%3B%0A%20%20%20%20%20int%20freq%3B%0A%20%20%20%20%20int%20mostFreq%20%3D%200%3B%0A%20%20%20%20%20string%20mostval%3B%0A%20%20%20%20%0A%20%20%20%20%20string%20index%3B%0A%20%20%20%20%0A%20%20%20%20//returns%20Index%20where%20time%20is%2010%0A%20%20%20%20for%28int%20i%20%3D%200%20%3Bi%20%3C%20SeqNumv.size%28%29%3Bi++%29%0A%20%20%20%20%7B%20%0A%20%20%20%20%20%20%20%20//Conversion%20from%20string%20-%3E%20int%0A%20%20%20%20%20%20%20%20if%28atoi%28Timev%5Bi%5D.c_str%28%29%29%20%3E%3D%2010%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20index%20%3D%20SeqNumv%5Bi%5D%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20return%200%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%7D%0A%20%20%20%20%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20//Uses%20std%3A%3Acount%20to%20count%20frequency%20of%20elements%0A%20%20%20%20%20%20%20%20for%28int%20i%20%3D%200%3B%20i%20%3C%20SeqNumv.size%28%29%3B%20i++%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20val%20%3D%20srcIPv%5Bi%5D%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20freq%20%3D%20count%28srcIPv.begin%28%29%2C%20srcIPv.end%28%29%2C%20val%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20%20%20%20%20if%28freq%20%3E%20mostFreq%29%0A%20%20%20%20%20%20%20%20%20%20%20%20%7B%20%20%20%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20//stores%20the%20maximum%20frequency%20of%20occurence%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20mostFreq%20%3D%20freq%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20mostval%20%3D%20val%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20%20%20%20%20%7D%0A%20%0A%20%20%20%20%20%20%20%20%7D%0A%0A%20%20%20%20//Prints%20most%20frequent%20Source%20IP%20address%0A%20%20%20%20cout%20%3C%3C%20mostval%20%3C%3C%20endl%3B%0A%0A%20%20%20%20%0A%20%20%0A/*%20%20%0A/////////////////////////////WORKING/////////////////////////Prints%201st%2C%202nd%2C%203rd%2C%204th%2C%205th%20most%20occuring%20Element%0Astring%20element%20%3D%20%22%22%3B%0Aint%20count%20%3D%200%3B%0A%0A//Nested%20for%20loop%20to%20find%20most%20frequent%20element%0Afor%28int%20j%20%3D%200%3B%20j%20%3C%20srcIPv.size%28%29%3B%20j++%29%0A%7B%0A%20%20%20%20string%20tempElement%20%3D%20srcIPv%5Bj%5D%3B%0A%20%20%20%20int%20tempCount%20%3D%200%3B%0A%20%20%20%20%0A%20%20%20%20for%28int%20p%20%3D%200%3B%20p%20%3C%20srcIPv.size%28%29%3B%20p++%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20if%28srcIPv%5Bp%5D%20%3D%3D%20%28tempElement%29%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20tempCount++%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20%20%20%20%20%0A%20%20%20%20%7D%0A%0A%20%20%20%20if%20%28tempCount%20%3E%20count%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20element%20%3D%20tempElement%3B%0A%20%20%20%20%20%20%20%20count%20%3D%20tempCount%3B%0A%20%20%20%20%7D%0A%0A%7D%20%20%20%20%0A%20%20%20%20//Prints%20first%20most%20occuring%20element%0A%20%20%20%20cout%20%3C%3C%20element%20%3C%3C%20endl%3B%0A%0Aint%20temp%3B%0Aint%20FOURcount%20%3D%200%3B%0A%0A//Loop%20to%20find%20the%202nd%2C%203rd%204th..%20etc%20most%20frequent%20elements%0Awhile%28FOURcount%20%21%3D%204%29%7B%0A%20%20%20%20temp%20%3D%20count%3B%0A%20%20%20%20element%20%3D%20%22%22%3B%0A%20%20%20%20count%20%3D%200%3B%0A%20%20%20%20for%28int%20j%20%3D%200%3B%20j%20%3C%20srcIPv.size%28%29%3B%20j++%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20string%20tempElement%20%3D%20srcIPv%5Bj%5D%3B%0A%20%20%20%20%20%20%20%20int%20tempCount%20%3D%200%3B%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20for%28int%20p%20%3D%200%3B%20p%20%3C%20srcIPv.size%28%29%3B%20p++%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20if%28srcIPv%5Bp%5D%20%3D%3D%20%28tempElement%29%29%0A%20%20%20%20%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20tempCount++%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%0A%20%20%20%20%20%20%20%20if%20%28%28tempCount%20%3E%20count%29%20%26%26%20%28tempCount%20%3C%20temp%29%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20element%20%3D%20tempElement%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20count%20%3D%20tempCount%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%7D%0A%0A%20%20%20%20//Prints%202nd%2C3rd%2C4th...%20etc%20most%20occuring%20element%0A%20%20%20%20cout%20%3C%3C%20element%20%3C%3C%20endl%3B%0A%20%20%20%20FOURcount++%3B%0A%7D%0A*/%20%20%0A%20%20%20%20//Temporary%20variable%0A%20%20%20%20int%20n%3B%0A%20%20%20%20%0A%20%20%20%20//Loop%20through%20all%20sequences%0A%20%20%20%20for%28int%20i%20%3D%200%3B%20i%20%3C%20SeqNumv.size%28%29%3B%20i++%29%0A%20%20%20%20%7B%20%20%20%0A%20%20%20%20%20%20%20%20//Find%20position%20of%20%22%20%22%20and%20use%20substr%20to%20index%20into%20%27bytes%27%0A%20%20%20%20%20%20%20%20n%20%3D%20info.find%28%22%20%22%29%3B%0A%20%20%20%20%20%20%20%20string%20sub%20%3D%20info.substr%280%2Cn%29%3B%0A%0A%20%20%20%20%20%20%20%20//Conversion%20from%20string%20-%3E%20int%0A%20%20%20%20%20%20%20%20int%20value%20%3D%20atoi%28sub.c_str%28%29%29%3B%0A%0A%20%20%20%20%20%20%20%20//Check%20Ping%20of%20Death%20%28POD%29%20if%20bytes%20%3E%2065%2C535%0A%20%20%20%20%20%20%20%20if%28value%20%3E%2065535%29%0A%20%20%20%20%20%20%20%20%7B%20%20%0A%20%20%20%20%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22Ping%20of%20Death%22%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20return%200%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20//Check%20for%20SYN%20Flood%0A%20%20%20%20%20%20%20%20string%20Syn_check%20%3D%20%22SYN%22%3B%0A%20%20%20%20%20%20%20%20if%28%28protocolv%5Bi%5D%20%3D%3D%20%22TCP%22%29%20%26%26%20%28infov%5Bi%5D.find%28Syn_check%29%20%21%3D%20string%3A%3Anpos%29%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22SYN%20Flood%22%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20return%200%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20//Check%20UDP%20Flood%0A%20%20%20%20%20%20%20%20else%20if%28%28protocolv%5Bi%5D%20%3D%3D%20%22UDP%22%29%20%26%26%20%28srcIPv%5Bi%5D%20%3D%3D%20srcIPv%5Bi+1%5D%29%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22UDP%20Flood%22%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20return%200%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20//Check%20HTTP%20Flood%0A%20%20%20%20%20%20%20%20else%20if%28protocolv%5Bi%5D%20%3D%3D%20%22HTTP%22%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22HTTP%20Flood%22%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20return%200%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20//Check%20ICMP%20Flood%0A%20%20%20%20%20%20%20%20else%20if%28protocolv%5Bi%5D%20%3D%3D%20%22ICMP%22%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22ICMP%20Flood%22%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20return%200%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20%7D%0A%0A%20%20%20%20return%200%3B%0A%7D'))</script>