/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <TestFlightCore/TFFeedbackFormBaseCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, TFFeedbackEntryLongText, NSString;

@interface TFFeedbackFormLongTextCell : TFFeedbackFormBaseCell <UITextViewDelegate> {

	UITextView* _textView;
	TFFeedbackEntryLongText* _longTextEntry;

}

@property (nonatomic,readonly) UITextView * textView;                              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) TFFeedbackEntryLongText * longTextEntry;              //@synthesize longTextEntry=_longTextEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(CGSize)arg3 inTraitEnvironment:(id)arg4 ;
+(CGSize)_sizeToFitText:(id)arg1 fittingSize:(CGSize)arg2 inTraitEnvironment:(id)arg3 ;
+(id)_createTextViewFontForTraitCollection:(id)arg1 ;
+(UIEdgeInsets)_textViewInsetsInTraitEnvironment:(id)arg1 ;
+(double)_adjustedTextViewHeightForCandidateHeight:(double)arg1 font:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(UITextView *)textView;
-(unsigned long long)displayableDataType;
-(void)setDisplayedDataString:(id)arg1 ;
-(void)applyContentsOfEntry:(id)arg1 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg1 ;
-(void)_updateCellHeightForTextIfNecessary;
-(TFFeedbackEntryLongText *)longTextEntry;
-(void)setLongTextEntry:(TFFeedbackEntryLongText *)arg1 ;
-(void)_updateCellHeightForTextUpdatesInTableView:(id)arg1 ;
@end

