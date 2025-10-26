#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoMH[] =
{
#endif

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
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 39 : 52,
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
        .natDexNum = NATIONAL_DEX_PIDGEY,
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
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 188,
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
        .natDexNum = NATIONAL_DEX_ALTARIA,
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

#ifdef __INTELLISENSE__
};
#endif