/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSMutableArray, NSArray, MRPlayerPath;

@interface MRTransactionMessage : MRProtocolMessage {

	NSMutableArray* _packets;

}

@property (nonatomic,readonly) unsigned long long name; 
@property (nonatomic,readonly) NSArray * packets; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(NSArray *)packets;
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
-(id)initWithName:(unsigned long long)arg1 packets:(id)arg2 playerPath:(id)arg3 ;
-(id)initWithPlaybackQueue:(id)arg1 forPlayerPath:(id)arg2 ;
-(unsigned long long)name;
@end

