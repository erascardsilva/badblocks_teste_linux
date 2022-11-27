#include <iostream>
#include <cstdlib>

int opcao ;
std::string hd , hdteste;

void limpatela(){
    system("clear");
}

void menu(){
       limpatela();
       std::cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄ "<<std::endl;
       std::cout<<"                  Teste hd                     "<<std::endl;
       std::cout<<"            Digite a unidade a ser             "<<std::endl;
       std::cout<<"                 verificada                    "<<std::endl;
       std::cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄ "<<std::endl;
       system("lsblk");
       std::cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄ "<<std::endl;
       std::cout<<"  Digite o nome da hd ou partição"<<std::endl;
       std::cin>> hd;
       std::cout<<" Verifique se a unidade esta correta "<<std::endl;
       std::cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄  "<<std::endl;
       std::cout<<" A partição que sera verificada é a ("+hd+")   "<<std::endl;
       std::cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄  "<<std::endl;
       std::cout<<" Se estiver correta digite 1 se não digite 2   "<<std::endl;
       std::cin>> opcao;
       if (opcao == 1){
            std::cout<<" Ok a HD ou partição "+hd+ " será verificada !!"<<std::endl;

       }else if (opcao == 2){
            std::cout<<"Refaça coloque a hd ou partiçao correta !"<<std::endl;
            menu();
       }
  }
 void badblock(){
    hdteste = "sudo badblocks -sv -c 1024 /dev/"+hd;
    std::cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄ "<<std::endl;
    std::cout<<hdteste<<std::endl;
    system(hdteste.c_str());
    std::cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄ "<<std::endl;
 }


int main(){
    menu();
    badblock();


}
