#include <Awa.h>

class SandBox : public AwaEngine::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};

AwaEngine::Application* AwaEngine::CreateApplication()
{
	return new SandBox();
}