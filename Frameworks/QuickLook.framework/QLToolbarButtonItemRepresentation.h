/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIBarButtonItem.h>

@class NSString, QLPreviewController, QLToolbarButton, UILongPressGestureRecognizer;

@interface QLToolbarButtonItemRepresentation : UIBarButtonItem {

	BOOL _disappearsOnTap;
	NSString* _identifier;
	unsigned long long _placement;
	QLPreviewController* _presentingViewController;
	QLToolbarButton* _originalButton;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (retain) NSString * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long placement;                                                     //@synthesize placement=_placement - In the implementation block
@property (assign) BOOL disappearsOnTap;                                                             //@synthesize disappearsOnTap=_disappearsOnTap - In the implementation block
@property (__weak) QLToolbarButton * originalButton;                                                 //@synthesize originalButton=_originalButton - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (__weak) QLPreviewController * presentingViewController;                                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(NSString *)identifier;
-(void)setPresentingViewController:(QLPreviewController *)arg1 ;
-(void)setPlacement:(unsigned long long)arg1 ;
-(BOOL)disappearsOnTap;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)placement;
-(QLPreviewController *)presentingViewController;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(QLToolbarButton *)originalButton;
-(void)setLongPressTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setOriginalButton:(QLToolbarButton *)arg1 ;
-(void)setDisappearsOnTap:(BOOL)arg1 ;
@end

