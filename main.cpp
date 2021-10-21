#include <prmSystem.h>
#include <iostream>
#include <plog.h>

int main(){
	char str[128];

	std::cout << std::boolalpha;

	std::cout << "----\n";
	std::cout << "default: " << Prm::d8 << '\n';
	Prm::d8.step(1);
	std::cout << "after step: " << Prm::d8 << '\n';

	std::cout << "----\n";
	std::cout << "default: " << Prm::d7.val << '\n';
	std::cout << ": " << Prm::d7 << '\n';
	std::cout << ": " << Prm::d7 << '\n';
	std::cout << ": " << Prm::d7 << '\n';

	std::cout << "----\n";
	uint8_t buffer[4];
	Prm::d8.serialize(buffer);
	Prm::d8 = 0;
	hexdump(buffer, 4);
	bool result = Prm::d8.deserialize(buffer);
	std::cout << result << ": " << Prm::d8 << '\n';
	uint8_t buffer2[4] = { 255, 255, 255, 255 };
	hexdump(buffer2, 4);
	result = Prm::d8.deserialize(buffer2);
	std::cout << result << ": " << Prm::d8 << '\n';

	std::cout << "----\n";
	Prm::d4.tostring(str, sizeof(str));
	std::cout << str << '\n';
	Prm::d4 = 299;
	Prm::d4.tostring(str, sizeof(str));
	std::cout << str << '\n';
	Prm::d4.step(1);
	Prm::d4.tostring(str, sizeof(str));
	std::cout << str << '\n';
	Prm::d4.step(1);
	Prm::d4.tostring(str, sizeof(str));
	std::cout << str << '\n';

	std::cout << "----\n";
	for(int i = 0; i < 10; i++){
		Prm::dvalue.tostring(str, sizeof(str));
		std::cout << Prm::dvalue.getlabel() << ": '" << str << "'\n";
		Prm::dvalue.step(1);
	}

	std::cout << "----\n";
	for(int i = 0; i < 65535; i++){
		Prm::IVal *p = Prm::getbyaddress(i);
		if(p){
			char str[32];
			p->tostring(str, sizeof(str));
			std::cout << "[" << i << "] " << p->getlabel() << ": " << str << " " << p->getunit() << '\n';
		}
	}

	std::cout << "----\n";
	std::cout << "get argument parameter d0: " << reinterpret_cast<size_t>(Prm::d0.getarg()) << "\n";

	std::cout << "----\n";
	std::cout << "exit\n";
	return 0;
}
