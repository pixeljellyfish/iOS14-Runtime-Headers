/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADSerialWorkQueue : NSObject
+(void)initialize;
+(void)addOperation:(/*^block*/id)arg1 ;
+(void)releaseCancellableOperation:(unsigned long long)arg1 ;
+(unsigned long long)addCancellableDelayedOperation:(double)arg1 block:(/*^block*/id)arg2 ;
+(void)addDelayedOperation:(double)arg1 block:(/*^block*/id)arg2 ;
+(id)primaryQueue;
+(void)cancelDelayedOperation:(unsigned long long)arg1 ;
@end

