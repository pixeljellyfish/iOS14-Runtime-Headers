/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIIPadProductPageDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol SKUIProductPageOverlayDelegate;
@class SKUIClientContext, SKUIItem, SKUIOverlayContainerViewController, UIViewController, NSArray, UIView, NSString;

@interface SKUIProductPageOverlayController : NSObject <SKUIIPadProductPageDelegate, SKStoreProductViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	id<SKUIProductPageOverlayDelegate> _delegate;
	SKUIItem* _initialItem;
	SKUIOverlayContainerViewController* _overlayViewController;
	UIViewController* _parentViewController;

}

@property (nonatomic,__weak,readonly) UIViewController * parentViewController;                //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageOverlayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfVisibleOverlays; 
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)URLs;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(void)setDelegate:(id<SKUIProductPageOverlayDelegate>)arg1 ;
-(UIViewController *)parentViewController;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id<SKUIProductPageOverlayDelegate>)delegate;
-(void)dismiss;
-(SKUIClientContext *)clientContext;
-(void)iPadProductPage:(id)arg1 openItem:(id)arg2 ;
-(void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(/*^block*/id)arg3 ;
-(void)iPadProductPageCannotOpen:(id)arg1 ;
-(id)initWithParentViewController:(id)arg1 ;
-(void)showWithInitialProductPage:(id)arg1 metricsPageEvent:(id)arg2 ;
-(void)showWithInitialURLs:(id)arg1 ;
-(void)showWithInitialItem:(id)arg1 ;
-(long long)numberOfVisibleOverlays;
-(void)_removeOverlayViewController;
-(void)_showWithInitialViewController:(id)arg1 ;
-(void)_showOverlayViewController;
-(void)_finishDismissAndNotifyDelegate:(BOOL)arg1 withViewController:(id)arg2 ;
-(void)_backstopViewAction:(id)arg1 ;
-(void)showWithInitialItemIdentifier:(long long)arg1 ;
-(void)showWithInitialURL:(id)arg1 ;
-(void)showWithInitialURLRequest:(id)arg1 ;
@end

