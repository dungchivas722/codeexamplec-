#include <iostream>

using namespace std;

//*********************************
// hảm chương trình chính để hiển thị dòng chữ hello world
//*********************************
int main()
{
    ///////////////////////////////////////////////////////
    //
    // Phương pháp:
    // chỉ in ra hello world
    // và hưỡng dẫn comment 
    //
    //////////////////////////////////////////////////////
   std ::  cout << "hello world" << endl;
    //  system("pause");
    // commment : mọi thứ bên phải ký tự sẽ được bỏ qua , comment 1 dòng nên giỏi thích cho dòng code phía dưới không dính níu dòng code khác nhau
    /*
    đây là comments nhiều dòng , và có thể comment ở giữa dòng code , và comments sẽ không thể lồng nhau
    */
   std ::/* ok nhé*/ cout << "ok nhé" << endl;
    // không nên lạm dụng comment 
    
    // toán tử tiền sử lý
#if 0
    std ::  cout << "hello world 1" << endl;
#endif
    return 0;
}