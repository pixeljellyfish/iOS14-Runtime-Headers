/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUCTCapabilitiesState.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>

@class NSSet, NSString;

@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying> {

	BOOL _approved;
	BOOL _associated;
	BOOL _supportsDefaultPairedDevice;
	NSSet* _approvedSecondaryDeviceIDs;
	NSString* _accountID;
	NSString* _localDeviceID;

}

@property (assign,getter=isApproved,nonatomic) BOOL approved;                  //@synthesize approved=_approved - In the implementation block
@property (nonatomic,copy) NSSet * approvedSecondaryDeviceIDs;                 //@synthesize approvedSecondaryDeviceIDs=_approvedSecondaryDeviceIDs - In the implementation block
@property (nonatomic,copy) NSString * accountID;                               //@synthesize accountID=_accountID - In the implementation block
@property (assign,getter=isAssociated,nonatomic) BOOL associated;              //@synthesize associated=_associated - In the implementation block
@property (nonatomic,copy) NSString * localDeviceID;                           //@synthesize localDeviceID=_localDeviceID - In the implementation block
@property (assign,nonatomic) BOOL supportsDefaultPairedDevice;                 //@synthesize supportsDefaultPairedDevice=_supportsDefaultPairedDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
-(NSString *)localDeviceID;
-(id)publiclyAccessibleCopy;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isApproved;
-(id)initWithCapabilityInfo:(id)arg1 ;
-(BOOL)supportsDefaultPairedDevice;
-(void)setAssociated:(BOOL)arg1 ;
-(BOOL)isAssociated;
-(void)setAccountID:(NSString *)arg1 ;
-(id)init;
-(BOOL)isEqualToCapabilitiesState:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSupportsDefaultPairedDevice:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)accountID;
-(void)setApproved:(BOOL)arg1 ;
-(void)setLocalDeviceID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSSet *)approvedSecondaryDeviceIDs;
-(void)setApprovedSecondaryDeviceIDs:(NSSet *)arg1 ;
-(NSString *)description;
@end
