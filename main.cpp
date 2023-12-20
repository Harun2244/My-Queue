#include "MojQueue.hpp"

int main(void) {
  // // default konstruktor
  // MojQueue<int> kju;
  // std::cout << kju.Pocetak() << std::endl;
  // std::cout << kju.Kraj() << std::endl;
  // std::cout << kju.kapacitet() << std::endl;
  // std::cout << kju.size() << std::endl;

  // // //initalizer list konstruktor
  // MojQueue<int> a{1,2,3,55,88,20356};
  // std::cout << a.Pocetak() << std::endl;
  // std::cout << a.Kraj() << std::endl;
  // std::cout << a.kapacitet() << std::endl;
  // std::cout << a.size() << std::endl;

   // //copy konstruktor
   // MojQueue<std::string> b{"adf", "ddt", "sdafdsf"};
   // MojQueue<std::string> c{b};
   //  std::cout << c.Pocetak() << std::endl;
   //  std::cout << c.Kraj() << std::endl;
   //  std::cout << c.kapacitet() << std::endl;
   //  std::cout << c.size() << std::endl;
  //
  // //   //move konstruktor
  // MojQueue<int> i{1, 2, 3, 3};
  // MojQueue<int> u{std::move(i)};
  // std::cout << u.Pocetak() << std::endl;
  // std::cout << u.Kraj() << std::endl;
  // std::cout << u.kapacitet() << std::endl;
  // std::cout << u.size() << std::endl;

  // //operator =
  // MojQueue<int> a1 {3,5,3,2,1};
  // MojQueue<int> a2 = a1;
  // std::cout << a2.Pocetak() << std::endl;
  // std::cout << a2.Kraj() << std::endl;
  // std::cout << a2.kapacitet() << std::endl;
  // std::cout << a2.size() << std::endl;

  // //move operator = 
  // MojQueue<int> b1 {1,2,3,4,5};
  // MojQueue<int> b2 = std::move(b1);
  // std::cout << b2.Pocetak() << std::endl;
  // std::cout << b2.Kraj() << std::endl;
  // std::cout << b2.kapacitet() << std::endl;
  // std::cout << b2.size() << std::endl;
  
  //   //jePun() i push
  //   MojQueue<int> c1;
  //   for(int i = 0; i< c1.kapacitet(); ++i){
  //   c1.ubaci(i);
  //   }
  // std::cout << c1.Pocetak() << std::endl;
  // std::cout << c1.Kraj() << std::endl;
  // std::cout << c1.kapacitet() << std::endl;
  // std::cout << c1.size() << std::endl;
  // std::cout << c1.jePun() << std::endl;

  //    //jePrazan()
  //   MojQueue<int> d;
  //   d.ubaci(1);
  //   d.ubaci(2);
  //   d.izbaci();
  //   d.izbaci();
  // std::cout << d.Pocetak() << std::endl;
  // std::cout << d.Kraj() << std::endl;
  // std::cout << d.kapacitet() << std::endl;
  // std::cout << d.size() << std::endl;



  return 0;
}
