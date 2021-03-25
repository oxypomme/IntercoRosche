//Le nom de la zone qui sera utilisé pour tous les spawns 
private _zn = "Jarlitz_2";
private _grpGarn = objNull;
private _nbPat = objNull;
private _probaManedFW = objNull;

switch true do {
		case (nbJoueurs < 37): {
			_grpGarn = GROUPE_PARAMIL_PETIT;
			_nbPat = [2];
			_probaManedFW = 0.6;
		};
		case (nbJoueurs > 36 && nbJoueurs < 46): {
			_grpGarn = GROUPE_PARAMIL_PETIT;
			_nbPat = [3];
			_probaManedFW = 0.8;
		};
		case (nbJoueurs > 45): {
			_grpGarn = GROUPE_PARAMIL_PETIT;
			_nbPat = [2,3];
			_probaManedFW = 1;
		}; 
};

//Spawn des patrouilles
[_zn, _nbPat, _grpGarn, opfor] spawn int_fnc_spawnRdmPatrols;
//[_zn,[2],GROUPE_PARAMIL_MOYEN,opfor] spawn int_fnc_spawnRdmPatrols;

//Spawn des garnisons
[_zn,_grpGarn, nil, nil, nil, 0.1, 0.2] spawn int_fnc_spawnGarnisons;
//[_zn,GROUPE_PARAMIL_GRAND, nil, nil, nil, 0.1, 1] spawn int_fnc_spawnGarnisons;

//Spawn des armes fixes
[_zn, opfor, "rhsgref_ins_DSHKM", "O_G_Soldier_unarmed_F", 1, _probaManedFW, nil] spawn int_fnc_spawnFixedWeapons;
//[_zn,opfor,"O_G_Offroad_01_AT_F","O_G_Soldier_unarmed_F",1,1,1] spawn int_fnc_spawnFixedWeapons;