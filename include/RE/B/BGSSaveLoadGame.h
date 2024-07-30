#pragma once

namespace RE
{
	class BGSSaveLoadGame
	{
	public:
		void SaveGame(void* a_unk1, void* a_unk2, const char* a_name)
		{
			using func_t = decltype(&BGSSaveLoadGame::SaveGame);
			REL::Relocation<func_t> func{ REL::ID(147515) };
			return func(this, a_unk1, a_unk2, a_name);
		}

		bool LoadGame(const char* a_name, void* a_unk1, void* a_unk2)
		{
			using func_t = decltype(&BGSSaveLoadGame::LoadGame);
			REL::Relocation<func_t> func{ REL::ID(147564) };
			return func(this, a_name, a_unk1, a_unk2);
		}
	};
}
