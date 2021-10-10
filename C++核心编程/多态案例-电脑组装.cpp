//#include <iostream>
//using std::endl;
//using std::cout;
//
//class CPU {
//public:
//	virtual void calculate() = 0;
//	virtual ~CPU() {}
//};
//
//class GPU {
//public:
//	virtual void display() = 0;
//	virtual ~GPU() {}
//};
//
//class Memory {
//public:
//	virtual void storage() = 0;
//	virtual ~Memory() {}
//};
//
//// 电脑类
//class Computer {
//public:
//
//	Computer(CPU* cpu, GPU* gpu, Memory* mem) :m_Cpu(cpu), m_Gpu(gpu), m_Mem(mem) { cout << "电脑构造" << endl; }
//	~Computer() {
//		if (this->m_Cpu) {
//			delete this->m_Cpu; this->m_Cpu = NULL;
//		}
//		if (this->m_Gpu) {
//			delete this->m_Gpu; this->m_Gpu = NULL;
//		}
//		if (this->m_Mem) {
//			delete this->m_Mem; this->m_Mem = NULL;
//		}
//		cout << "电脑析构" << endl;
//	}
//	void doWork() {
//		m_Cpu->calculate();
//		m_Gpu->display();
//		m_Mem->storage();
//	}
//
//	CPU* m_Cpu;
//	GPU* m_Gpu;
//	Memory* m_Mem;
//};
//
//// inter
//class InterCPU :public CPU {
//public:
//	void calculate() {
//		cout << "interCPU" << endl;
//	}
//};
//
//class InterGPU :public GPU {
//public:
//	void display() {
//		cout << "interGPU" << endl;
//	}
//};
//
//class InterMemory :public Memory {
//public:
//	void storage() {
//		cout << "interMemory" << endl;
//	}
//};
//
//// Lenovo
//class LenovoCPU :public CPU {
//public:
//	void calculate() {
//		cout << "LenovoCPU" << endl;
//	}
//};
//
//class LenovoGPU :public GPU {
//public:
//	void display() {
//		cout << "LenovoGPU" << endl;
//	}
//};
//
//class LenovoMemory :public Memory {
//public:
//	void storage() {
//		cout << "LenovoMemory" << endl;
//	}
//};
//
//
//void test01() {
//
//	cout << "第一台电脑组成" << endl;
//
//	CPU* intelCpu = new InterCPU;
//	GPU* lenovoGpu = new LenovoGPU;
//	Memory* lenovoMem = new LenovoMemory;
//
//	Computer c1(intelCpu, lenovoGpu, lenovoMem);
//
//	c1.doWork();
//
//}
//
//int main() {
//	test01();
//	return 0;
//}