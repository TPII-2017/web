#!/bin/bash

# Genero el ejecutable que hace la union de las dependencias
g++ merge.cpp -o merge

path="outputs"
assets_path="assets"

dep_file=("css/bootstrap.min.css" "css/my-styles.css" "js/accordion.js" "js/navbar.js")
for dep in ${dep_file[*]}
do	
	# Si no existe las carpetas las creo
	mkdir -p -- "${path}/css" && mkdir -p -- "${path}/js"
	# Creo el archivo si no existe
	touch "${path}/${dep}"
	# Elimino los espacios, tabulaciones y saltos de linea
	cat "${assets_path}/${dep}" > "${path}/${dep}"
done

files=("config.html" "authentication.html" "admin.html")
for item in ${files[*]}
do
	# Agrego las dependencias
	./merge $path $item $assets_path
	# Los comprimo
	gzip -f "${path}/${item}"
	# Los mando a el wemos
	mv -f "${path}/${item}.gz" "../wemos/data/${item}.gz"
done
rm -rf ${path}
