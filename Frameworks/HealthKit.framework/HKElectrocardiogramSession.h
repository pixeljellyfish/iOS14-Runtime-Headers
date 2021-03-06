/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKElectrocardiogramSessionClientInterface.h>

@protocol HKElectrocardiogramSessionDelegate;
@class HKHealthStore, HKTaskServerProxyProvider, HKElectrocardiogramSessionConfiguration, NSString;

@interface HKElectrocardiogramSession : NSObject <_HKXPCExportable, HKElectrocardiogramSessionClientInterface> {

	HKHealthStore* _healthStore;
	HKTaskServerProxyProvider* _proxyProvider;
	HKElectrocardiogramSessionConfiguration* _sessionConfiguration;
	id<HKElectrocardiogramSessionDelegate> _delegate;

}

@property (nonatomic,copy,readonly) HKElectrocardiogramSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<HKElectrocardiogramSessionDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(BOOL)isElectrocardiogramSessionAvailable;
+(id)clientInterface;
-(void)connectionInterrupted;
-(HKElectrocardiogramSessionConfiguration *)sessionConfiguration;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)init;
-(void)setDelegate:(id<HKElectrocardiogramSessionDelegate>)arg1 ;
-(id)remoteInterface;
-(void)abortWithCompletion:(/*^block*/id)arg1 ;
-(void)clientRemote_didEndWithReason:(long long)arg1 error:(id)arg2 ;
-(void)clientRemote_didDetectContactAtDate:(id)arg1 ;
-(void)clientRemote_didDetectEmergencyCallbackModeWithEndDate:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 configuration:(id)arg2 ;
-(id<HKElectrocardiogramSessionDelegate>)delegate;
-(/*^block*/id)_successCompletionBlockOnClientQueue:(/*^block*/id)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
@end

