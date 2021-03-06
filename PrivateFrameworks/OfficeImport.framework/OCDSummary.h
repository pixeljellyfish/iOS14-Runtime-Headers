/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OCDSummary : NSObject {

	NSString* mTitle;
	NSString* mAuthor;
	NSString* mKeywords;
	NSString* mComments;
	NSString* mHyperlinkBase;
	NSString* _subject;
	NSString* _company;

}

@property (retain) NSString * subject;              //@synthesize subject=_subject - In the implementation block
@property (retain) NSString * company;              //@synthesize company=_company - In the implementation block
-(void)setKeywords:(id)arg1 ;
-(id)keywords;
-(void)setAuthor:(id)arg1 ;
-(id)author;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(id)title;
-(void)setComments:(id)arg1 ;
-(void)setCompany:(NSString *)arg1 ;
-(NSString *)company;
-(id)comments;
-(void)setTitle:(id)arg1 ;
-(id)hyperlinkBase;
-(void)setHyperlinkBase:(id)arg1 ;
@end

