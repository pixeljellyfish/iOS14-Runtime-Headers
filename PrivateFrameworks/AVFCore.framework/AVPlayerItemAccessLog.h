/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLogInternal, NSArray;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {

	AVPlayerItemAccessLogInternal* _playerItemAccessLog;

}

@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(NSArray *)events;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)_common_init;
-(id)_accessLogArray;
-(id)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(id)init;
-(id)description;
-(id)initWithLogArray:(id)arg1 ;
@end
