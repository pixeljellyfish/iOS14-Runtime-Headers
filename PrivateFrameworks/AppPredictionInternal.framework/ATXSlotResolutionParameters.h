/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXAction, ATXSlotSet, NSArray;

@interface ATXSlotResolutionParameters : NSObject <NSCopying> {

	ATXAction* _action;
	ATXSlotSet* _slots;
	NSArray* _values;
	unsigned long long _hash;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAction:(id)arg1 slots:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
