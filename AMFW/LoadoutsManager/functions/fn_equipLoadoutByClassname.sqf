/*
	author: ARTER

	description:
	Equips unit with a loadout based on his unitClassname.

	parameters:
	_this select 0 (Optional): Loadout Faction
    _this select 1 (Optional): unit (Object)

	returns: true if finished execution
*/

params["_faction", ["_unit", player]];
private ["_units", "_factionConfigs", "_unitFound", "_unitClassname", "_loadoutName", "_unitFound", "_factionConfig",
"_factionName", "_loadoutConfig"];

_factionConfig = missionConfigFile >> "AMFW_LM_Loadouts" >> _faction;

diag_log format ["Unit: %1", _unit];
if (!local _unit) exitWith {};
_unitFound = false;
    //if unit is found, then break current loop
    if (_unitFound) exitWith {};
    //get a faction name
    _factionName = configName(_factionConfig);
    //loadouts config entry of a selected faction
    _loadoutsConfig = _factionConfig >> "Loadouts";
    //an array of loadout config classes
    _loadoutConfigs = "true" configClasses(_loadoutsConfig);
    {
        //a config entry of a loadout
        _loadoutConfig = _x;
        //get loadout name
        _loadoutName = configName(_loadoutConfig);
        diag_log format ["loadoutName: %1", _loadoutName];
        //extracting unitClassname of a unit from config
        _unitClassname = [_loadoutConfig, "unitClassname"] call BIS_fnc_returnConfigEntry;
        //if unitClassnames match, then equip loadout and break loops for current unit
        if (typeof _unit == _unitClassname) exitWith {
            _unitFound = true;
            [_unit, _loadoutName, _factionName] call AMFW_LM_fnc_equipLoadout;
        };
    } forEach _loadoutConfigs;

true
