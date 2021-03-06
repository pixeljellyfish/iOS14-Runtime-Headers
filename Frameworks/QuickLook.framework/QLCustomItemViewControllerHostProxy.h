/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/QLCustomItemViewControllerHost.h>

@protocol QLCustomItemViewControllerHost;
@class NSString;

@interface QLCustomItemViewControllerHostProxy : NSObject <QLCustomItemViewControllerHost> {

	id<QLCustomItemViewControllerHost> _delegate;

}

@property (assign,nonatomic,__weak) id<QLCustomItemViewControllerHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissQuickLook;
-(void)setDelegate:(id<QLCustomItemViewControllerHost>)arg1 ;
-(void)presentShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(/*^block*/id)arg3 ;
-(void)forwardMessageToHostOfCustomViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<QLCustomItemViewControllerHost>)delegate;
-(void)setFullScreen:(BOOL)arg1 ;
@end

