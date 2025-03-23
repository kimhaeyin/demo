#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
void Print(int val){
	cout << val << endl;
}
PrintVector(vector<int> &v){
	for(vector<int>::iterator it = v.begin();it!=v.end();it++){
		cout << *it <<' ';
	}
	cout << endl;
}
PrintList(list<int> &L){
	for(list<int> ::const_iterator it =L.begin();it!=L.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
}
void test1(){
	vector<int> v;//vector容器存放内置数据类型,自动扩充容量
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	PrintVector(v);
	//迭代器相当于指针
	v.insert(v.begin()+1,999);
	PrintVector(v);
	v.erase(v.begin()+2);
	PrintVector(v);
	//for_each(v.begin(),v.end(),Print);//algorithm,使用迭代器遍历，利用函数回调指针
	cout << "capacity is: "<< v.capacity() << endl;
}
void test2(){
	pair<string,int> p ("ryc",20);
	cout << p.first <<' '<< p.second<<endl;
}
//链表
void test3(){
	list<int> L ;
	L.push_back(20);
	L.push_back(10);
	L.push_back(30);
	L.push_back(400);
	L.push_back(50);
	L.sort();//升序
	L.reverse();//反转	
	PrintList(L);
}
/*template<class NameType,class AgeType>//使用类模板,可以让参数为不同类型
class Person{
public:
	Person(NameType name,AgeType age){
		this->myname = name;
		this->myage = age;
	}
	
	NameType myname;
	AgeType myage;
};*/
int main(){
/*	char s[10];
	scanf("%[^\n]",s);//正则表达式^是除了
	printf("%s",s);*/
/*	double a,b;
	cin >> a >> b;
	cout << fixed << setprecision(3) << a << ' '<< b <<'\n';*/
/*	string s;
	getline(cin,s);//可接受空格
	cout<< s ;*/
	
	/*Person<string,int> p1("Kim yeonkoung",37);
	Person<string,double> p2 ("Jeon haeyin",36.88888);
	cout<<"Name is :" << p1.myname << '\n'<<"Age is :"<< p1.myage << endl;
	cout<<"Name is :" << p2.myname << '\n'<<"Age is :"<< p2.myage << endl;*/
	/*const char* str = "pardon";
	string s1(str);
	cout<< s1 << endl;*/
	test1();test2();test3();
	return 0;
}