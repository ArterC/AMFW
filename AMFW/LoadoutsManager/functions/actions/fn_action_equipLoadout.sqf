_unit = _this select 1;
_arguments = _this select 3;
_loadout = _arguments select 0;
_faction = _arguments select 1;

[_unit, _loadout, _faction] call AMFW_LM_fnc_equipLoadout;
true