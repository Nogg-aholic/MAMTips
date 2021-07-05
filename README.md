# MAM Enhancer

# [View the mod on Ficsit.app!](https://ficsit.app/mod/EPUmESEWaBCk4n)

![Open tree view](https://i.imgur.com/a1W6aI5.png)

## Overview

This mod modifies the base game MAM UI to provide additional information to the player.

* View the item name and description of the items a MAM Node will unlock (see the second image)
* See the text description of the node you are viewing (a special field that mods can add)
* Figure out what mod added the research tree via the mod's icon in the tree selection list, as well as display name and icon in the tree's hover tooltip.

![View unlock item tooltip](https://i.imgur.com/E6BZT17.png)

![View mod that added the tree](https://i.imgur.com/fQUW3hl.png)

Don't like something this mod does? Just press the 'Inventory' tab, and the MAM will return to its usual display behavior.

## For Developers

When in 'Info' view mode, the Description of the selected node's associated Schematic is shown along with the usual tooltip details. *This is not normally visible in the base game*. Furthermore, this mod allows users to hover over the items that Node will unlock and see their descriptions - also not possible in the base game. As such, having this mod as a dependency allows you to display more information to users in your MAM trees.

The mod icon that this mod renders in the MAM is the same as the one you have included with your mod for display on the Mods menu. If you see the while warning file icon instead, you are missing some configuration files that allow your mod icon to be packed with the rest of your mod files. You can find directions on how to set that up [here](https://docs-dev.ficsit.app/satisfactory-modding/latest/Development/BeginnersGuide/Adding_Ingame_Mod_Icon.html).
