//获取一个字符串中的数字，字母
#include <iostream.h>
int main()
{
    char a[50]="1ab2cd3ef45g";
    char b[50];
    int cnt_index=0,cnt_int=0;
    //cnt_int 用于存放字符串中的数字.
    //cnt_index 作为字符串b的下标.
    
    for(int i=0;a[i]!='\0';++i) //当a数组元素不为结束符时.遍历字符串a.
    {
        if(a[i]>='0'&& a[i]<='9') //如果是数字.
        {
            cnt_int*=10;
            cnt_int+=a[i]-'0'; //数字字符的ascii-字符'0'的ascii码就等于该数字.
        }
        
        else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')) //如果是字母.
        {
            b[cnt_index++]=a[i]; //如果是字符,则增加到b数组中.
        }
    }
    
    b[cnt_index++]='\0'; //增加字符串结束符.
    
    cout<<b<<endl; //输出字符串. (abcdefg)
    cout<<cnt_int<<endl; //输出数字.(12345)
    return 0;
}

//将一个字符串按空格分割
//需要包含sstream
#include <sstream>

	string inputbuffer;//为了读入文件的便于格式转化
	
	//不进行错误处理的代码，预设已知有且仅有这三个合法输入
	istringstream strm(inputbuffer);
	strm >> [string];
	strm >> [int];
	strm >> [float];
	
