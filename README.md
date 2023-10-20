<h1 align="center">
	🚀 Cube3D
</h1>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/JBVer/Cube3D?color=lightblue" />
	<img alt="Number of lines of code" src="https://tokei.rs/b1/github/JBVer/Cube3D?category=code" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/JBVer/Cube3D?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/JBVer/Cube3D?color=green" />
</p>

## 💡 About the project
* Cub3D is a school project developed by 2 students. Inspired by the groundbreaking game Wolfenstein 3D, it delves into ray-casting and 3D graphics using the MiniLibX library. The project is written in C.

## MiniLibX installation
This project utilizes the MiniLibX library through the Metal framework (macOS 10.13+)

Linux users must:
```shell
# Update/upgrade your system
apt-get update && apt-get upgrade

# Install the following packages
apt install libx11-dev
apt install libxext-dev
apt install libbsd-dev
apt install clang
```

Windows users can follow [this guide.](https://github.com/ilkou/minilibx)
(According to some student experiences, WSL users should consider using WSL2)

## Navigation
Within the inc/cub3D.h file, modify the layout mode by commenting/uncommenting (QWERTY by default)

![image](https://github.com/JBVer/Cube3D/assets/50697943/a4686eed-a39e-41b3-9c28-4fe0a9c4f6a0)

- Use the keys A, S, D, W to move around (ZQSD for qwerty layout).
- Use the **left** and **right** arrow keys for camera control.

## Usage
```shell
# Within Project dir; Compile
make

# Execute the binary with a .cub file
./cub3D /path/to/map.cub
./cub3D input/maps/map1.cub
./cub3D input/maps/map2.cub
```
(You can create maps, but it must comply with the subject restrictions)

## Screenshot
![image](https://github.com/JBVer/Cube3D/assets/50697943/97d61b53-ae75-4115-9ab0-8b1b4e30e660)


