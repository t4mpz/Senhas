#include <fstream>
#include <string>
//  no c libe here #include <stdlib>

// using namespace std;

class Menu{
  public:
    int opc = 0;
    std::ofstream esc;
    std::ifstream le;
    std::string escrita;
    Menu();
    void escrever();
    void ler();
    void actions_menu();
};

