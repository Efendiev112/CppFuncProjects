
#include <iostream>
using namespace std;
int main()
{
     int a = INT32_MAX;
     int a2 = INT32_MIN;
     long long a3 = LONG_MAX;
     long long a4 = LONG_MIN;
     short a5 = SHRT_MAX;
     short a6 = SHRT_MIN;
     char a7 = CHAR_MAX;
     char a8 = CHAR_MIN;
     bool a9 = 0;
     bool a10 = 1;
     double a11 = DBL_MAX;
     double a12 = DBL_MIN;
     unsigned int a13 = 0;
     unsigned int a14 = UINT32_MAX;
     unsigned short a15 = USHRT_MAX;
     unsigned long long a16 = ULONG_MAX;
     float a17 = FLT_MAX;
     float a18 = FLT_MIN;
     cout << "type\t\t|byte\t|min\t\t\t|max\n";
     cout << "int\t\t|"<<sizeof(a)<<"\t|"<<a<<"\t\t|"<<a2<<"\n";
     cout << "long\t\t|" << sizeof(a3) << "\t|" << a4 << "\t\t|" << a5 << "\n";
     cout << "short\t\t|" << sizeof(a5) << "\t|" << a6 << "\t\t\t|" << a5 << "\n";
     cout << "char\t\t|" << sizeof(a7) << "\t|" << a8 << "\t\t\t|" << a7 << "\n";
     cout << "bool\t\t|" << sizeof(a10) << "\t|" << a9 << "\t\t\t|" << a10 << "\n";
     cout << "double\t\t|" << sizeof(a11) << "\t|" << a12 << "\t\t|" << a11 << "\n";
     cout << "unsignet Int\t|" << sizeof(a14) << "\t|" << a13 << "\t\t\t|" << a14 << "\n";
     cout << "unsignet short\t|"<< sizeof(a15)<< "\t|" << 0 << "\t\t\t|" << a15 << "\n";
     cout << "unsignet long\t|" << sizeof(a16) << "\t|" << 0 << "\t\t\t|" << a16 << "\n";
     cout << "float\t\t|" << sizeof(a17) << "\t|" << a18 << "\t\t|" << a17 << "\n";


        
}


