/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelPlaylist;

@interface MPModelPlaylistEntriesShareEligibilityRequest : NSObject <NSCopying> {

	MPModelPlaylist* _playlist;

}

@property (nonatomic,readonly) MPModelPlaylist * playlist;              //@synthesize playlist=_playlist - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelPlaylist *)playlist;
-(id)initWithPlaylist:(id)arg1 ;
@end

