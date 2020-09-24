/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUDashboardNavigationButtonDelegate.h>

@class HUNavigationButtonLayoutOptions, HUWallpaperView, HUDashboardNavigationButton, UIButton, UIControl, HFWallpaperSlice, NSString;

@interface HUDashboardLargeTitleButton : UIView <HUDashboardNavigationButtonDelegate> {

	HUNavigationButtonLayoutOptions* _layoutOptions;
	HUWallpaperView* _containingWallpaperView;
	HUDashboardNavigationButton* _navigationButton;
	UIButton* _imageButton;

}

@property (nonatomic,readonly) HUDashboardNavigationButton * navigationButton;              //@synthesize navigationButton=_navigationButton - In the implementation block
@property (nonatomic,readonly) UIButton * imageButton;                                      //@synthesize imageButton=_imageButton - In the implementation block
@property (nonatomic,readonly) UIControl * button; 
@property (nonatomic,copy) HUNavigationButtonLayoutOptions * layoutOptions;                 //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice; 
@property (assign,nonatomic,__weak) HUWallpaperView * containingWallpaperView;              //@synthesize containingWallpaperView=_containingWallpaperView - In the implementation block
@property (nonatomic,copy) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(HUNavigationButtonLayoutOptions *)layoutOptions;
-(NSString *)identifier;
-(id)initWithImage:(id)arg1 ;
-(UIButton *)imageButton;
-(void)updateConstraints;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIControl *)button;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLayoutOptions:(HUNavigationButtonLayoutOptions *)arg1 ;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setContainingWallpaperView:(HUWallpaperView *)arg1 ;
-(void)wallpaperContentsFrameDidChange;
-(CGRect)normalizedWallpaperRectForDashboardNavigationButton:(id)arg1 ;
-(HUDashboardNavigationButton *)navigationButton;
-(HUWallpaperView *)containingWallpaperView;
@end
