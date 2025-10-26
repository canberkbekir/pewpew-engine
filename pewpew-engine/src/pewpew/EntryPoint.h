#pragma once 

#ifdef PEW_PLATFORM_WINDOWS

extern PewPew::Application* PewPew::CreateApplication();

int main(int argc,char** argv)
{
	printf("PewPew Engine Initialized!\n");
	auto app = PewPew::CreateApplication();
	app->Run();
	delete app;
}
#endif