class CfgORBAT
{
	class OTAN 
	{ // OTAN
		id = 1;        // Unit ID
		idType = 0;    // Unit ID type
		side = "West"; // Unit side from CfgChainOfCommand >> Sides
		size = "Brigade"; // Unit size from CfgChainOfCommand >> Sizes. Displays relevant icon above the Type icon
		type = "HQ"; // Unit type from CfgChainOfCommand >> Types
		commander = "James Norman Mattis"; // Name of unit commander. Can be either direct name, or class from CfgWorlds >> GenericNames (random name from the list is then selected)
		commanderRank = "GENERAL";
		texture = "\a3\Data_f\Flags\flag_nato_co.paa"; // Custom unit texture
		insignia = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa"; // Unit insignia, displayed in ORBAT background and in tooltip
		text = "OTAN"; // Custom text and short text, can still use some arguments when defined:
		// 	%1 - ID (e.g. "7th")
		// 	%2 - Type (e.g. "Infantry")
		// 	%3 - Size (e.g. "Division")
		textShort = "OTAN";
		color[] = {255,255,255,1}; // Custom color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
        description= "OTAN"; // A brief description of the group or unit.
		
		class 1stMBG
		{ // 1er Multinational Battle Group
			id = 2;
			type = "HQ";
			size = "Regiment";
			side = "West";
			commander = "NATOMen";
			commanderRank = "MAJOR";
			text = "1st MBG"; // Custom text and short text, can still use some arguments when defined:
			// 	%1 - ID (e.g. "7th")
			// 	%2 - Type (e.g. "Infantry")
			// 	%3 - Size (e.g. "Division")
			textShort = "1st MBG";
			// color[] = {0,0,1,1}; // Custom color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
			description= "VJTF - First Multinational Battle Group"; // A brief description of the group or unit.
 		};
		
		class 2ndMBG
		{ // 1er Multinational Battle Group
			id = 3;
			type = "HQ";
			size = "Regiment";
			side = "West";
			commander = "Tanin69";
			commanderRank = "MAJOR";
			text = "2nd MBG"; // Custom text and short text, can still use some arguments when defined:
			// 	%1 - ID (e.g. "7th")
			// 	%2 - Type (e.g. "Infantry")
			// 	%3 - Size (e.g. "Division")
			textShort = "2nd MBG";
			// color[] = {0,0,1,1}; // Bravo color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
			description= "VJTF - Second Multinational Battle Group"; // A brief description of the group or unit.

			class CyNORO
			{ // Compagnie TZ NORO
				id = 3;
				type = "HQ";
				size = "Company";
				side = "West";
				commander = "NATOMen";
				commanderRank = "CAPTAIN";
				text = "Compagnie NORO";
				textShort = "Cy TZ NORO";
				color[] = {255,255,255,1};
				description= "Compagnie affectée à la TZ NORO";
			};

			class CyCERO
			{ // Compagnie TZ CERO
				id = 3;
				type = "HQ";
				size = "Company";
				side = "West";
				commander = "NATOMen";
				commanderRank = "CAPTAIN";
				text = "Compagnie CERO";
				textShort = "Cy CERO";
				color[] = {255,255,255,1};
				description= "Compagnie affectée à la TZ CERO";

				class 1erRPIMa
				{ // 1erRPIMa
					id = 3;
					type = "Recon";
					//size = "Regiment";
					//size = "Squad";
					side = "West";
					commander = "NATOMen";
					commanderRank = "LIEUTENANT";
					texture = __EVAL(getMissionPath "ORBAT\1erRPIMa.paa");
					insignia = __EVAL(getMissionPath "ORBAT\1erRPIMa.paa");
					text = "1er RPIMa";
					textShort = "1er RPIMa";
					color[] = {255,255,255,1};
					description= "Section du 1er RPIMa";
				};

				class 82ndCAB
				{ // 82nd Combat Air Bataillon
					id = 3;
					type = "Helicopter";
					//size = "Squadron";
					side = "West";
					commander = "NATOMen";
					commanderRank = "Captain";
					texture = __EVAL(getMissionPath "ORBAT\58thRS.paa");
					insignia = __EVAL(getMissionPath "ORBAT\58thRS.paa");
					text = "82nd Combat Air Bataillon";
					textShort = "82nd CAB";
					color[] = {255,255,255,1};
					description= "Section du 82nd Combat Air Bataillon";
					assets[] = {
						RHS_AH64D_wd,
						RHS_UH60M_MEV2
					};
				};

				class 3rdCav
				{ // 3rdCav - MBT
					id = 3;
					type = "Armored";
					//size = "Platoon";
					side = "West";
					commander = "NATOMen";
					commanderRank = "Sergeant";
					texture = __EVAL(getMissionPath "ORBAT\3rdCav.paa");
					insignia = __EVAL(getMissionPath "ORBAT\3rdCav.paa");
					text = "3rd Cavalry Regiment";
					textShort = "3rd Cavalry";
					color[] = {255,255,255,1};
					description= "Peloton de MBT du 3rd Cavalry Regiment";
					assets[] = {
						{rhsusf_m1a2sep1tuskiwd_usarmy, 3}
					};
				};

				class 92RI
					{ // 92RI
						id = 3;
						type = "Infantry";
						//size = "Section";
						side = "West";
						commander = "NATOMen";
						commanderRank = "Lieutenant";
						texture = __EVAL(getMissionPath "ORBAT\92RI.paa");
						insignia = __EVAL(getMissionPath "ORBAT\92RI.paa");
						text = "92eme Régiment d'infanterie";
						textShort = "92eme RI";
						color[] = {255,255,255,1};
						description= "Section du 92ème Régiment d'infanterie";

					class 3rdCav
					{ // 3rdCav - IFV
						id = 3;
						type = "MechanizedInfantry";
						//size = "Platoon";
						side = "West";
						commander = "NATOMen";
						//commanderRank = "Captain";
						texture = __EVAL(getMissionPath "ORBAT\3rdCav.paa");
						insignia = __EVAL(getMissionPath "ORBAT\3rdCav.paa");
						text = "3rd Cavalry Regiment";
						textShort = "3rd Cavalry";
						color[] = {255,255,255,1};
						description= "Peloton d'IFV du 3rd Cavalry Regiment";
						assets[] = {
							{RHS_M2A3_BUSKI_wd, 4}
						};
					};

					class 92RI
					{ // 92RI
						id = 3;
						type = "Infantry";
						//size = "Squad";
						side = "West";
						//commander = "NATOMen";
						//commanderRank = "Lieutenant";
						texture = __EVAL(getMissionPath "ORBAT\92RI.paa");
						insignia = __EVAL(getMissionPath "ORBAT\92RI.paa");
						text = "92eme Régiment d'infanterie";
						textShort = "92eme RI";
						color[] = {255,255,255,1};
						description= "4 équipes du 92ème Régiment d'infanterie";
					};
					
				};
				
			};

			class CySURO
			{ // Bataillon TZ SURO
				id = 3;
				type = "HQ";
				size = "Company";
				side = "West";
				commander = "NATOMen";
				commanderRank = "CAPTAIN";
				text = "Compagnie SURO";
				textShort = "Cy SURO";
				color[] = {255,255,255,1};
				description= "Compagnie affectée à la TZ SURO";
			};

 		};
		
		class 3rdMBG
		{ // 3eme brigade
			id = 4;
			type = "Unknown";
			size = "Regiment";
			side = "West";
			commander = "NATOMen";
			commanderRank = "COLONEL";
			text = "3rd MBG"; // Custom text and short text, can still use some arguments when defined:
			// 	%1 - ID (e.g. "7th")
			// 	%2 - Type (e.g. "Infantry")
			// 	%3 - Size (e.g. "Division")
			textShort = "3rd MBG";
			// color[] = {0,0,1,1}; // Bravo color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
			description= "VJTF - Second Multinational Battle Group"; // A brief description of the group or unit.
 		};
		
	};

	class Hostiles
	{
		id = 1;        // Unit ID
		idType = 0;    // Unit ID type
		side = "East"; // Unit side from CfgChainOfCommand >> Sides
		size = "Army"; // Unit size from CfgChainOfCommand >> Sizes. Displays relevant icon above the Type icon
		type = "HQ"; // Unit type from CfgChainOfCommand >> Types
		//commander = "Commandement GIE"; // Name of unit commander. Can be either direct name, or class from CfgWorlds >> GenericNames (random name from the list is then selected)
		// texture = __EVAL(getMissionPath "ORBAT\Insigne.paa");
		text = "Hostiles"; // Custom text and short text, can still use some arguments when defined:
		// 	%1 - ID (e.g. "7th")
		// 	%2 - Type (e.g. "Infantry")
		// 	%3 - Size (e.g. "Division")
		textShort = "OTAN";
		// color[] = {255,255,255,1}; // Custom color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
        description= "OTAN"; // A brief description of the group or unit.
		
		class 1erBCT
		{
			id = 2;
			type = "Unknown";
			size = "BCT";
			side = "East";
			// commander = "Seemann";
			// commanderRank = "Lieutenant";
			text = "1er"; // Custom text and short text, can still use some arguments when defined:
			// 	%1 - ID (e.g. "7th")
			// 	%2 - Type (e.g. "Infantry")
			// 	%3 - Size (e.g. "Division")
			textShort = "1er";
			// color[] = {0,0,1,1}; // Custom color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
			description= "Composante ALPHA du Groupe d'Intervention Européen"; // A brief description of the group or unit.
 		};
		
		class 2emeBCT
		{
			id = 3;
			type = "Unknown";
			size = "BCT";
			side = "East";
			// commander = "Madness";
			// commanderRank = "Lieutenant";
			text = "2eme"; // Custom text and short text, can still use some arguments when defined:
			// 	%1 - ID (e.g. "7th")
			// 	%2 - Type (e.g. "Infantry")
			// 	%3 - Size (e.g. "Division")
			textShort = "2eme";
			// color[] = {0,0,1,1}; // Bravo color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
			description= "Composante BRAVO du Groupe d'Intervention Européen"; // A brief description of the group or unit.

			class 1erGT2BCT
			{
				id = 3;
				type = "Helicopter";
				size = "Size1";
				side = "East";
				// commander = "Madness";
				// commanderRank = "Lieutenant";
				text = "Hélicos"; // Custom text and short text, can still use some arguments when defined:
				// 	%1 - ID (e.g. "7th")
				// 	%2 - Type (e.g. "Infantry")
				// 	%3 - Size (e.g. "Division")
				textShort = "Hélicos";
				// color[] = {0,0,1,1}; // Bravo color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
				description= "Composante BRAVO du Groupe d'Intervention Européen"; // A brief description of the group or unit.
			};

			class 2emeGT2BCT
			{
				id = 3;
				type = "Armored";
				size = "Size1";
				side = "East";
				// commander = "Madness";
				// commanderRank = "Lieutenant";
				text = "Blindés"; // Custom text and short text, can still use some arguments when defined:
				// 	%1 - ID (e.g. "7th")
				// 	%2 - Type (e.g. "Infantry")
				// 	%3 - Size (e.g. "Division")
				textShort = "Blindés";
				// color[] = {0,0,1,1}; // Bravo color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
				description= "Composante BRAVO du Groupe d'Intervention Européen"; // A brief description of the group or unit.
			};

			class 3emeGT2BCT
			{
				id = 3;
				type = "Recon";
				size = "Size1";
				side = "East";
				// commander = "Madness";
				// commanderRank = "Lieutenant";
				text = "1er RPIMa"; // Custom text and short text, can still use some arguments when defined:
				// 	%1 - ID (e.g. "7th")
				// 	%2 - Type (e.g. "Infantry")
				// 	%3 - Size (e.g. "Division")
				textShort = "1er RPIMa";
				// color[] = {0,0,1,1}; // Bravo color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
				description= "1er Régiment Parachutiste d'Infanterie de Marine"; // A brief description of the group or unit.
			};

			class 4emeGT2BCT
			{
				id = 3;
				type = "MechanizedInfantry";
				size = "Size1";
				side = "East";
				// commander = "Madness";
				// commanderRank = "Lieutenant";
				text = "92RI"; // Custom text and short text, can still use some arguments when defined:
				// 	%1 - ID (e.g. "7th")
				// 	%2 - Type (e.g. "Infantry")
				// 	%3 - Size (e.g. "Division")
				textShort = "92RI";
				// color[] = {0,0,1,1}; // Bravo color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
				description= "92ème Régiment d'Infanterie"; // A brief description of the group or unit.
			};

			class 5emeGT2BCT
			{
				id = 3;
				type = "MechanizedInfantry";
				size = "Size1";
				side = "East";
				// commander = "Madness";
				// commanderRank = "Lieutenant";
				text = "24RI"; // Custom text and short text, can still use some arguments when defined:
				// 	%1 - ID (e.g. "7th")
				// 	%2 - Type (e.g. "Infantry")
				// 	%3 - Size (e.g. "Division")
				textShort = "24RI";
				// color[] = {0,0,1,1}; // Bravo color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
				description= "92ème Régiment d'Infanterie"; // A brief description of the group or unit.
			};
 		};
		
		class 3emeBCT
		{
			id = 4;
			type = "Unknown";
			size = "BCT";
			side = "East";
			// commander = "Madness";
			// commanderRank = "Lieutenant";
			text = "3eme"; // Custom text and short text, can still use some arguments when defined:
			// 	%1 - ID (e.g. "7th")
			// 	%2 - Type (e.g. "Infantry")
			// 	%3 - Size (e.g. "Division")
			textShort = "3eme";
			// color[] = {0,0,1,1}; // Bravo color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
			description= "Composante BRAVO du Groupe d'Intervention Européen"; // A brief description of the group or unit.
 		};
		
	};
	
};