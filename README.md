# Below Zero Items

Hardcore++ winter survival item pack for the BELOW ZERO DayZ server.
Worn-only, civilian-first, frozen food, loose ammo.

**Repo:** https://github.com/Duke19941/BelowZero_Items

## Contents
- `Data/config.cpp` — item parents and inventory values
- `Scripts/` — Enforce Script classes, unpack action, crafts
- `types.xml` — Central Economy entries (merge into mission `db/types.xml`)
- `stringtable.csv` — English display names / descriptions
- `mod.cpp` — mod metadata
- `docs/BELOW_ZERO_Item_Bible.md` — design notes

## Pack
1. Open DayZ Tools Addon Builder
2. Pack this folder into `@BelowZero_Items/Addons/BelowZero_Items.pbo`
3. Add the mod to server and client command line
4. Merge `types.xml` into the mission

Stand-in vanilla models are used until custom `.p3d` / `.paa` exist.
