/*
	author: ARTER

	description:
	Saves current unit loadout.

	parameters:
	_this select 0: unit (Object)

	returns: true if finished execution
*/

if (!local _this) exitWith {};
_this setVariable["AMFW_LM_unitLoadout",getUnitLoadout _this, true];
diag_log format ["Loadout saved. Unit: %1, Player: %2, Loadout: %3", _this, player, getUnitLoadout _this];
true