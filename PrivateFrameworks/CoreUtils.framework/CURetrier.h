/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface CURetrier : NSObject {

	BOOL _invalidateCalled;
	NSObject*<OS_dispatch_source> _retryTimer;
	/*^block*/id _actionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _interval;
	double _leeway;
	/*^block*/id _invalidationHandler;
	double _startTime;

}

@property (nonatomic,copy) id actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double leeway;                                           //@synthesize leeway=_leeway - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double startTime;                                        //@synthesize startTime=_startTime - In the implementation block
-(void)succeededDirect;
-(double)leeway;
-(id)invalidationHandler;
-(void)invalidate;
-(void)succeeded;
-(double)interval;
-(id)actionHandler;
-(double)startTime;
-(void)failedDirect;
-(void)setStartTime:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)start;
-(void)failed;
-(void)invalidateDirect;
-(id)init;
-(void)setActionHandler:(id)arg1 ;
-(void)startDirect;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setLeeway:(double)arg1 ;
-(void)setInterval:(double)arg1 ;
@end

