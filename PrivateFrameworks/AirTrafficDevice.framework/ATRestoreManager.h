/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ATSessionObserver.h>
#import <libobjc.A.dylib/ATRestoreAssetLinkDelegate.h>

@protocol OS_dispatch_queue;
@class ATRestoreAssetLink, NSObject, MSVXPCTransaction, ATDeviceSettings, ATSession, NSString;

@interface ATRestoreManager : NSObject <ATEnvironmentMonitorObserver, ATSessionObserver, ATRestoreAssetLinkDelegate> {

	ATRestoreAssetLink* _restoreLink;
	ATRestoreAssetLink* _applicationDataRestoreLink;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _checkRestoreStatusQueue;
	BOOL _cancelled;
	BOOL _iTunesRestoreActive;
	BOOL _iCloudRestoreActive;
	BOOL _deviceRestoreActive;
	MSVXPCTransaction* _xpcTransaction;
	ATDeviceSettings* _settings;
	ATSession* _restoreSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)_start;
-(void)restoreAssetLinkDidCancelRestore:(id)arg1 ;
-(void)setRestoreInProgress:(BOOL)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
-(BOOL)_iCloudPhotoLibraryEnabled;
-(id)_dataClasses;
-(id)init;
-(void)_checkActiveRestoreStateWithCompletion:(/*^block*/id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)resume;
-(void)restoreSessionActiveWithCompletion:(/*^block*/id)arg1 ;
@end

