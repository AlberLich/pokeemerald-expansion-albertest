#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoMH[] =
{
#endif
//TODO I forgor EV yield , replace PLACEHOLDER .evYield_Speed
#if P_FAMILY_VELOCIPREY
    [SPECIES_VELOCIPREY] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 80,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_HUSTLE, ABILITY_SCRAPPY, ABILITY_SNIPER },//TODO add Pack boost Ability
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Velociprey"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,//TODO
        .categoryName = _(""), //TODO
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(//TODO 
            "Helpless in combat, it feeds on the\n" 
            "paralyzed victims that vespoids bring\n"
            "back to the nest until it grows large\n"
            "enough to hunt for itself."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Velociprey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames =sAnims_SingleFramePlaceHolder, // no animation 
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Velociprey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Velociprey,//TODO
        .shinyPalette = gMonShinyPalette_Velociprey,//TODO
        .iconSprite = gMonIcon_Velociprey,//TODO
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .tmIlliterate = FALSE,
        .levelUpLearnset = sVelocipreyLevelUpLearnset,
        .teachableLearnset = sVelocipreyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_VELOCIDROME}),//TODO
    },

    [SPECIES_VELOCIDROME] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 110,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 127,
        .expYield = 144,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_HUSTLE, ABILITY_SCRAPPY, ABILITY_SNIPER },//TODO add Pack boost Ability
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Velocidrome"),
        .cryId = CRY_ALTARIA,
        .natDexNum = NATIONAL_DEX_ALTARIA,//TODO
        .categoryName = _(""),//TODO
        .height = 11,//TODO
        .weight = 206,//TODO
        .description = COMPOUND_STRING(//TODO
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sVelocidromeLevelUpLearnset,
        .teachableLearnset = sVelocidromeTeachableLearnset,
    },

#endif //P_FAMILY_VELOCIPREY

#if P_FAMILY_GIAPREY
    [SPECIES_GIAPREY] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 40,
        .baseSpeed     = 80,
        .baseSpAttack  = 55,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_ICE),
        .catchRate = 255,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SLUSH_RUSH, ABILITY_ADAPTABILITY, ABILITY_SNIPER },//TODO add Pack boost Ability
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Giaprey"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,//TODO
        .categoryName = _(""), //TODO
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(//TODO
            "Helpless in combat, it feeds on the\n" 
            "paralyzed victims that vespoids bring\n"
            "back to the nest until it grows large\n"
            "enough to hunt for itself."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Pidgey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pidgey,//TODO
        .shinyPalette = gMonShinyPalette_Pidgey,//TODO
        .iconSprite = gMonIcon_Pidgey,//TODO
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .tmIlliterate = FALSE,
        .levelUpLearnset = sVelocipreyLevelUpLearnset,
        .teachableLearnset = sVelocipreyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GIADROME}),//TODO
    },

    [SPECIES_GIADROME] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_ICE),
        .catchRate = 127,
        .expYield = 144,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SLUSH_RUSH, ABILITY_ADAPTABILITY, ABILITY_SNIPER },//TODO add Pack boost Ability
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Giadrome"),
        .cryId = CRY_ALTARIA,//TODO 
        .natDexNum = NATIONAL_DEX_ALTARIA,//TODO
        .categoryName = _(""),//TODO
        .height = 11,//TODO
        .weight = 206,//TODO
        .description = COMPOUND_STRING(//TODO
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sVelocidromeLevelUpLearnset,
        .teachableLearnset = sVelocidromeTeachableLearnset,
    },

#endif //P_FAMILY_GIAPREY
#if P_FAMILY_GENPREY
    [SPECIES_GENPREY] =
    {
        .baseHP        = 55,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 20,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_ELECTRIC),
        .catchRate = 255,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SAND_RUSH, ABILITY_SAND_VEIL, ABILITY_SNIPER },//TODO add Pack boost Ability
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Genprey"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,//TODO
        .categoryName = _(""), //TODO
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(//TODO
            "Helpless in combat, it feeds on the\n" 
            "paralyzed victims that vespoids bring\n"
            "back to the nest until it grows large\n"
            "enough to hunt for itself."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Pidgey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pidgey,//TODO
        .shinyPalette = gMonShinyPalette_Pidgey,//TODO
        .iconSprite = gMonIcon_Pidgey,//TODO
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .tmIlliterate = FALSE,
        .levelUpLearnset = sVelocipreyLevelUpLearnset,//TODO
        .teachableLearnset = sVelocipreyTeachableLearnset,//TODO
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GENDROME}),//TODO
    },

    [SPECIES_GENDROME] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 40,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_ELECTRIC),
        .catchRate = 127,
        .expYield = 144,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SLUSH_RUSH, ABILITY_ADAPTABILITY, ABILITY_SNIPER },//TODO add Pack boost Ability
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gendrome"),
        .cryId = CRY_ALTARIA,//TODO 
        .natDexNum = NATIONAL_DEX_ALTARIA,//TODO
        .categoryName = _(""),//TODO
        .height = 11,//TODO
        .weight = 206,//TODO
        .description = COMPOUND_STRING(//TODO
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sVelocidromeLevelUpLearnset,//TODO
        .teachableLearnset = sVelocidromeTeachableLearnset,//TODO
    },

#endif //P_FAMILY_GENPREY
#if P_FAMILY_IOPREY
    [SPECIES_IOPREY] =
    {
        .baseHP        = 60,
        .baseAttack    = 35,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_POISON),
        .catchRate = 255,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CORROSION, ABILITY_AFTERMATH, ABILITY_SNIPER },//TODO add Pack boost Ability
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Ioprey"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,//TODO
        .categoryName = _(""), //TODO
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(//TODO
            "Helpless in combat, it feeds on the\n" 
            "paralyzed victims that vespoids bring\n"
            "back to the nest until it grows large\n"
            "enough to hunt for itself."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Pidgey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pidgey,//TODO
        .shinyPalette = gMonShinyPalette_Pidgey,//TODO
        .iconSprite = gMonIcon_Pidgey,//TODO
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .tmIlliterate = FALSE,
        .levelUpLearnset = sVelocipreyLevelUpLearnset,//TODO
        .teachableLearnset = sVelocipreyTeachableLearnset,//TODO
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GENDROME}),//TODO
    },

    [SPECIES_IODROME] =
    {
        .baseHP        = 100,
        .baseAttack    = 45,
        .baseDefense   = 60,
        .baseSpeed     = 45,
        .baseSpAttack  = 110,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_POISON),
        .catchRate = 127,
        .expYield = 144,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CORROSION, ABILITY_AFTERMATH, ABILITY_SNIPER },//TODO add Pack boost Ability
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Iodrome"),
        .cryId = CRY_ALTARIA,//TODO 
        .natDexNum = NATIONAL_DEX_ALTARIA,//TODO
        .categoryName = _(""),//TODO
        .height = 11,//TODO
        .weight = 206,//TODO
        .description = COMPOUND_STRING(//TODO
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sVelocidromeLevelUpLearnset,//TODO
        .teachableLearnset = sVelocidromeTeachableLearnset,//TODO
    },

#endif //P_FAMILY_IOPREY
#if P_FAMILY_JAGGI
    [SPECIES_JAGGI] =
    {
        .baseHP        = 50,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_PRANKSTER, ABILITY_PICKUP, ABILITY_SNIPER },//TODO add 3RD ability
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Jaggi"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,//TODO
        .categoryName = _(""), //TODO
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(//TODO
            "Helpless in combat, it feeds on the\n" 
            "paralyzed victims that vespoids bring\n"
            "back to the nest until it grows large\n"
            "enough to hunt for itself."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Pidgey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pidgey,//TODO
        .shinyPalette = gMonShinyPalette_Pidgey,//TODO
        .iconSprite = gMonIcon_Pidgey,//TODO
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .tmIlliterate = FALSE,
        .levelUpLearnset = sVelocipreyLevelUpLearnset,//TODO
        .teachableLearnset = sVelocipreyTeachableLearnset,//TODO
        .evolutions =  EVOLUTION({EVO_LEVEL, 15, SPECIES_JAGGIA, CONDITIONS({IF_GENDER, MON_FEMALE})},
                                {EVO_LEVEL, 20, SPECIES_GREAT_JAGGI, CONDITIONS({IF_GENDER, MON_MALE})}),
    },

    [SPECIES_JAGGIA] =
    {
        .baseHP        = 100,//TODO JAGGIA STATS
        .baseAttack    = 45,
        .baseDefense   = 60,
        .baseSpeed     = 45,
        .baseSpAttack  = 110,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 127,
        .expYield = 144,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(100),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CORROSION, ABILITY_AFTERMATH, ABILITY_SNIPER },//TODO add all ABILITIES
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Iodrome"),
        .cryId = CRY_ALTARIA,//TODO 
        .natDexNum = NATIONAL_DEX_ALTARIA,//TODO
        .categoryName = _(""),//TODO
        .height = 11,//TODO
        .weight = 206,//TODO
        .description = COMPOUND_STRING(//TODO
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sVelocidromeLevelUpLearnset,//TODO
        .teachableLearnset = sVelocidromeTeachableLearnset,//TODO
    },

    [SPECIES_GREAT_JAGGI] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 127,
        .expYield = 144,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CORROSION, ABILITY_AFTERMATH, ABILITY_SNIPER },//TODO add Abilities
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Great Jaggi"),
        .cryId = CRY_ALTARIA,//TODO 
        .natDexNum = NATIONAL_DEX_ALTARIA,//TODO
        .categoryName = _(""),//TODO
        .height = 11,//TODO
        .weight = 206,//TODO
        .description = COMPOUND_STRING(//TODO
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sVelocidromeLevelUpLearnset,//TODO
        .teachableLearnset = sVelocidromeTeachableLearnset,//TODO
    },

#endif //P_FAMILY_JAGGI
#if P_FAMILY_BAGGI
    [SPECIES_BAGGI] =
    {
        .baseHP        = 60,//TODO STATS 
        .baseAttack    = 35,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_PSYCHIC),
        .catchRate = 255,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CORROSION, ABILITY_AFTERMATH, ABILITY_SNIPER },//TODO add ABILITIES
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Baggi"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,//TODO
        .categoryName = _(""), //TODO
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(//TODO
            "Helpless in combat, it feeds on the\n" 
            "paralyzed victims that vespoids bring\n"
            "back to the nest until it grows large\n"
            "enough to hunt for itself."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Pidgey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pidgey,//TODO
        .shinyPalette = gMonShinyPalette_Pidgey,//TODO
        .iconSprite = gMonIcon_Pidgey,//TODO
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .tmIlliterate = FALSE,
        .levelUpLearnset = sVelocipreyLevelUpLearnset,//TODO
        .teachableLearnset = sVelocipreyTeachableLearnset,//TODO
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GREAT_BAGGI}),//TODO
    },

    [SPECIES_GREAT_BAGGI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 30,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_PSYCHIC),
        .catchRate = 127,
        .expYield = 144,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CORROSION, ABILITY_AFTERMATH, ABILITY_SNIPER },//TODO add Pack boost Ability
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Iodrome"),
        .cryId = CRY_ALTARIA,//TODO 
        .natDexNum = NATIONAL_DEX_ALTARIA,//TODO
        .categoryName = _(""),//TODO
        .height = 11,//TODO
        .weight = 206,//TODO
        .description = COMPOUND_STRING(//TODO
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sVelocidromeLevelUpLearnset,//TODO
        .teachableLearnset = sVelocidromeTeachableLearnset,//TODO
    },

#endif //P_FAMILY_BAGGI
#if P_FAMILY_WROGGI
    [SPECIES_WROGGI] =
    {
        .baseHP        = 110,//TODO STATS 
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_POISON),
        .catchRate = 255,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CORROSION, ABILITY_AFTERMATH, ABILITY_SNIPER },//TODO ABILITIES 
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Baggi"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,//TODO
        .categoryName = _(""), //TODO
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(//TODO
            "Helpless in combat, it feeds on the\n" 
            "paralyzed victims that vespoids bring\n"
            "back to the nest until it grows large\n"
            "enough to hunt for itself."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Pidgey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pidgey,//TODO
        .shinyPalette = gMonShinyPalette_Pidgey,//TODO
        .iconSprite = gMonIcon_Pidgey,//TODO
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .tmIlliterate = FALSE,
        .levelUpLearnset = sVelocipreyLevelUpLearnset,//TODO
        .teachableLearnset = sVelocipreyTeachableLearnset,//TODO
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GREAT_WROGGI}),//TODO
    },

    [SPECIES_GREAT_WROGGI] =
    {
        .baseHP        = 110,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_PSYCHIC),
        .catchRate = 127,
        .expYield = 144,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_PICKUP, ABILITY_SNIPER },//TODO add 3RD ABILITY
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Great Wroggi"),
        .cryId = CRY_ALTARIA,//TODO 
        .natDexNum = NATIONAL_DEX_ALTARIA,//TODO
        .categoryName = _(""),//TODO
        .height = 11,//TODO
        .weight = 206,//TODO
        .description = COMPOUND_STRING(//TODO
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sVelocidromeLevelUpLearnset,//TODO
        .teachableLearnset = sVelocidromeTeachableLearnset,//TODO
    },

#endif //P_FAMILY_WROGGI

#if P_FAMILY_MACCAO
    [SPECIES_MACCAO] =
    {
        .baseHP        = 110,//TODO STATS 
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_FIGHTING),
        .catchRate = 255,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CORROSION, ABILITY_AFTERMATH, ABILITY_SNIPER },//TODO ABILITIES 
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Maccao"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,//TODO
        .categoryName = _(""), //TODO
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(//TODO
            "Helpless in combat, it feeds on the\n" 
            "paralyzed victims that vespoids bring\n"
            "back to the nest until it grows large\n"
            "enough to hunt for itself."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Pidgey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pidgey,//TODO
        .shinyPalette = gMonShinyPalette_Pidgey,//TODO
        .iconSprite = gMonIcon_Pidgey,//TODO
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .tmIlliterate = FALSE,
        .levelUpLearnset = sVelocipreyLevelUpLearnset,//TODO
        .teachableLearnset = sVelocipreyTeachableLearnset,//TODO
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GREAT_MACCAO}),//TODO
    },

    [SPECIES_GREAT_MACCAO] =
    {
        .baseHP        = 110,//TODO STATS 
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_FIGHTING),
        .catchRate = 127,
        .expYield = 144,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_PICKUP, ABILITY_SNIPER },//TODO ABILITIES
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Great Maccao"),
        .cryId = CRY_ALTARIA,//TODO 
        .natDexNum = NATIONAL_DEX_ALTARIA,//TODO
        .categoryName = _(""),//TODO
        .height = 11,//TODO
        .weight = 206,//TODO
        .description = COMPOUND_STRING(//TODO
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sVelocidromeLevelUpLearnset,//TODO
        .teachableLearnset = sVelocidromeTeachableLearnset,//TODO
    },

#endif //P_FAMILY_MACCAO
#if P_FAMILY_IZUCHI
    [SPECIES_IZUCHI] =
    {
        .baseHP        = 110,//TODO STATS 
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_STEEL),
        .catchRate = 255,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CORROSION, ABILITY_AFTERMATH, ABILITY_SNIPER },//TODO ABILITIES 
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Izuchi"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,//TODO
        .categoryName = _(""), //TODO
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(//TODO
            "Helpless in combat, it feeds on the\n" 
            "paralyzed victims that vespoids bring\n"
            "back to the nest until it grows large\n"
            "enough to hunt for itself."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Pidgey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pidgey,//TODO
        .shinyPalette = gMonShinyPalette_Pidgey,//TODO
        .iconSprite = gMonIcon_Pidgey,//TODO
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .tmIlliterate = FALSE,
        .levelUpLearnset = sVelocipreyLevelUpLearnset,//TODO
        .teachableLearnset = sVelocipreyTeachableLearnset,//TODO
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GREAT_MACCAO}),//TODO
    },

    [SPECIES_GREAT_IZUCHI] =
    {
        .baseHP        = 110,//TODO STATS 
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL,TYPE_STEEL),
        .catchRate = 127,
        .expYield = 144,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_PICKUP, ABILITY_SNIPER },//TODO ABILITIES
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Great Izuchi"),
        .cryId = CRY_ALTARIA,//TODO 
        .natDexNum = NATIONAL_DEX_ALTARIA,//TODO
        .categoryName = _(""),//TODO
        .height = 11,//TODO
        .weight = 206,//TODO
        .description = COMPOUND_STRING(//TODO
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sVelocidromeLevelUpLearnset,//TODO
        .teachableLearnset = sVelocidromeTeachableLearnset,//TODO
    },

#endif //P_FAMILY_IZUCHI



#ifdef __INTELLISENSE__
};
#endif