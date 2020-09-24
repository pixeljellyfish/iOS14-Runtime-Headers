/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol CoreDAVSubmittable <NSObject>
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager; 
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) double timeoutInterval; 
@required
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(id)completionBlock;
-(void)setTaskManager:(id)arg1;
-(void)finishEarlyWithError:(id)arg1;
-(NSError *)error;
-(void)setAccountInfoProvider:(id)arg1;
-(double)timeoutInterval;
-(id<CoreDAVTaskManager>)taskManager;
-(void)setTimeoutInterval:(double)arg1;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(void)submitWithTaskManager:(id)arg1;

@end
