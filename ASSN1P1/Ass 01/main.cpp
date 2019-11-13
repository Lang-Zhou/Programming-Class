    #include<iostream>
    using namespace std;
    int main()
    {
        char c;
        c = getchar();
        if (c >= 97 && c <= 122) cout<<c;
        else cout<<c+32;
        return 0;
    }

