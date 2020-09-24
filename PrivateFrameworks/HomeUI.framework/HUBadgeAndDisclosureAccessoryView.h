/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, UILabel;

@interface HUBadgeAndDisclosureAccessoryView : UIView {

	long long _badgeCount;
	UIView* _badgeContainerView;
	UIImageView* _badgeImageView;
	UILabel* _badgeLabel;
	UIImageView* _disclosureImageView;

}

@property (nonatomic,retain) UIView * badgeContainerView;                    //@synthesize badgeContainerView=_badgeContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * badgeImageView;                   //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (nonatomic,retain) UILabel * badgeLabel;                           //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * disclosureImageView;              //@synthesize disclosureImageView=_disclosureImageView - In the implementation block
@property (assign,nonatomic) long long badgeCount;                           //@synthesize badgeCount=_badgeCount - In the implementation block
+(id)_disclosureImage;
-(UIView *)badgeContainerView;
-(UILabel *)badgeLabel;
-(void)setBadgeCount:(long long)arg1 ;
-(void)setBadgeLabel:(UILabel *)arg1 ;
-(UIImageView *)disclosureImageView;
-(void)setDisclosureImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)badgeCount;
-(void)setBadgeContainerView:(UIView *)arg1 ;
-(UIImageView *)badgeImageView;
-(void)setBadgeImageView:(UIImageView *)arg1 ;
@end
