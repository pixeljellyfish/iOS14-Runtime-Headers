/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@protocol MFPopupButtonDelegate;
@class UILabel, MFPopupButtonItem, NSArray, UIFont, NSString;

@interface MFPopupButton : UIControl <UIContextMenuInteractionDelegate> {

	UILabel* _label;
	id<MFPopupButtonDelegate> _delegate;
	MFPopupButtonItem* _selectedItem;
	NSArray* _items;

}

@property (nonatomic,readonly) UILabel * label;                                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) id<MFPopupButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MFPopupButtonItem * selectedItem;                         //@synthesize selectedItem=_selectedItem - In the implementation block
@property (nonatomic,copy) NSArray * items;                                          //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,readonly) BOOL canPresentMenu; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)items;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)sizeToFit;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIFont *)font;
-(void)setItems:(NSArray *)arg1 ;
-(CGPoint)menuAttachmentPointForConfiguration:(id)arg1 ;
-(void)_updateUI;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(MFPopupButtonItem *)selectedItem;
-(void)setDelegate:(id<MFPopupButtonDelegate>)arg1 ;
-(id<MFPopupButtonDelegate>)delegate;
-(UILabel *)label;
-(void)dismissMenu;
-(void)setFont:(UIFont *)arg1 ;
-(void)setSelectedItem:(MFPopupButtonItem *)arg1 ;
-(void)_didSelectItem:(id)arg1 ;
-(id)_actionForItem:(id)arg1 ;
-(BOOL)canPresentMenu;
@end
