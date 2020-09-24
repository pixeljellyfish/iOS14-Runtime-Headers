/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CNContactStore, NSString, NSSet, ASRelationship, NSUUID;

@interface ASContact : NSObject <NSCopying> {

	CNContactStore* _contactStore;
	NSString* _linkedContactStoreIdentifier;
	NSString* _fullName;
	NSString* _shortName;
	NSSet* _destinations;
	ASRelationship* _relationship;
	ASRelationship* _remoteRelationship;

}

@property (nonatomic,readonly) NSUUID * UUID; 
@property (nonatomic,copy) NSString * linkedContactStoreIdentifier;                         //@synthesize linkedContactStoreIdentifier=_linkedContactStoreIdentifier - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                             //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy) NSString * shortName;                                            //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy) NSSet * destinations;                                            //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,copy) ASRelationship * relationship;                                   //@synthesize relationship=_relationship - In the implementation block
@property (nonatomic,copy) ASRelationship * remoteRelationship;                             //@synthesize remoteRelationship=_remoteRelationship - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryDestinationForMessaging; 
+(id)contactWithCodableContact:(id)arg1 ;
-(NSSet *)destinations;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDestinations:(NSSet *)arg1 ;
-(NSString *)shortName;
-(NSString *)displayName;
-(BOOL)isEqualToContact:(id)arg1 ;
-(NSUUID *)UUID;
-(ASRelationship *)relationship;
-(void)setFullName:(NSString *)arg1 ;
-(id)contactStore;
-(id)init;
-(void)setRelationship:(ASRelationship *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContactStore:(id)arg1 ;
-(void)setShortName:(NSString *)arg1 ;
-(NSString *)fullName;
-(id)description;
-(id)codableContactIncludingCloudKitFields:(BOOL)arg1 ;
-(NSString *)linkedContactStoreIdentifier;
-(void)setLinkedContactStoreIdentifier:(NSString *)arg1 ;
-(ASRelationship *)remoteRelationship;
-(void)setRemoteRelationship:(ASRelationship *)arg1 ;
-(id)contactWithKeys:(id)arg1 ;
-(id)_bestDestinationForContact:(id)arg1 ;
-(id)_bestDestinationFromKnownDestinations;
-(NSString *)primaryDestinationForMessaging;
@end
