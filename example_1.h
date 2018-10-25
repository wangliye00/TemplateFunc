#define opts(tfunc, dtype) \
do{
  switch(dtype){
  case 0: tfunc<int>(__VA_ARGS__); break;
  case 1: tfunc<float>(__VA_ARGS__); break;
  }
}while(0)

template<typename T>
void func(T var)
{}

int main(){
  opts(func, 1);
  return 0;
  }
