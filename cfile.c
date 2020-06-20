#include <fstream>
using namespace std;

int main()
{
    fstream f;
    f.open("test.dat", ios::out);
    f << "Dieser Text geht in die Datei" << endl;
    f.close();
}
