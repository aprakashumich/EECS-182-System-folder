#!/bin/sh


# copies files from sourcedir to destdir recursively. Flags should
# normally be -i or -f for interactive or forced copy.
copyfiles() {
    sourcedir=$1;
    echo "sourcedir=${sourcedir}"
    destdir=$2;
    echo "destdir=${destdir}"
    flags=$3;
    echo "flags=${flags}"
    cd ${sourcedir}
    for hwfolder in *
    do
	if [ ! -d "${destdir}/$hwfolder" ]; then
            echo making directory "${destdir}/$hwfolder"
            mkdir -p ${destdir}/"$hwfolder"
	fi
	echo "Copying homework files to ${HomeworksFolder}/${howfolder}"
	echo "flags = ${flags}"
	echo "dollar3 = $flags"
	echo "cp ${flags} -r ${sourcedir}/${hwfolder}/* ${destdir}/${hwfolder}/"
	cp ${flags} -r "${sourcedir}/${hwfolder}"/* ${destdir}/"${hwfolder}"/
    done
}

BASEDIR=~/Private/eecs182
mkdir -p ${BASEDIR}
cd ${BASEDIR}
if [ ! -d "System" ]; then
	echo "creating eecs182 software folder"
	git clone https://github.com/aprakashumich/EECS-182-System-folder.git System
fi

if [ ! -d "System" ]; then
	echo "Could not clone EECS 182 repository. Contact the instructor"
	exit
fi

cd ${BASEDIR}/System
git pull origin master
# Change branch if necessary from master to another instructor's. master is "aprakash"'s branch.
git checkout master
# The above should results in a Homeworks folder under System.
HWDIR=${BASEDIR}/System/Homeworks


# Make a Homeworks folder if necessary under BASEDIR for the students.
HWFOLDER=${BASEDIR}/Homeworks
echo "mkdir -p ${HWFOLDER}"
mkdir -p ${HWFOLDER}
ORIGHWFOLDER=${BASEDIR}/Homeworks_OriginalVersion
echo "mkdir -p ${ORIGHWFOLDER}"
mkdir -p ${ORIGHWFOLDER}

echo "copyfiles ${HWDIR} ${HWFOLDER} \-i"
copyfiles ${HWDIR} ${HWFOLDER} \-i
echo "copyfiles ${HWDIR} ${ORIGHWFOLDER} \-f"
copyfiles ${HWDIR} ${ORIGHWFOLDER} \-f
#ln -s ${HWFOLDER} ~/Homeworks
