/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPrivateDataSyncAvailability.h>

@protocol FCPrivateDataSyncAvailability
@property (getter=isPrivateDataSyncingAllowed,nonatomic,readonly) BOOL privateDataSyncingAllowed; 
@required
-(BOOL)isPrivateDataSyncingAllowed;

@end


@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability> {

	NSArray* _conditions;

}

@property (nonatomic,copy,readonly) NSArray * conditions;                                                      //@synthesize conditions=_conditions - In the implementation block
@property (getter=isPrivateDataSyncingAllowed,nonatomic,readonly) BOOL privateDataSyncingAllowed; 
+(id)notAvailable;
+(id)defaultAvailability;
-(BOOL)isPrivateDataSyncingAllowed;
-(NSArray *)conditions;
-(id)initWithConditions:(id)arg1 ;
@end
