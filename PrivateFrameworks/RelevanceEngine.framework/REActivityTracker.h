/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol REActivityTrackerDelegate;
#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSCountedSet, NSMapTable, NSSet;

@interface REActivityTracker : NSObject {

	SCD_Struct_RE29 delegateCallbacks;
	NSCountedSet* _activities;
	NSMapTable* _activitiesByObject;
	id<REActivityTrackerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<REActivityTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * outstandingActivities; 
-(id)initWithDelegate:(id)arg1 ;
-(id<REActivityTrackerDelegate>)delegate;
-(void)beginActivity:(id)arg1 forObject:(id)arg2 ;
-(void)endActivity:(id)arg1 forObject:(id)arg2 ;
-(void)trackObject:(id)arg1 ;
-(void)withdrawObject:(id)arg1 ;
-(NSSet *)outstandingActivities;
-(id)outstandingActivitiesForObject:(id)arg1 ;
-(BOOL)trackingObject:(id)arg1 ;
@end
