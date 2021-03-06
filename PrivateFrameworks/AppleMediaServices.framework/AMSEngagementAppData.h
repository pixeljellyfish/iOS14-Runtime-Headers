/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject {

	NSArray* _cachedResponses;
	NSString* _identifier;
	NSArray* _whitelist;

}

@property (nonatomic,retain) NSArray * cachedResponses;              //@synthesize cachedResponses=_cachedResponses - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * whitelist;                    //@synthesize whitelist=_whitelist - In the implementation block
-(NSString *)identifier;
-(NSArray *)cachedResponses;
-(id)exportObject;
-(id)initWithIdentifier:(id)arg1 cacheObject:(id)arg2 ;
-(void)setCachedResponses:(NSArray *)arg1 ;
-(void)setWhitelist:(NSArray *)arg1 ;
-(NSArray *)whitelist;
@end

