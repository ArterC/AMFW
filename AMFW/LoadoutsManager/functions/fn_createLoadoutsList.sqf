params ["_object", "_faction"];

waitUntil {!isNull player};

_unit = player;

if (!local _unit || isDedicated) exitWith {};


_factionConfig = missionConfigFile >> "AMFW_LM_Loadouts" >> _faction;
_factionLoadoutsConfig = _factionConfig >> "Loadouts";

_factionCfgName = configName (_factionConfig);
_factionName = [_factionConfig, "name", _factionCfgName] call BIS_fnc_returnConfigEntry;

{
	_loadoutCfgName = configName (_x);
	_loadoutName = [_x, "name", _loadoutCfgName] call BIS_fnc_returnConfigEntry;
	_object addAction [_loadoutName, "call AMFW_LM_fnc_action_equipLoadout", [_loadoutCfgName, _factionCfgName]];
	diag_log format ["_unit: %1, _loadoutCfgName: %2, _factionCfgName: %3", _unit, _loadoutCfgName, _factionCfgName];
} foreach configProperties [_factionLoadoutsConfig];
