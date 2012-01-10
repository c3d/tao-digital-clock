# ******************************************************************************
#  digital_clock.pro                                                Tao project
# ******************************************************************************
# File Description:
# Qt build file for the DigitalClock module
#
# A digital clock with 7-segment digits
#
# ******************************************************************************
# This software is property of Taodyne SAS - Confidential
# Ce logiciel est la propriété de Taodyne SAS - Confidentiel
# (C) 2010 Jerome Forissier <jerome@taodyne.com>
# (C) 2010 Taodyne SAS
# ******************************************************************************

MODINSTDIR = digital_clock

include(../modules.pri)

OTHER_FILES = digital_clock.xl

INSTALLS    += thismod_icon
INSTALLS    -= thismod_bin

QMAKE_SUBSTITUTES = doc/Doxyfile.in
DOXYFILE = doc/Doxyfile
DOXYLANG = en,fr
include(../modules_doc.pri)
