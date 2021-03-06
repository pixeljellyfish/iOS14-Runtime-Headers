/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPMultiverseIdentifier, MIPMediaItem;

@interface ML3ClientImportItem : NSObject <NSSecureCoding, NSCopying> {

	MIPMultiverseIdentifier* _multiverseIdentifier;
	MIPMediaItem* _mediaItem;

}

@property (nonatomic,copy,readonly) MIPMediaItem * mediaItem;                                    //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy,readonly) MIPMultiverseIdentifier * multiverseIdentifier;              //@synthesize multiverseIdentifier=_multiverseIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MIPMultiverseIdentifier *)multiverseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MIPMediaItem *)mediaItem;
-(id)initWithMultiverseIdentifier:(id)arg1 mediaItem:(id)arg2 ;
@end

