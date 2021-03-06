/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibraryBundleController;

@interface PLDistributedNotificationHandler : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	PLPhotoLibraryBundleController* _libraryBundleController;

}
-(void)_openSystemPhotoLibrary;
-(id)initWithLibraryBundleController:(id)arg1 ;
-(void)_handleNotification:(id)arg1 ;
-(void)_handleCloudPhotoNotification;
-(void)registerForNotifications;
@end

