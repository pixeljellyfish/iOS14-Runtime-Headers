/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCOperationThrottler.h>

@protocol FCOperationThrottlerDelegate;
@class FCOperationThrottler, NSString;

@interface FCTimedOperationThrottler : NSObject <FCOperationThrottlerDelegate, FCOperationThrottler> {

	double _cooldownTime;
	FCOperationThrottler* _operationThrottler;
	id<FCOperationThrottlerDelegate> _delegate;

}

@property (nonatomic,retain) FCOperationThrottler * operationThrottler;                     //@synthesize operationThrottler=_operationThrottler - In the implementation block
@property (assign,nonatomic,__weak) id<FCOperationThrottlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double cooldownTime;                                                     //@synthesize cooldownTime=_cooldownTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL suspended; 
-(void)setCooldownTime:(double)arg1 ;
-(BOOL)suspended;
-(FCOperationThrottler *)operationThrottler;
-(void)tickle;
-(id)init;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<FCOperationThrottlerDelegate>)arg1 ;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(double)cooldownTime;
-(id<FCOperationThrottlerDelegate>)delegate;
-(void)setOperationThrottler:(FCOperationThrottler *)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
@end
