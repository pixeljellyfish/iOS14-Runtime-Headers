/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface AMSMarketingItem : NSObject {

	NSDictionary* _rawValues;

}

@property (nonatomic,readonly) NSDictionary * artworkDictionary; 
@property (nonatomic,readonly) NSString * badge; 
@property (nonatomic,readonly) NSString * campaignID; 
@property (nonatomic,readonly) NSString * itemID; 
@property (nonatomic,readonly) NSArray * itemActions; 
@property (nonatomic,copy,readonly) NSDictionary * rawValues;                 //@synthesize rawValues=_rawValues - In the implementation block
@property (nonatomic,readonly) NSArray * relatedContent; 
@property (nonatomic,readonly) NSString * serviceType; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * templateID; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSArray * videos; 
-(NSDictionary *)rawValues;
-(NSString *)subtitle;
-(id)tagline;
-(NSString *)URLString;
-(id)video;
-(NSString *)itemID;
-(NSDictionary *)artworkDictionary;
-(id)renderingAttributes;
-(NSString *)title;
-(id)endDate;
-(NSString *)badge;
-(NSString *)type;
-(id)abSettings;
-(NSArray *)videos;
-(NSString *)templateID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)campaignID;
-(NSArray *)itemActions;
-(NSArray *)relatedContent;
-(NSString *)serviceType;
@end

