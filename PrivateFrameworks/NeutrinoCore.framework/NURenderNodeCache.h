/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface NURenderNodeCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _cache;

}
+(id)sharedInstance;
-(id)debugDescription;
-(void)_addNode:(id)arg1 ;
-(id)init;
-(void)addNode:(id)arg1 ;
-(id)description;
-(id)cachedNodeForNode:(id)arg1 ;
-(id)retrieveAndCacheNode:(id)arg1 ;
@end
