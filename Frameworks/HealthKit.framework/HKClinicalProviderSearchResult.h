/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HKClinicalBrandable.h>

@class NSString, HKClinicalBrand;

@interface HKClinicalProviderSearchResult : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable> {

	BOOL _supported;
	NSString* _externalID;
	NSString* _batchID;
	NSString* _title;
	NSString* _subtitle;
	NSString* _location;
	HKClinicalBrand* _brand;
	NSString* _countryCode;

}

@property (nonatomic,copy,readonly) NSString * externalID;                     //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * batchID;                        //@synthesize batchID=_batchID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalBrand * brand;                   //@synthesize brand=_brand - In the implementation block
@property (getter=isSupported,nonatomic,readonly) BOOL supported;              //@synthesize supported=_supported - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                    //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)subtitle;
-(BOOL)isSupported;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKClinicalBrand *)brand;
-(NSString *)batchID;
-(NSString *)countryCode;
-(NSString *)location;
-(NSString *)title;
-(id)initWithExternalID:(id)arg1 batchID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 location:(id)arg5 supported:(BOOL)arg6 countryCode:(id)arg7 brand:(id)arg8 ;
-(NSString *)externalID;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)informationURL;
@end
