/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSObject;

@interface IMMessagesToTrack : NSObject {

	NSMutableOrderedSet* _recentMessageIDs;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSMutableOrderedSet * recentMessageIDs;                    //@synthesize recentMessageIDs=_recentMessageIDs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumberOfMessages; 
@property (nonatomic,readonly) unsigned long long currentNumberOfMessages; 
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)addMessagesID:(id)arg1 ;
-(unsigned long long)maxNumberOfMessages;
-(NSMutableOrderedSet *)recentMessageIDs;
-(void)containsMessageID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)currentNumberOfMessages;
-(void)setRecentMessageIDs:(NSMutableOrderedSet *)arg1 ;
@end
