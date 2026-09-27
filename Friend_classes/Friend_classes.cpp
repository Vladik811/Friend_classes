//#include <iostream>
//using namespace std;
//
//class point {
//public:
//    int x;
//    int y;
//    int z;
//
//    point(int x, int y, int z) {
//        this->x = x;
//        this->y = y;
//        this->z = z;
//    }
//
//
//
//    friend double func(point, point);
//};
//
//double func(point a, point b) {
//    double d = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2) + pow((b.z - a.z), 2));
//    return d;
//}
//
////task 2
//
//template <class T>
//class vector {
//	T* data;
//	int size;
//public:
//	vector() {
//		data = nullptr;
//		size = 0;
//	}
//
//	vector(int size) {
//		this->size = size;
//		this->data = new int[size];
//	}
//	vector(const vector& other) {
//		this->size = other.size;
//		this->data = new T[other.size];
//		for (int i = 0; i < size; i++)
//		{
//			this->data[i] = other.data[i];
//		}
//	}
//
//	void set() {
//		for (int i = 0; i < size; i++)
//		{
//			data[i] = rand() % 101 - 50;
//		}
//	}
//
//	void print() {
//		for (int i = 0; i < size; i++)
//		{
//			cout << data[i] << " ";
//		}
//		cout << '\n';
//	}
//
//	int get_size() { return size; }
//	void clear() {
//		delete[] data;
//		data = nullptr;
//		size = 0;
//	}
//
//	void add_end(T value) {
//		T* p = new T[size + 1];
//		for (int i = 0; i < size; i++)
//		{
//			p[i] = data[i];
//		}
//
//		p[size] = value;
//
//		delete[] data;
//		data = p;
//		p = nullptr;
//		size++;
//	}
//
//	void add_start(T value) {
//		T* p = new T[size + 1];
//
//		p[0] = value;
//	
//		for (int i = 0; i < size + 1; i++)
//		{
//			p[i + 1] = data[i];
//		}
//
//		delete[] data;
//		data = p;
//		p = nullptr;
//		size++;
//	}
//
//	void add_pos(T value, int pos) {
//		T* p = new T[size + 1];
//
//		for (int i = 0; i < pos; i++){
//			p[i] = data[i];
//		}
//
//		p[pos] = value;
//
//		for (int i = pos; i < size; i++) {
//			p[i + 1] = data[i];
//		}
//
//		delete[] data;
//		data = p;
//		p = nullptr;
//		size++;
//	}
//
//	void del_start() {
//		T* p = new T[size - 1];
//
//		for (int i = 0; i < size; i++)
//		{
//			p[i] = data[i + 1];
//		}
//
//		delete[] data;
//		data = p;
//		p = nullptr;
//		size--;
//	}
//
//	void del_end() {
//		T* p = new T[size - 1];
//
//		for (int i = 0; i < size - 1; i++)
//		{
//			p[i] = data[i];
//		}
//
//		delete[] data;
//		data = p;
//		p = nullptr;
//		size--;
//	}
//
//	void del_pos(int pos) {
//		T* p = new T[size - 1];
//
//		for (int i = 0; i < pos; i++) {
//			p[i] = data[i];
//		}
//
//		for (int i = pos; i < size; i++) {
//			p[i] = data[i + 1];
//		}
//
//		delete[] data;
//		data = p;
//		p = nullptr;
//		size--;
//	}
//
//	T max_el() {
//		T max = data[0];
//		for (int i = 0; i < size; i++)
//		{
//			if (max < data[i]) {
//				max = data[i];
//			}
//		}
//		return max;
//	}
//
//	T min_el() {
//		T min = data[0];
//		for (int i = 0; i < size; i++)
//		{
//			if (min > data[i]) {
//				min = data[i];
//			}
//		}
//		return min;
//	}
//
//	int count_el() {
//		int count = 0;
//		for (int i = 0; i < size; i++)
//		{
//			count++;
//		}
//		return count;
//	}
//
//	T el_with_needed_index(int pos) {
//		return data[pos];
//	}
//
//	void sort_by_increase() {
//		for (int i = 0; i < size; i++) {
//			for (int j = 0; j < size; j++) {
//				if (data[i] < data[j]) {
//					T temp = data[i];
//					data[i] = data[j];
//					data[j] = temp;
//					temp = 0;
//				}
//			}
//		}
//	}
//
//	void sort_by_decrease() {
//		for (int i = 0; i < size; i++) {
//			for (int j = 0; j < size; j++) {
//				if (data[i] > data[j]) {
//					T temp = data[i];
//					data[i] = data[j];
//					data[j] = temp;
//					temp = 0;
//				}
//			}
//		}
//	}
//
//	void reverse() {
//		for (int i = 0; i < size / 2; i++) {
//			T temp = data[i];
//			data[i] = data[size - i - 1];
//			data[size - i - 1] = temp;
//		}
//	}
//
//	~vector() {
//		delete[] data;
//	}
//
//};
//
//
//int main()
//{
//    //task 1
//
//    point a{ 3,5,2 };
//    point b{ 3,2,2 };
//    cout << func(a, b);
//}