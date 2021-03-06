/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CNAutocompleteSupplementalGroup : NSObject {

	NSString* _identifier;
	NSString* _title;
	NSArray* _groupMembers;

}

@property (copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSArray * groupMembers;              //@synthesize groupMembers=_groupMembers - In the implementation block
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 members:(id)arg3 ;
-(NSString *)title;
-(NSArray *)groupMembers;
@end

