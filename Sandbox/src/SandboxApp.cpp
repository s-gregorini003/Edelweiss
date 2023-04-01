#include <Edelweiss.h>


class Sandbox : public Edelweiss::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

Edelweiss::Application* Edelweiss::CreateApplication()
{
	return new Sandbox();
}