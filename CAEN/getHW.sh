#!/bin/sh

# Turn on debugging as statements execute
set -x

# copies files from sourcedir to destdir recursively. Flags should
# normally be -i or -f for interactive or forced copy.
copyfiles() {
    set +x
    sourcedir=$1;
    destdir=$2;
    flags=$3;
    cd ${sourcedir}
    for hwfolder in *
    do
	if [ ! -d "${destdir}/$hwfolder" ]; then
	    #echo "Making directory ${destdir}/${hwfolder}" 
            mkdir -p ${destdir}/"${hwfolder}"
	fi
	#echo "Copying homework files to ${HomeworksFolder}/${howfolder}"
	cp ${flags} -r "${sourcedir}/${hwfolder}"/* ${destdir}/"${hwfolder}"/
    done
    set -x
}

set +x
BASEDIR=~/Private/eecs182
set -x
mkdir -p ${BASEDIR}
cd ${BASEDIR}
set +x
if [ ! -d "System" ]; then
	set -x
	echo "creating eecs182 software folder"
	git clone https://github.com/aprakashumich/EECS-182-System-folder.git System
	set +x
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
echo "Creating ${HWFOLDER} if necessary"
mkdir -p ${HWFOLDER}
ORIGHWFOLDER=${BASEDIR}/Homeworks_OriginalVersion
echo "Creating ${ORIGHWFOLDER} if necessary"
echo "mkdir -p ${ORIGHWFOLDER}"
mkdir -p ${ORIGHWFOLDER}

echo "copying files from ${HWDIR} to ${HWFOLDER}"
copyfiles ${HWDIR} ${HWFOLDER} \-i
echo "copying files from ${HWDIR} to ${ORIGHWFOLDER}"
copyfiles ${HWDIR} ${ORIGHWFOLDER} \-f
set +x
