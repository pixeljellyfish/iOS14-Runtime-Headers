/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SignpostCAProcessStallAggregation, NSDictionary;

@interface SignpostCAStallAggregation : NSObject <NSCopying> {

	SignpostCAProcessStallAggregation* _systemAggregation;
	NSDictionary* _executablePathToStallAggregation;

}

@property (nonatomic,readonly) SignpostCAProcessStallAggregation * systemAggregation;              //@synthesize systemAggregation=_systemAggregation - In the implementation block
@property (nonatomic,readonly) NSDictionary * executablePathToStallAggregation;                    //@synthesize executablePathToStallAggregation=_executablePathToStallAggregation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)description;
-(SignpostCAProcessStallAggregation *)systemAggregation;
-(NSDictionary *)executablePathToStallAggregation;
-(void)_addSystemDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 ;
-(void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 procExecutablePath:(id)arg3 responsiblePID:(int)arg4 aggregateForSystem:(BOOL)arg5 ;
@end

