# AnyLastWords
 
A 3D isometric roguelike developed in Unreal Engine 5, featuring real-time combat, AI-driven enemies, and a class-based weapon system.
 
---
 
## Trailer
 
[![AnyLastWords Trailer](https://img.shields.io/badge/Watch-Trailer-red?style=for-the-badge&logo=youtube)](https://www.youtube.com/watch?v=R_Lj8gldEZs&feature=youtu.be)
 
---
 
## About
 
AnyLastWords is a 3D isometric roguelike where players fight through waves of enemies using a variety of weapons and abilities. Choose between melee and ranged combat styles, defeat enemy minions, and survive as long as you can.
 
---
 
## Features
 
- **Class-based combat system** — Switch between melee (sword) and ranged (staff) weapons, each with unique attack animations, ranges, and playstyles
- **AI-driven enemies** — Enemy minions use Behaviour Trees and PawnSensing to detect, chase, and attack the player
- **Animation state machine** — Character animations driven by C++ enums for smooth transitions between idle, locomotion, attacking, hit reactions, and death states
- **Projectile system** — Ranged attacks fire projectiles with Niagara particle effects and accurate hit detection
- **Hit feedback** — Dynamic material flash system provides visual feedback when enemies take damage
- **Foot IK** — Control Rig-based foot IK ensures characters adapt naturally to uneven terrain
- **Roguelike progression** — Survive waves of enemies with increasing difficulty
---
 
## Controls
 
| Input | Action |
|-------|--------|
| Left Click | Move to location |
| Left Click (on enemy) | Attack enemy |
| E | Pick up weapon |
| Space / Shift | Dash |
| ESC | Pause |
 
---
 
## Download & Installation
 
### System Requirements
- OS: Windows 10/11 (64-bit)
- RAM: 8GB minimum, 16GB recommended
- GPU: NVIDIA GTX 1060 / AMD RX 580 or better
- Storage: ~2GB free space
- DirectX: Version 12
### How to Install
1. Download the latest release from the [Releases](../../releases) page or [itch.io](https://holeecow.itch.io/any-last-words)
2. Right-click the `.zip` file and select **Extract All**
3. Open the extracted folder
4. Double-click **AnyLastWords.exe** to launch
5. No installation required
> **Note:** If Windows shows a "Windows protected your PC" warning, click **More Info → Run Anyway**. This is normal for unsigned indie games.
 
---
 
## Built With
 
- **Engine** — Unreal Engine 5.7
- **Languages** — C++, Blueprints
- **Version Control** — Git / Git LFS
- **Animation** — Control Rig, Animation Blueprints, Mixamo
- **VFX** — Niagara Particle System
---
 
## Architecture
 
The project uses a hybrid C++/Blueprint architecture:
 
- **C++** — Base character classes, enums, animation instances, and core game logic
- **Blueprints** — Weapon behaviour, UI, enemy AI, and designer-facing values
- **Inheritance hierarchy** — `AAnyLastWordsCharacter` (player base) and `ABaseMinion` (enemy base) with child classes for each character type
---
 
## Team
 
| Name |
|------|
Teo Ze Xuan
Hans Delano
Wendy Tang
Amos Chee
Desean Soh
He Yiheng
 
---
