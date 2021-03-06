/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDText, WDCharacterRun;

@interface WDNote : WDRun {

	WDText* mText;
	WDCharacterRun* mReference;
	BOOL mAutomaticNumbering;

}
-(id)text;
-(id)reference;
-(int)runType;
-(id)description;
-(void)setAutomaticNumbering:(BOOL)arg1 ;
-(BOOL)automaticNumbering;
-(id)initWithParagraph:(id)arg1 footnote:(BOOL)arg2 ;
@end

