if(s[i]=='W'){
            if(s[i+1]!='U'){
                ans += s[i];
                continue;
            }
            if(s[i+2]!='B'){
                ans += s[i];
                continue;
            }
            ans+= "";
            i+=3;
        }else{
            ans += s[i];
        }