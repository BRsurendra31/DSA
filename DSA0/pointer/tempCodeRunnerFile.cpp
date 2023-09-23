char ch2 = 'dfdj';
    char *q = &ch2; //j
    cout<<q<<endl;
    cout<<&ch2<<endl;//j
    
    string str1 = "dfhhg";
    string *s = &str1;
    cout<<&str1<<endl;
    cout<<str1[1]<<endl;//f
    // cout<<s[1]<<endl; // not work


    string str2[6] ={"abc", "def", "ghi", "jkl"};
    cout<<&str2<<endl; 
    cout<<&str2[0]<<endl;
    cout<<&str2[1]<<endl;
    cout<<&str2[2]<<endl;
    cout<<&str2[3]<<endl;