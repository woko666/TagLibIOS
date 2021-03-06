//
//  TagLibIOS.h"
//  TagLibIOS
//
//  Created by Matti Dahlbom on 11.1.20152.
//  Copyright (c) 2015 md. All rights reserved.
//

#include "taglib.h"
#include "taglib_export.h"
#include "taglib_config.h"
#include "fileref.h"
#include "tag.h"
#include "audioproperties.h"
#include "tfile.h"
#include "tfilestream.h"
#include "tbytevector.h"
#include "tbytevectorlist.h"
#include "tbytevectorstream.h"
#include "tiostream.h"
#include "tlist.h"
#include "tmap.h"
#include "tpropertymap.h"
#include "trefcounter.h"
#include "tstring.h"
#include "tstringlist.h"

#include "apefile.h"
#include "apefooter.h"
#include "apeitem.h"
#include "apeproperties.h"
#include "apetag.h"
#include "asfattribute.h"
#include "asffile.h"
#include "asfpicture.h"
#include "asfproperties.h"
#include "asftag.h"
#include "flacfile.h"
#include "flacmetadatablock.h"
#include "flacpicture.h"
#include "flacproperties.h"
#include "flacunknownmetadatablock.h"
#include "itfile.h"
#include "itproperties.h"
#include "modfile.h"
#include "modfilebase.h"
#include "modproperties.h"
#include "modtag.h"
#include "mp4atom.h"
#include "mp4coverart.h"
#include "mp4file.h"
#include "mp4item.h"
#include "mp4properties.h"
#include "mp4tag.h"
#include "mpcfile.h"
#include "mpcproperties.h"
#include "id3v1genres.h"
#include "id3v1tag.h"
#include "attachedpictureframe.h"
#include "commentsframe.h"
#include "generalencapsulatedobjectframe.h"
#include "ownershipframe.h"
#include "popularimeterframe.h"
#include "privateframe.h"
#include "relativevolumeframe.h"
#include "textidentificationframe.h"
#include "uniquefileidentifierframe.h"
#include "unknownframe.h"
#include "unsynchronizedlyricsframe.h"
#include "urllinkframe.h"
#include "id3v2extendedheader.h"
#include "id3v2footer.h"
#include "id3v2frame.h"
#include "id3v2framefactory.h"
#include "id3v2header.h"
#include "id3v2synchdata.h"
#include "id3v2tag.h"
#include "mpegfile.h"
#include "mpegheader.h"
#include "mpegproperties.h"
#include "xingheader.h"
#include "oggflacfile.h"
#include "oggfile.h"
#include "oggpage.h"
#include "oggpageheader.h"
#include "opusfile.h"
#include "opusproperties.h"
#include "speexfile.h"
#include "speexproperties.h"
#include "vorbisfile.h"
#include "vorbisproperties.h"
#include "xiphcomment.h"
#include "aifffile.h"
#include "aiffproperties.h"
#include "rifffile.h"
#include "infotag.h"
#include "wavfile.h"
#include "wavproperties.h"
#include "s3mfile.h"
#include "s3mproperties.h"
#include "trueaudiofile.h"
#include "trueaudioproperties.h"
#include "wavpackfile.h"
#include "wavpackproperties.h"
#include "xmfile.h"
#include "xmproperties.h"
