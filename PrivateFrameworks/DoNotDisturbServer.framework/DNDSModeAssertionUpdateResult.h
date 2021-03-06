/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface DNDSModeAssertionUpdateResult : NSObject <NSCopying> {

	NSArray* _assertions;
	NSArray* _invalidations;

}

@property (nonatomic,copy,readonly) NSArray * assertions;                 //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * invalidations;              //@synthesize invalidations=_invalidations - In the implementation block
+(id)emptyResult;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)invalidations;
-(id)initWithAssertions:(id)arg1 invalidations:(id)arg2 ;
-(NSArray *)assertions;
-(id)resultCombiningWithResult:(id)arg1 ;
@end

