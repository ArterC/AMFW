/*
	author: ARTER

	description:
	Assigns requested loadout to a unit.

	parameters:
	_this select 0: unit (Object)
	_this select 1 (Optional): loadout classname (String)
	_this select 2 (Optional): faction classname (String)

	returns: true if finished execution
*/

params[["_unit", player], "_loadout", "_faction"];
private["_faction", "_loadout", "_kitsConfig", "_loadoutConfig", "_itemsEntry", "_kitName", "_kit", "_item", 
"_uniform", "_vest", "_backpack", "_primaryWeapon", "_secondaryWeapon", "_launcher", "_items"];

if (!local _unit) exitWith {};

if (isDedicated) exitWith{};
//waitUntil{ !isNull player };

_unit call AMFW_LM_fnc_stripAllGear;

if(!isNil "_loadout") then {
    //_config = configProperties [missionconfigfile >> "AMFW_LM_Loadouts" >> "OPF_HA" >> "Kits" >> "Backpacks" >> "MedicBag"];

    diag_log format ["Loadout: %1, Faction; %2", _loadout, _faction];

    _loadoutConfig = missionConfigFile >> "AMFW_LM_Loadouts" >> _faction >> "Loadouts" >> _loadout;
    _kitsConfig = missionConfigFile >> "AMFW_LM_Loadouts" >> _faction >> "Kits";

    //Using configProperties to access possible inherited entries from extended loadout
    _loadoutConfigEntries = configProperties [_loadoutConfig];
    
    // {
    //     switch(configName (_x)) do {
    //         case "uniform" : {
    //             [_unit, _x, _kitsConfig, "uniform"] call AMFW_LM_fnc_processContainerKits;
    //         };
    //         case "vest" : {
    //             [_unit, _x, _kitsConfig, "vest"] call AMFW_LM_fnc_processContainerKits;
    //         };
    //         case "backpack" : {
    //             [_unit, _x, _kitsConfig, "backpack"] call AMFW_LM_fnc_processContainerKits;
    //         };
    //         case "primaryWeapon" : {
    //             [_unit, _x, _kitsConfig, "primaryWeapon"] call AMFW_LM_fnc_processWeaponKits;
    //         };
    //         case "secondaryWeapon" : {
    //             [_unit, _x, _kitsConfig, "secondaryWeapon"] call AMFW_LM_fnc_processWeaponKits;
    //         };
    //         case "launcher" : {
    //             [_unit, _x, _kitsConfig, "launcher"] call AMFW_LM_fnc_processWeaponKits;
    //         };
    //         case "items" : {
    //             _kitName = _x call BIS_fnc_getCfgData;
    //             _kit = _kitsConfig >> "Items" >> _kitName;

    //             _kitConfigEntries = configProperties [_kit];

    //             {
    //                 switch(configName (_x)) do {
    //                     case "headgear" : {
    //                         _item = [_kit, "headgear"] call BIS_fnc_returnConfigEntry;
    //                         _unit addHeadgear _item;
    //                     };
    //                     case "goggles" : {
    //                         _item = [_kit, "goggles"] call BIS_fnc_returnConfigEntry;
    //                         _unit addGoggles _item;
    //                     };
    //                     case "items" : {
    //                         _items = [_kit, "items"] call BIS_fnc_returnConfigEntry;
    //                         {_unit linkItem _x;} forEach _items;
    //                     };
    //                     case "binoculars" : {
    //                         _item = [_kit, "binoculars"] call BIS_fnc_returnConfigEntry;
    //                         _unit addWeapon _item;
    //                     };
    //                 };
    //             } forEach _kitConfigEntries;
    //         };
    //     };
    // } forEach _loadoutConfigEntries;

    _uniform = objNull;
    _vest = objNull;
    _backpack = objNull;
    _primaryWeapon = objNull;
    _secondaryWeapon = objNull;
    _launcher = objNull;
    _items = objNull;

    {
        switch(configName (_x)) do {
            case "uniform" : {
                _uniform = _x;
            };
            case "vest" : {
                _vest = _x;
            };
            case "backpack" : {
                _backpack = _x;
            };
            case "primaryWeapon" : {
                _primaryWeapon = _x;
            };
            case "secondaryWeapon" : {
                _secondaryWeapon = _x;
            };
            case "launcher" : {
                _launcher = _x;
            };
            case "items" : {
                _items = _x;
            };
        };
    } forEach _loadoutConfigEntries;

    if(!isNull _uniform) then {
        [_unit, _uniform, _kitsConfig, "uniform"] call AMFW_LM_fnc_processContainerKits
    };
    if(!isNull _vest) then {
        [_unit, _vest, _kitsConfig, "vest"] call AMFW_LM_fnc_processContainerKits;
    };
    if(!isNull _backpack) then {
        [_unit, _backpack, _kitsConfig, "backpack"] call AMFW_LM_fnc_processContainerKits;
    };
    if(!isNull _primaryWeapon) then {
        [_unit, _primaryWeapon, _kitsConfig, "primaryWeapon"] call AMFW_LM_fnc_processWeaponKits;
    };
    if(!isNull _secondaryWeapon) then {
        [_unit, _secondaryWeapon, _kitsConfig, "secondaryWeapon"] call AMFW_LM_fnc_processWeaponKits;
    };
    if(!isNull _launcher) then {
        [_unit, _launcher, _kitsConfig, "launcher"] call AMFW_LM_fnc_processWeaponKits;
    };
    if(!isNull _items) then {
        _kitName = _items call BIS_fnc_getCfgData;
        _kit = _kitsConfig >> "Items" >> _kitName;
        _kitConfigEntries = configProperties [_kit];
        {
            switch(configName (_x)) do {
                case "headgear" : {
                    _item = [_kit, "headgear"] call BIS_fnc_returnConfigEntry;
                    _unit addHeadgear _item;
                };
                case "goggles" : {
                    _item = [_kit, "goggles"] call BIS_fnc_returnConfigEntry;
                    _unit addGoggles _item;
                };
                case "items" : {
                    _itemsEntry = [_kit, "items"] call BIS_fnc_returnConfigEntry;
                    {_unit linkItem _x;} forEach _itemsEntry;
                };
                case "binoculars" : {
                    _item = [_kit, "binoculars"] call BIS_fnc_returnConfigEntry;
                    _unit addWeapon _item;
                };
            };
        } forEach _kitConfigEntries;
    };
    _unit call AMFW_LM_fnc_saveLoadout;

} else {
	_unit setUnitLoadout(_unit getVariable["AMFW_LM_unitLoadout",[]]);
};

true