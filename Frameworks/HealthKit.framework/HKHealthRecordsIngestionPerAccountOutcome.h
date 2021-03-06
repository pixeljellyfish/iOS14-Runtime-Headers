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

@class NSUUID;

@interface HKHealthRecordsIngestionPerAccountOutcome : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _accountIdentifier;
	unsigned long long _info;

}

@property (nonatomic,copy,readonly) NSUUID * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long info;                      //@synthesize info=_info - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)info;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)accountIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 info:(unsigned long long)arg2 ;
-(id)formattedInfoStringJoinedByString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

