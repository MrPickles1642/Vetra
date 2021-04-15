#include "Vetra.h"

class Sandbox : public Vetra::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Vetra::Application* Vetra::CreateApplication() {
	return new Sandbox();
}