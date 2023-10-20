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
* Cub3D is a technical school project developed by students at School 42 in Paris. This project delves into ray-casting and 3D graphics, leveraging the miniLibX library. It's a hands-on experience designed for academic purposes, aiming to strengthen coding skills and explore practical math applications.

## ⚙️ Linux MiniLibX installation
```shell
# Update/upgrade your system
apt-get update && apt-get upgrade

# Install the following packages
apt install libx11-dev
apt install libxext-dev
apt install libbsd-dev
apt install clang

# For more details / Windows users
https://github.com/ilkou/minilibx
```

## ⚙️ Usage
This project is using the ``Minilibx`` using the Metal framework and therefore should work only on macOS 10.13+.<br>
You should follow [this guide](https://github.com/ilkou/minilibx) if you want to compile it on Linux or Windows.

```shell
# Within Project dir; Compile
make

# Execute the binary with a .rt file
./cub3D [scene_path]
```

## 🎬 Screenshots
coming..
