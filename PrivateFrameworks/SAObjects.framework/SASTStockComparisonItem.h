/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SAUIDecoratedText;

@interface SASTStockComparisonItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * stockValueFacet; 
@property (nonatomic,retain) SAUIDecoratedText * subtitle; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (nonatomic,retain) SAUIDecoratedText * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stockComparisonItem;
+(id)stockComparisonItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUIDecoratedText *)subtitle;
-(id)encodedClassName;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(id)groupIdentifier;
-(NSString *)stockValueFacet;
-(void)setStockValueFacet:(NSString *)arg1 ;
-(void)setValue:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)title;
-(SAUIDecoratedText *)value;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
@end

