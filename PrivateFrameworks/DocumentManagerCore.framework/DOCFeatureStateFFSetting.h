/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerCore/DOCFeatureState.h>

@class NSString;

@interface DOCFeatureStateFFSetting : DOCFeatureState {

	NSString* _domainID;
	NSString* _featureID;
	long long _valueMode;

}

@property (retain) NSString * domainID;               //@synthesize domainID=_domainID - In the implementation block
@property (retain) NSString * featureID;              //@synthesize featureID=_featureID - In the implementation block
@property (assign) long long valueMode;               //@synthesize valueMode=_valueMode - In the implementation block
-(NSString *)featureID;
-(void)setFeatureID:(NSString *)arg1 ;
-(id)initWithDomainID:(id)arg1 featureID:(id)arg2 valueMode:(long long)arg3 ;
-(NSString *)domainID;
-(void)setDomainID:(NSString *)arg1 ;
-(long long)valueMode;
-(void)setValueMode:(long long)arg1 ;
@end

