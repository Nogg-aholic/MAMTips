# MAM Enhancer

![Early Access version support: full](https://i.imgur.com/1TXo5em.png)
![Experimental version support: full](https://i.imgur.com/kvJ4ZoR.png)
![Singleplayer compatibility: full](https://i.imgur.com/S8roc0Y.png)
![Multiplayer compatibility: full](https://i.imgur.com/EnOtDkM.png)

![Open tree view](https://i.imgur.com/B9a00jz.png)

<video controls="" width="720" height="405">
  <source src="https://i.imgur.com/FGeZnKd.mp4" autoplay="" controls="" type="video/mp4">
</video>

Check out **LK Aice**'s mod spotlight below, in English or German. Thanks!

[![EnglishVideo](https://img.youtube.com/vi/RYDA1s_fKhc/mqdefault.jpg)](https://www.youtube.com/watch?v=RYDA1s_fKhc)
[![GermanVideo](https://img.youtube.com/vi/4k5MACqssl8/mqdefault.jpg)](https://www.youtube.com/watch?v=RYDA1s_fKhc)

## Overview

**Multiplayer Compatible!**

This mod modifies the base game MAM UI to provide additional information to the player.

* Select from a number of **improved display options** for already researched and hidden Nodes in the Mod Configs (see video above)
* Directly **add required items to your To-Do List** (wip, see tooltip ingame for more info)
  * Use in tandem with the [PowerSuit Logistic Modules](https://ficsit.app/mod/AEr7ASfJHWpnhL) mod to seamlessly request items from storage for your research!

    <video controls="" width="360" height="203">
    <source src="https://i.imgur.com/h6bDMw6.mp4" autoplay="" controls="" type="video/mp4">
    </video>

* View the **item name and descriptions** of the items a MAM Node will unlock by hovering over them (see the second image)
* See **tree completion progress at a glance** from the list, with a percentage, progress bar, or both.
* See the text **description of the Node** you are viewing (a special field that mods can add to their nodes)
* Figure out **what mod added the research tree** via the mod's icon in the tree selection list, as well as display name and icon in the tree's hover tooltip.

Don't like something this mod does? Just press the 'Inventory' tab, and the MAM will return to its usual display behavior. You can also turn off the node display changes in the mod configs.

### Questions? Suggestions? Join the [Nog's Mods Discord server](https://discord.gg/uKKFX2tWfh) or leave an issue on the [GitHub issues page](https://github.com/Nogg-aholic/MAMTips/issues) (slower response time)

![View unlock item tooltip](https://i.imgur.com/nAoLJdI.png)

![View mod that added the tree](https://i.imgur.com/c50zyP5.png)

![Configs](https://i.imgur.com/eX9QV58.png)

## For Developers

When in 'Info' view mode, the Description of the selected node's associated Schematic is shown along with the usual tooltip details. *This is not normally visible in the base game*. Furthermore, this mod allows users to hover over the items that Node will unlock and see their descriptions - also not possible in the base game. As such, having this mod as a dependency allows you to display more information to users in your MAM trees.

The mod icon that this mod renders in the MAM is the same as the one you have included with your mod for display on the Mods menu. If you see the white warning file icon instead, you are missing some configuration files that allow your mod icon to be packed with the rest of your mod files. You can find directions on how to set that up [here](https://docs.ficsit.app/satisfactory-modding/latest/Development/BeginnersGuide/Adding_Ingame_Mod_Icon.html).

Thanks to Deantendo#4265 for the original mod icon, which was further modified by Robb
