#include<iostream>
using namespace std;

template<typename T>
void sorting(T a[],int s)
{
    T temp;
    for(int i=0;i<s-1;i++)
        for(int j=0;j<s-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    for(int i=0;i<s;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int int_s[]={1,3,5,7,9,2,4,6,8,10};
    int int_s_len=sizeof(int_s)/sizeof(int_s[0]);
    sorting(int_s,int_s_len);

    float float_s[]={1.1,3.3,5.5,7.7,9.9,2.2,4.4,6.6,8.8,10.0};
    int float_s_len=sizeof(float_s)/sizeof(float_s[0]);
    sorting(float_s,float_s_len);

    return 0;
}

//尝试用键盘输入的方式实现未知长度数字数组输入
//int cin_s[100];
//    for(int i=0;i<100;i++)
//       cin>>cin_s[100];
//    int k=0;
//    for(int i=0;i<100;i++)
//    {
//        if(cin_s[i]=='\0')break;
//        k++;
//    }
//    for(int i=0;i<k;i++)
//        cout<<cin_s[i]<<" ";
//    cout<<endl;


//尝试把函数模板的返回值类型设成T
//template<typename T>
//T sorting(T a[])
//{
//    int s=sizeof(a);
//    T temp;
//    for(int i=0;i<s-1;i++)
//        for(int j=0;j<s-i-1;j++)
//        {
//            if(a[j]>a[j+1])
//            {
//                temp=a[j+1];
//                a[j+1]=a[j];
//                a[j]=temp;
//            }
//            j++;
//        }
//    return a[s];
//}
//
//int main()
//{
//    int int_s[]={1,3,5,7,9,2,4,6,8,10};
//    float float_s[]={1.1,3.3,5.5,7.7,9.9,2.2,4.4,6.6,8.8,10.10};
//    int *sort_int_s;
//    *sort_int_s=sorting(int_s);
//    for(;*sort_int_s!='\0';sort_int_s++)cout<<*sort_int_s<<" "<<endl;
//    float *sort_float_s;
//    *sort_float_s=sorting(float_s);
//    for(;*sort_float_s!='\0';sort_float_s++)cout<<*sort_float_s<<" "<<endl;
//    return 0;
//}
