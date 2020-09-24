/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactListStyleDefautProvider.h>

@class CNContactStyle;

@interface CNContactListStyleWrapperProvider : CNContactListStyleDefautProvider {

	CNContactStyle* _contactStyle;

}

@property (nonatomic,readonly) CNContactStyle * contactStyle;              //@synthesize contactStyle=_contactStyle - In the implementation block
-(id)tableSeparatorColor;
-(id)cellSearchResultTextColor;
-(id)searchBarBackgroundColor;
-(UIEdgeInsets)cellSeparatorInset;
-(id)searchBarTextDisabledColor;
-(CNContactStyle *)contactStyle;
-(unsigned long long)tableNoContactsAvailableStyle;
-(id)cellBackgroundSelectedColor;
-(long long)navigationBarStyle;
-(id)cellNameTextFont;
-(id)cellSearchResultTextDisabledColor;
-(BOOL)searchBarIsTranslucent;
-(id)cellSearchBackgroundColor;
-(id)headerBackgroundColor;
-(id)bannerTitleTextColor;
-(BOOL)tableIsOpaque;
-(BOOL)navigationBarIsTranslucent;
-(id)initWithContactStyle:(id)arg1 ;
-(id)searchBarTextColor;
-(long long)searchBarKeyboardAppearance;
-(id)tableBackgroundFilteredColor;
-(id)cellNameTextColor;
-(id)headerIndexTextColor;
-(long long)searchBarStyle;
-(id)cellBackgroundColor;
-(id)searchBarPlaceholderTextColor;
-(id)tableSectionIndexBackgroundColor;
-(long long)tableSeparatorOverlayBlendMode;
-(id)tableBackgroundColor;
-(long long)tableSeparatorStyle;
-(BOOL)cellIsVibrant;
-(id)searchBarPlaceholderTextDisabledColor;
-(BOOL)cellIsOpaque;
-(id)cellNameTextEmphasisedFont;
-(BOOL)usesInsetPlatterStyle;
-(id)cellNameTextHighlightedColor;
@end
