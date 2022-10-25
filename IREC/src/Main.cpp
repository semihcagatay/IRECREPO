#include "../include/canta.hpp"


int main(){
    
    
    int a;
    canta *c1=new canta;

    //çantaya ne yapmak istediğimizi gireceğimiz değişken
    int choice_about_bag;

    //konsoldan verilecek sorulara cevap vereceğimiz string değişkeni
    std::string sentinel;

    std::cout<<"Wanna add something to your bag? yes&no"<<std::endl;
    
    //konsola cevap verilir
    std::cin>>sentinel;

    //konsola,çantayla ilgili bir takım işlemler yapmak istediğimizi belirtirsek kodun gireceği döngü
    if(sentinel=="yes"){
    do
    {
        //çantaya eklenecek eşyanın tutulduğu değişken
        std::string thing;

        
        std::cout<<"please text something what you want to add to your bag"<<std::endl;

        //çantaya koymak istediğimiz eşya yazılır
        std::cin>>thing;

        //çantaya set_things metoduyla eşyamız sokulur
        c1->set_things(thing);

        //tekrar eşya eklemek isteyip istemediğiz sorulur
        std::cout<<"Wanna continue? ";

        //devam edip etmeyeceğimiz girilir
        std::cin>>sentinel;
    } while (sentinel=="yes");
    //konsola "yes" cevabı verdikçe döngü devam eder
    }

        std::cout<<"please select what you want to learn about your bag"<<std::endl;
              
        std::cout<<"I want to learn how many things are there in my bag -1 \nwant to check whether my bag is empty or not \nI want to learn what are there in my bag"<<std::endl;            
        //bu kısımda çanta ile alakalı öğrenmek istediğimiz cevaplar sorgulanır,çantada kaç eşya var,çantada boş veya dolu mu,çantada neler var
       
        std::cin>>choice_about_bag;
        //öğrenmek istediğimiz kısım girilir

        switch (choice_about_bag)
        {
        case 1:
            std::cout<<c1->count();
            //çantada ne kadar eşyanın olduğunu döndüren class metodu
            break;
        case 2:
        if(c1->query()){
                std::cout<<"it is empty";
                //çantanın boş olup olmadığını döndüren class metodu
            }
        else
        {
                std::cout<<"it is not empty";
        }
            break;

        case 3:
                c1->print_things();
                //çantadaki eşyaları konsola bastıran class metodu
            break;
        default:
            break;
        }

        //admininin çalıştığı an kapanmaması adına girdi bekliyor
        std::cin>>a;
    return 0;
}