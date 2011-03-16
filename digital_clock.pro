# ******************************************************************************
#  digital_clock.pro                                                Tao project
# ******************************************************************************
# File Description:
# Qt build file for the DigitalClock module
#
# A digital clock with 7-segment digits
#
# ******************************************************************************
# This document is released under the GNU General Public License.
# See http://www.gnu.org/copyleft/gpl.html and Matthew 25:22 for details
# (C) 2010 Jerome Forissier <jerome@taodyne.com>
# (C) 2010 Taodyne SAS
# ******************************************************************************

MODINSTDIR = digital_clock

include(../modules.pri)

OTHER_FILES = module.xl module.doxy.h

INSTALLS    += thismod_icon
INSTALLS    -= thismod_bin
