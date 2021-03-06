/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBIconAccessoryView.h>

@protocol SBIconListLayout;
@class SBFParallaxSettings, NSString, UIImageView, SBHIconAccessoryCountedMapImageTuple, SBDarkeningImageView;

@interface SBIconBadgeView : UIView <PTSettingsKeyObserver, SBIconAccessoryView> {

	NSString* _text;
	UIImageView* _incomingTextView;
	BOOL _displayingAccessory;
	SBHIconAccessoryCountedMapImageTuple* _backgroundImageTuple;
	SBHIconAccessoryCountedMapImageTuple* _textImageTuple;
	SBDarkeningImageView* _backgroundView;
	UIImageView* _textView;
	SBFParallaxSettings* _parallaxSettings;
	id<SBIconListLayout> _listLayout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SBFParallaxSettings * parallaxSettings;              //@synthesize parallaxSettings=_parallaxSettings - In the implementation block
@property (nonatomic,retain) id<SBIconListLayout> listLayout;                     //@synthesize listLayout=_listLayout - In the implementation block
+(double)_textPadding;
+(id)_checkoutImageForText:(id)arg1 font:(id)arg2 highlighted:(BOOL)arg3 ;
+(id)_createImageForText:(id)arg1 font:(id)arg2 highlighted:(BOOL)arg3 ;
+(id)backgroundImageCache;
-(void)_applyParallaxSettings;
-(void)_crossfadeToTextImage:(id)arg1 animator:(id)arg2 ;
-(void)setListLayout:(id<SBIconListLayout>)arg1 ;
-(CGPoint)accessoryCenterForIconBounds:(CGRect)arg1 ;
-(void)_layOutTextImageView:(id)arg1 ;
-(id<SBIconListLayout>)listLayout;
-(CGSize)intrinsicContentSize;
-(SBFParallaxSettings *)parallaxSettings;
-(CGSize)intrinsicContentSizeForTextImage:(id)arg1 ;
-(void)prepareForReuse;
-(void)_resizeForTextImage:(id)arg1 ;
-(void)dealloc;
-(CGSize)badgeSize;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_zoomInWithTextImage:(id)arg1 animator:(id)arg2 ;
-(void)layoutSubviews;
-(void)_zoomOutWithAnimator:(id)arg1 ;
-(id)font;
-(void)_configureAnimatedForText:(id)arg1 highlighted:(BOOL)arg2 animator:(id)arg3 ;
-(id)init;
-(void)setParallaxSettings:(SBFParallaxSettings *)arg1 ;
-(BOOL)displayingAccessory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3 ;
-(CGPoint)layoutOffset;
-(void)setAccessoryBrightness:(double)arg1 ;
-(double)badgeContentScale;
-(void)_clearText;
-(id)_checkoutBackgroundImageTuple;
-(void)configureForIcon:(id)arg1 infoProvider:(id)arg2 ;
@end

