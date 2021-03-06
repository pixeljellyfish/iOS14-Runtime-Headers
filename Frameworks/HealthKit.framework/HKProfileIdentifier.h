/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface HKProfileIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	long long _type;

}

@property (copy,readonly) NSUUID * identifier; 
@property (readonly) long long type; 
+(id)primaryProfile;
+(BOOL)supportsSecureCoding;
+(BOOL)isValidProfileType:(long long)arg1 ;
+(BOOL)isValidSecondaryProfileType:(long long)arg1 ;
+(id)_profileWithUUID:(id)arg1 type:(long long)arg2 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(id)init;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

