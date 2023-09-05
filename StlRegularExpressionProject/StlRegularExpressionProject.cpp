#include <iostream>
#include <regex>
#include <string>

using namespace std;

/*

[a-zA-Z]{5,7}

[0-9]?  {0,1}
[0-9]+  {1,}
[0-9]*  {0,}

hello, 
people, 
barby


*/



int main()
{
    string text = "user@mail.ru bob@gmail joe1234 joe9080@list.com.pro joe78@hotmail.net"; //"hello world 12345 hello people 9087 by 567hg";
    
    string pattern_text = "\\w+[\\.\\w]*@[\\w]+\\.[\\w+b]+"; //"[0-9]+[a-zA-Z]*";
    auto pattern_expr = regex(pattern_text);

    sregex_iterator it(text.begin(), text.end(), pattern_expr);
    sregex_iterator it_end;

    while (it != it_end)
    {
        const smatch& match = *it;
        cout << match.str() << "\n";
        it++;
    }

}
