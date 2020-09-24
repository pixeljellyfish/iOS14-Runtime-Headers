/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CSPerson : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying> {

	NSString* _displayName;
	NSArray* _handles;
	NSString* _handleIdentifier;
	NSString* _contactIdentifier;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSArray * handles;                        //@synthesize handles=_handles - In the implementation block
@property (nonatomic,retain) NSString * handleIdentifier;              //@synthesize handleIdentifier=_handleIdentifier - In the implementation block
@property (copy) NSString * contactIdentifier;                         //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)sg_serialized;
-(id)sg_emailAddress;
-(id)sg_namedEmailAddress;
-(id)sg_initWithNamedEmailAddress:(id)arg1 ;
-(id)sg_initWithSerializedForm:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)contactIdentifier;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)encodeWithCSCoder:(id)arg1 ;
-(id)initWithDisplayName:(id)arg1 handles:(id)arg2 handleIdentifier:(id)arg3 ;
-(void)setHandleIdentifier:(NSString *)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)handleIdentifier;
-(unsigned long long)hash;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(NSArray *)handles;
-(id)description;
@end
