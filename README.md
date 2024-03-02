# MAM Enhancer

<!-- ![Early Access version support: full](https://i.imgur.com/1TXo5em.png) -->
<!-- ![Experimental version support: full](https://i.imgur.com/kvJ4ZoR.png) -->
![Singleplayer compatibility: full](https://i.imgur.com/S8roc0Y.png)
![Multiplayer compatibility: full](https://i.imgur.com/EnOtDkM.png)

**Multiplayer Compatible!** _Can also run as a client-side only mod as long as the server has SML installed._

_If you enjoy my work, please consider donating to my [completely optional tip jar](https://ko-fi.com/robb4)._

This mod **modifies** the base game **MAM, HUB, and AWESOME Shop UI**
to **provide additional information to the player** and **improve the user experience**.

It provides no content on its own and _does not alter game progression in any way_ - just quality of life changes.

Here is a screenshot of the base game Caterium research tree viewed with the mod's default settings:

![Open Caterium tree view](https://i.imgur.com/nitpe1j.jpeg)

Here is a screenshot of a [different mod's](https://ficsit.app/mod/ArmorModules) research tree that uses some extra features this mod offers:

![Open PowerSuit view](https://i.imgur.com/A36tpYj.jpeg)

<video controls="" width="720" height="405">
  <source src="https://i.imgur.com/FGeZnKd.mp4" autoplay="" controls="" type="video/mp4">
</video>

Check out **LK Aice**'s mod spotlight below, in English or German. Thanks!

[![EnglishVideo](https://img.youtube.com/vi/RYDA1s_fKhc/mqdefault.jpg)](https://www.youtube.com/watch?v=RYDA1s_fKhc)
[![GermanVideo](https://img.youtube.com/vi/4k5MACqssl8/mqdefault.jpg)](https://www.youtube.com/watch?v=RYDA1s_fKhc)

## Overview

* Configure the mod's options directly from the MAM
* Select from a number of **improved display options** for already researched and hidden Nodes in the Mod Configs (see video above)
* Directly **add MAM Node required items to your To-Do List**
  * Use in tandem with the [PowerSuit Logistic Modules](https://ficsit.app/mod/AEr7ASfJHWpnhL) mod to seamlessly request items from storage for your research!

    <video controls="" width="360" height="203">
    <source src="https://i.imgur.com/h6bDMw6.mp4" autoplay="" controls="" type="video/mp4">
    </video>

* **Re-open the the same Research Tree you viewed** last time you had the MAM open (configurable)
  * Remembers the position you had scrolled to
* View the **item name and descriptions** of the items a MAM Node will unlock by hovering over them (see the second image)
* See **tree completion progress at a glance** from the list, with a percentage, progress bar, or both.
* See the text **description of the Node** you are viewing (a special field that mods can add to their nodes)
* Figure out **what mod added the research tree** via the mod's icon in the tree selection list, as well as display name and icon in the tree's hover tooltip.
* Figure out **what mod added a HUB Milestone** via the mod's icon in the list, as well as display name and icon in the icon's hover tooltip.
* Directly **add a HUB Milestone's required items to your To-Do List**
* **Re-open the the same HUB Milestone you viewed** last time you had the HUB open (configurable)
* Figure out **what mod added a AWESOME Shop entry** via the mod's icon in the list, as well as display name and icon in the icon's hover tooltip.
* **Zoom out** to see more of a MAM tree at once

    <video controls="" width="360" height="203">
      <source src="https://i.imgur.com/V1OrNlE.mp4" autoplay="" controls="" type="video/mp4">
    </video>

* Developer functions for helping to test mods with research trees (see more below)

Don't like something this mod does?
Just press the 'Inventory' tab, and the MAM will return to its usual display behavior.
You can also turn off most visual changes in the mod configs.

### Questions? Suggestions? Join the [Nog's Mods Discord server](https://discord.gg/uKKFX2tWfh) or leave an issue on the [GitHub issues page](https://github.com/Nogg-aholic/MAMTips/issues) (slower response time)

![View unlock item tooltip](https://i.imgur.com/nAoLJdI.png)

![View mod that added the tree](https://i.imgur.com/c50zyP5.png)

How to find the configs outside of the MAM:

![Configs](https://i.imgur.com/eX9QV58.png)

## For Developers

### Extra Capability for your Mod

When in 'Info' view mode,
the Description of the selected node's associated Schematic is shown
along with the usual tooltip details.
*This is not normally visible in the base game*.
Furthermore, this mod allows users to hover over the items that Node will unlock and see their descriptions -
also not possible in the base game.
As such, **having this mod as a dependency allows you to display more information to users in your MAM trees.**

Furthermore, the mod also allows end users to hover over FGUnlockInfoOnly unlock types in the MAM,
adding another method through which you can display more info to the user.
In the base game, any description text you supply to Info Only unlocks is not viewable in the MAM.

The mod icon that this mod renders in the MAM
is the same as the one you have included with your mod for display on the Mods menu.
If you see the white warning file icon instead,
you are missing some configuration files that allow your mod icon to be packed with the rest of your mod files.
You can find directions on how to set that up
[here](https://docs.ficsit.app/satisfactory-modding/latest/Development/BeginnersGuide/Adding_Ingame_Mod_Icon.html).

### Debugging Features

This option can't be configured from inside the MAM -
you must be on the pause screen or main menu to change it.

If you enable the 'Debugging Features' config option, which is off by default,
you'll open up a bunch of tools to help with testing mods with research trees.
These features include:

* Grant/revoke access to viewing a tree (to test what the tree's name, icon, and description appear as)
* Grant/revoke specific Milestones directly from inside the HUB
* Grant/revoke specific Shop Purchases directly from inside the AWESOME Shop
  * It will warn you if the purchase appears to be repeatable (unlocking it this way probably won't do anything then)
* Grant/revoke specific nodes in the tree directly from inside the MAM
  * The button appears in the node details, so to do this for hidden nodes, enable the 'Reveal Details of Hidden Nodes' config option
  * When revoking, it will revoke recipes unlocked by the node, but it can't undo things like hand slots or other schematics (ex. AWESOME Shop) made available by the node
* Grant/revoke access to every node in a tree at once
* See the asset paths of Research Trees, Nodes, and HUB and AWESOME Shop schematics and easily copy them to clipboard
* Reset the mod's internal tutorial

<video controls="" width="360" height="203">
  <source src="https://i.imgur.com/INP46Gk.mp4" autoplay="" controls="" type="video/mp4">
</video>

## Credits

Thanks to Deantendo#4265 for the original mod icon, which was further modified by Robb.

Thanks to SifVerT#2610 for pointers in getting the debugging features set up.
