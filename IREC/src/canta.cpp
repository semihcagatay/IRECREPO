#include "../include/canta.hpp"



canta::canta(){

}
std::vector<std::string> canta::belongings={};//belongings değişkenini başta boş tutuyoruz

/*std::vector<std::string> canta::get_belongings(){
return belongings;
}*/


 void canta::set_things(std::string thing1){
    belongings.push_back(thing1);//push_back fonksiyonuyla eşya vektörüne eşyalarımızı koyuyoruz
}


 int canta::count(){
    int counter;
    counter=belongings.size();//size fonksiyonuyla çantadaki eşya sayısını buluyoruz 
    return counter;
}
 bool canta::query()
{
belongings.empty();//empty fonksiyonuyla çantanın boş olup olmadığını kontrol ediyoruz
}
 void canta::print_things(){
    //for döngüsüyle dizimizdeki elementler konsola basılır
    for(int i=0;i<belongings.size();i++){
    std::cout<<belongings[i]<<std::endl;
    }
}
