#include <iostream>
#include <fstream>

using namespace std;
ifstream in("subtitrare.in");
ofstream out("subtitrare.out");

int main()
{char input;int cnt=1,a,b,c,d,e,f,g,h;
    while(in>>input)
    {
            char ch;
            in>>a>>ch>>b>>ch>>c>>ch>>d>>ch>>ch>>ch>>e>>ch>>f>>ch>>g>>ch>>h;
            in.get(ch);
            long long int fi=0,fr=0;
            fi=((a*60*60+b*60+c)+d/1000)*25;
            fr=((e*60*60+f*60+g)+h/1000)*25;
            out<<"{"<<fi<<"}{"<<fr<<"}";
            char text[2050];
            in.get(text,2050);
            out<<text;
    }
    return 0;
}
