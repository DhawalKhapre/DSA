int strStr(string haystack, string needle) {
    if(needle==haystack)return 0;
    
    int hl = haystack.size();
    int nl = needle.size();
    
    if(nl>hl)return -1;
    
    string check;
    
    for(int i=0; i<nl; i++)
        check += haystack[i];
    
    int i;
    for(i=nl; i<hl; i++)  {
        if(check==needle)
            return i-nl;
        check.erase(0,1);
        check += haystack[i];
    }
    if(check==needle)return i-nl;
    
    return -1;
}