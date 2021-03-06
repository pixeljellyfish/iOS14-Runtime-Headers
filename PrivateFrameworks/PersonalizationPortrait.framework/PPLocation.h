/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class CLPlacemark, PPLocationRecord, NSString, NSSet;

@interface PPLocation : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	unsigned short _category;
	CLPlacemark* _placemark;
	PPLocationRecord* _mostRelevantRecord;
	NSString* _clusterIdentifier;

}

@property (nonatomic,readonly) NSString * clusterIdentifier;                       //@synthesize clusterIdentifier=_clusterIdentifier - In the implementation block
@property (nonatomic,readonly) CLPlacemark * placemark;                            //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) unsigned short category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) PPLocationRecord * mostRelevantRecord;              //@synthesize mostRelevantRecord=_mostRelevantRecord - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
+(id)describeCategory:(unsigned short)arg1 ;
+(id)clusterIdentifierFromPlacemark:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)featureNames;
-(NSString *)clusterIdentifier;
-(id)featureValueForName:(id)arg1 ;
-(id)customizedDescription;
-(unsigned short)category;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3 ;
-(CLPlacemark *)placemark;
-(unsigned long long)hash;
-(PPLocationRecord *)mostRelevantRecord;
@end

