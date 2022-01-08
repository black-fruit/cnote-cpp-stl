# c++STL中常用模板常用函数记录

#include  <vector>
vector<int> vec;
vector[0];//使用下标访问元素；
vec.front();//取vec中的第一个元素；
vec.back();//取vec中的最末一个元素；
vec.push_back(x);//在向量末尾加入元素x；
vec.pop_back();//删除末尾元素，同时向量空间减少1；
vec.insert(vec.begin()+i,a);//在第i+1个元素前边插入元素a；
vec.erase(vec.begin()+i);//删除第i+1个元素；
vec.size();//取向量大小；
vec.clear();//清空向量；
reverse(vec.begin()+at1,vec.end()+at2);//将向量翻转；
sort(vec.begin(),vec.end());//排序；
vec.resize(n,1);//改变当前向量大小为n，新增加的元素赋值为1；
vec.empty();//判断向量是否为空，为空返回1，不为空返回0；
swap(vec & v);//交换向量vec和v的值；
vec.max_size();//返回vec的最大长度；


set（集合）：
#include <set>
set<int> s;
s.clear();//清除所有元素；
s.count(x);//返回集合中元素x的数目，由于set中元素是唯一的，所以用来判断元素是否存在；
s.empty();//判断当前集合是否为空；
s.erase(x);//删除集合中元素x；
s.insert(x);//再集合中插入元素x；
s.size();//返回集合的大小；
s.find(x);//在集合中查找元素x，返回的是指向x所在位置的迭代器；



stack（堆栈）：
#include <stack>
stack<int> stk;
stk.empty();//判断栈是否为空；
stk.push();//向当前堆栈中加入元素；
stk.pop();//将最后放入的元素弹出；
stk.size();//返回堆栈的大小；
stk.top();//返回堆栈 最后放入的元素；


map（映射）：
#include <map>
map<int,int> mp;
map<pair<int,int> ,int> mpair;
mp[0]=x;//利用数组方式插入数据，0是键，x是值；
mp.at(0)=x;//利用at执行插入操作；
mp.insert(make_pair(1,x));//利用insert插入pair(键，值)数据；
mp.emplace(make_pair(1,x));//在映射中不存在主键1时执行插入操作；
mp.size();//返回mp的大小；
mp<int,int> ::iterator iter;//定义迭代器；
for(it=mp.begin(); it!=mp.end(); ++it);//映射遍历的方式，利用迭代器实现；
mp.count(1);//统计键为1的元素存在的映射数，存在返回1，不存在返回0；
mp.erase(iter);//根据迭代器删除元素；
mp.clear();//清空映射；
mp.epty();//判断映射是否为空；
mp.find(1);//根据键1查找元素，找到以后返回迭代器；
mp.rbegin(),mp.rend();//返回反向迭代器；
lower_bound(1);//返回查找的键1的下界，即闭区间，返回的是迭代器；
upper_bound(1);//返回查找的键1的上界，即开区间，返回的是迭代器；
mp.swap(m);//将mp和m进行交换；


queue（队列）：
#include <queue>
queue<int> q;
q.push(x);//入队；
q.pop();//出队；
q.front();//访问队首元素；
q.back();//访问队尾元素；
q.empty();//判断队列是否为空；
q.size();//返回队列的大小；