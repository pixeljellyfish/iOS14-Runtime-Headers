/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _HKXPCAuditToken : NSObject <NSCopying> {

	SCD_Struct_HK4 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_HK4 auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,copy,readonly) NSString * signingIdentifier; 
+(id)auditTokenForCurrentTask;
+(id)signingIdentifierFromAuditToken:(SCD_Struct_HK4)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_HK4)arg1 ;
-(SCD_Struct_HK4)auditToken;
-(BOOL)isEqual:(id)arg1 ;
-(int)processIdentifier;
-(unsigned long long)hash;
-(NSString *)signingIdentifier;
@end
