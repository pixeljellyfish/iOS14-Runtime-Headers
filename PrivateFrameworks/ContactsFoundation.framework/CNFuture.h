/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFuture.h>

@protocol CNFuture <NSObject>
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@required
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(BOOL)cancel;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2;
-(BOOL)isFinished;
-(id)recover:(/*^block*/id)arg1;
-(id)result:(id*)arg1;
-(BOOL)isCancelled;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2;
-(id)flatMap:(/*^block*/id)arg1;

@end

#import <libobjc.A.dylib/CNPromise.h>

@protocol CNFutureImpl;
@class NSMutableArray, NSString;

@interface CNFuture : NSObject <CNFuture, CNPromise> {

	id<CNFutureImpl> _impl;
	NSMutableArray* _calculationDependencies;

}

@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)flatMap:(id)arg1 withBlock:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 schedulerProvider:(id)arg3 ;
+(id)join:(id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)sequence:(id)arg1 ;
+(id)future;
+(id)promiseFuture;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)chain:(id)arg1 ;
+(id)_joinOne:(id)arg1 ;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithResult:(id)arg1 ;
+(id)_joinZero;
+(id)_joinMany:(id)arg1 ;
+(void)finishPromise:(id)arg1 withFuture:(id)arg2 ;
+(id)futureWithBlock:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
+(id)recover:(id)arg1 withBlock:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg1 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)didCancel;
-(BOOL)finishWithResult:(id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)_flushCompletionBlocks;
-(BOOL)isFinished;
-(/*^block*/id)completionHandlerAdapter;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(id)initWithImpl:(id)arg1 ;
-(id)init;
-(id)result:(id*)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(BOOL)isCancelled;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)addCalculationDependency:(id)arg1 ;
-(id)recover:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(NSString *)description;
@end

