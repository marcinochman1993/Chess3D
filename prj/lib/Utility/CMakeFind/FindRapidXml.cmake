find_path(RAPIDXML_DIR rapidxml.h*
PATH_SUFFIXES include
PATHS
${RapidXML_ROOT}
$ENV{RapidXML_ROOT}
~/Library/Frameworks
/Library/Frameworks
/usr/local/
/usr/
/sw # Fink
/opt/local/ # DarwinPorts
/opt/csw/ # Blastwave
/opt/)
if (NOT RAPIDXML_DIR)
if(RapidXML_FIND_REQUIRED) #prefix is filename, case matters
message(FATAL_ERROR "Could not find RapidXML!")
elseif(NOT RapidXML_FIND_QUIETLY)
message("Could not find RapidXML!")
endif(RapidXML_FIND_REQUIRED)
endif(NOT RAPIDXML_DIR)
if (NOT RapidXML_FIND_QUIETLY)
message("Found RapidXML: ${RAPIDXML_DIR}")
endif (NOT RapidXML_FIND_QUIETLY)
