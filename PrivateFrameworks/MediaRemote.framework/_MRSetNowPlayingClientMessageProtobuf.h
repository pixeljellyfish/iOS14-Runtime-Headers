/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRNowPlayingClientProtobuf;

@interface _MRSetNowPlayingClientMessageProtobuf : PBCodable <NSCopying> {

	_MRNowPlayingClientProtobuf* _client;

}

@property (nonatomic,readonly) BOOL hasClient; 
@property (nonatomic,retain) _MRNowPlayingClientProtobuf * client;              //@synthesize client=_client - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClient:(_MRNowPlayingClientProtobuf *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_MRNowPlayingClientProtobuf *)client;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasClient;
@end
