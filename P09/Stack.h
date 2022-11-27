template <typename T>
struct node { 
  T value;
  node<T>* next; 
};

template <typename T>
class Stack { 
public:
  Stack(); 
  ~Stack();
  size_t size() const;
  bool peek(T& elem) const;
  bool pop(T& elem);
  void push(const T& elem);
private:
  int size_;
  node<T>* top_;
};