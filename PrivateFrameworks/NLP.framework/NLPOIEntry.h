/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NLP/NLParsecNamedEntity.h>

@class NSString, NLPOIEntryImpl;

@interface NLPOIEntry : NSObject <NLParsecNamedEntity> {

	NLPOIEntryImpl* m_impl;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned char category; 
@property (nonatomic,readonly) float score; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)score;
-(void)dealloc;
-(unsigned char)category;
-(id)initWithProtoBuf:(id)arg1 ;
-(NSString *)name;
@end
