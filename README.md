# TNTs-Template
### Template for creating Rocket League mods (you need to build it in Release x64)
`DISCLAIMER: IF YOU USE THIS PROJECT FOR MALICIOUS PURPOSES THAT IS ON YOU :P THIS PROJECT HAS BEEN CREATED FOR SOLELY MODDING THE GAME.`
- This project contains code from ItsBranK's old CodeRedTemplate and has ImGui built in using KieroHook.
- This Project is based on Snayck's Template

- i dont know what this README sais tbh
- Pattern scanning is based of RocketDumpers pattern scanning - https://github.com/lchmagKekse/RocketDumper

The filters(folders) in your solution explorer may not be correct / you may have to check your additional includes in the project settings 

To find functions you can use, you can either scour over the sdk given or use the Rocket League function scanner tool with Bakkesmod. 

To make sure your sdk is up-to-date with the latest version, you can use Matix2's SDK Generator: https://github.com/matix2/RLSDK-Generator/

I have also generously included a "World to Screen" function in the drawing module.

To call in game functions you can use:
```cpp
Main.Execute([]() {  function  });
```

CodeRedTemplate documentation below:

(some entries might not apply because the template has been modified for Rocket League)

## CodeRed Template v1.3.9

For instance storage, game state tracker, and function hooks, they are all game-specific; so you will need to add on to it depending on what classes/functions your game uses. There are comments throughout the project explaining how everything works as well as some examples of certain features.

#### Requirements

- Moderate understanding of how Unreal Engine works (Globals, objects, actors, reflection system, etc).
- Moderate to advanced understanding of modern C++ (Memory and allocation specifically).
- Visual Studio or another Windows based compiler (For Windows header files, along with library linking).
- ISO C++20 Standard.

#### Libraries

The following third party libraries are used for compiling, they are included in this project but can be found below.

- Microsoft Detours https://github.com/microsoft/Detours/

## Features

Included are the following features, each have their own examples in their own files retrospectively; along with comments on how to use them and how they work.

- Multicolored debug console, along with writing to a text file for offline logging/analyzing.
- Automatic initialization of globals, along with detouring of the Process Event function.
- Pre and post function hooking, bind your own functions that fire when an Unreal Engine function fires.
- Instance storage, static and dynamically store needed classes that can be grabbed at any time.
- Command, setting, and mod manager. Bind strings to activate mods or change certain settings dynamically (For separate UI/Console interaction like ImGui).
- GameState, track where the player is/what type of game they are in at all times.

## License

read the license

## Screenshots

![](https://i.imgur.com/ofnaNVV.png)
