/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMTimingCollection : NSObject {

	NSMutableDictionary* _timings;
	os_unfair_lock_s _lock;

}
+(id)globalTimingCollectionForKey:(id)arg1 ;
+(void)logTimingCollectionForKey:(id)arg1 ;
+(void)invalidateGlobalTimingCollectionForKey:(id)arg1 ;
+(id)activeGlobalTimingCollections;
+(void)invalidateGlobalTimingCollections;
+(id)IMCoreSetupTimingCollection;
+(void)IMCoreSetupTimingCollectionEnd;
-(void)startTimingForKey:(id)arg1 ;
-(double)totalTimeForKey:(id)arg1 ;
-(id)init;
-(void)removeTimingForKey:(id)arg1 ;
-(void)stopTimingForKey:(id)arg1 ;
-(id)description;
-(BOOL)hasKey:(id)arg1 ;
@end
