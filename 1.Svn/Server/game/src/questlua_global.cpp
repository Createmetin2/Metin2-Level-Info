///Add
#if defined(LEVEL_INFO)
	int _add_level_info(lua_State* L)
	{
		if (!lua_isnumber(L, 1) || !lua_isstring(L, 2))
			return 0;

		const auto level = static_cast<int>(lua_tonumber(L, 1));
		const auto msg = std::string(lua_tostring(L, 2));
		if (!msg.empty() && level > 0)
			LvlInfoMap.emplace(level, msg);

		return 0;
	}
#endif

//Find
			{	"add_bgm_info",				_add_bgm_info			},
			
///Add
#if defined(LEVEL_INFO)
			{	"add_level_info",			_add_level_info			},
#endif