#pragma once
#include "plugin.h"
#include "Functions.h"
#include "Config.h"
#include "CMessages.h"
#include <filesystem>

class voices : Functions
{
public:
	static void Initialise();
private:
	static void __fastcall LoadRandomizedAudio(uint16_t* audio, void* edx, int slot, char* text);
	static void PreloadMissionAudio(uint16_t* audio, int slot, char* text);
	static void InitialiseSounds();
	static std::vector<std::string> sounds;
};