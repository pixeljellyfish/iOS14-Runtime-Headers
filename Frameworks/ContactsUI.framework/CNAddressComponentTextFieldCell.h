/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/NUITableViewContainerCell.h>

@class UITextField, UIImageView, NSArray, NSDictionary;

@interface CNAddressComponentTextFieldCell : NUITableViewContainerCell {

	BOOL _showsChevron;
	UITextField* _textField;
	UIImageView* _chevron;

}

@property (nonatomic,retain) UITextField * textField;                  //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                    //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,readonly) NSArray * textFields; 
@property (assign,nonatomic) BOOL showsChevron;                        //@synthesize showsChevron=_showsChevron - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes; 
+(id)cellIdentifier;
+(Class)containerViewClass;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(NSDictionary *)textAttributes;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)chevron;
-(void)prepareForReuse;
-(void)setTextField:(UITextField *)arg1 ;
-(void)setupTextFields;
-(id)newTextField;
-(void)updateMargins;
-(void)setShowsChevron:(BOOL)arg1 ;
-(BOOL)showsChevron;
-(void)setChevron:(UIImageView *)arg1 ;
-(NSArray *)textFields;
-(UITextField *)textField;
@end
