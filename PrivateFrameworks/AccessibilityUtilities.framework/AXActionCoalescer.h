/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AXActionCoalescer : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _consistencyQueue;
	BOOL _coalescing;

}
+(id)mainQueueCoalescerWithBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)performCoalescedAsynchronously;
@end
