/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController {

	SUNavigationMenu* _navigationMenu;

}

@property (nonatomic,readonly) SUNavigationMenu * navigationMenu;              //@synthesize navigationMenu=_navigationMenu - In the implementation block
-(void)dealloc;
-(id)init;
-(long long)numberOfMenuItems;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_cancelAction:(id)arg1 ;
-(SUNavigationMenu *)navigationMenu;
-(id)initWithNavigationMenu:(id)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(void)_protocolButtonAction:(id)arg1 ;
@end

