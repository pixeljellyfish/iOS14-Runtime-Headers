/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserActivity/UserActivity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSUUID, NSString, NSURL, NSDictionary, NSError, NSSet, NSDate, SFPeerDevice, UAUserActivityAnalyticsInfo;

@interface UAUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _payloads;
	BOOL _eligibleForHandoff;
	BOOL _eligibleForSearch;
	BOOL _eligibleForPublicIndexing;
	BOOL _eligibleForReminders;
	BOOL _eligibleForPrediction;
	BOOL _eligibleToAdvertise;
	BOOL _eligibleToAlwaysAdvertise;
	BOOL _dirty;
	BOOL _payloadAvailable;
	BOOL _payloadRequested;
	BOOL _active;
	BOOL _universalLink;
	NSUUID* _uuid;
	unsigned long long _type;
	NSString* _title;
	NSString* _activityType;
	NSString* _dynamicActivityType;
	NSString* _teamIdentifier;
	NSURL* _webpageURL;
	NSURL* _referrerURL;
	NSString* _targetContentIdentifier;
	NSDictionary* _options;
	NSError* _encodedUserInfoError;
	NSSet* _requiredUserInfoKeys;
	NSDate* _when;
	NSDate* _lastInterestingTime;
	NSDictionary* _encodingOptions;
	NSString* _contentUserAction;
	NSSet* _keywords;
	NSDate* _expirationDate;
	NSString* _persistentIdentifier;
	NSError* _error;
	SFPeerDevice* _peerDevice;
	NSString* _peerDeviceType;
	NSString* _bundleIdentifier;
	UAUserActivityAnalyticsInfo* _wasContinuedInfo;

}

@property (copy) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long type;                                     //@synthesize type=_type - In the implementation block
@property (copy) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (copy) NSString * activityType;                                       //@synthesize activityType=_activityType - In the implementation block
@property (copy) NSString * dynamicActivityType;                                //@synthesize dynamicActivityType=_dynamicActivityType - In the implementation block
@property (copy) NSString * teamIdentifier;                                     //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (copy) NSURL * webpageURL;                                            //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSURL * referrerURL;                                           //@synthesize referrerURL=_referrerURL - In the implementation block
@property (copy) NSString * targetContentIdentifier;                            //@synthesize targetContentIdentifier=_targetContentIdentifier - In the implementation block
@property (copy) NSDictionary * options;                                        //@synthesize options=_options - In the implementation block
@property (copy) NSError * encodedUserInfoError;                                //@synthesize encodedUserInfoError=_encodedUserInfoError - In the implementation block
@property (copy) NSSet * requiredUserInfoKeys;                                  //@synthesize requiredUserInfoKeys=_requiredUserInfoKeys - In the implementation block
@property (copy) NSDate * when;                                                 //@synthesize when=_when - In the implementation block
@property (copy) NSDate * lastInterestingTime;                                  //@synthesize lastInterestingTime=_lastInterestingTime - In the implementation block
@property (copy) NSDictionary * payloads; 
@property (assign) BOOL eligibleForHandoff;                                     //@synthesize eligibleForHandoff=_eligibleForHandoff - In the implementation block
@property (assign) BOOL eligibleForSearch;                                      //@synthesize eligibleForSearch=_eligibleForSearch - In the implementation block
@property (assign) BOOL eligibleForPublicIndexing;                              //@synthesize eligibleForPublicIndexing=_eligibleForPublicIndexing - In the implementation block
@property (assign) BOOL eligibleForReminders;                                   //@synthesize eligibleForReminders=_eligibleForReminders - In the implementation block
@property (assign) BOOL eligibleForPrediction;                                  //@synthesize eligibleForPrediction=_eligibleForPrediction - In the implementation block
@property (readonly) BOOL eligibleToAdvertise;                                  //@synthesize eligibleToAdvertise=_eligibleToAdvertise - In the implementation block
@property (readonly) BOOL eligibleToAlwaysAdvertise;                            //@synthesize eligibleToAlwaysAdvertise=_eligibleToAlwaysAdvertise - In the implementation block
@property (copy) NSDictionary * encodingOptions;                                //@synthesize encodingOptions=_encodingOptions - In the implementation block
@property (copy) NSString * contentUserAction;                                  //@synthesize contentUserAction=_contentUserAction - In the implementation block
@property (copy) NSSet * keywords;                                              //@synthesize keywords=_keywords - In the implementation block
@property (copy) NSDate * expirationDate;                                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (copy) NSString * persistentIdentifier;                               //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (getter=isDirty,readonly) BOOL dirty;                                 //@synthesize dirty=_dirty - In the implementation block
@property (getter=isPayloadAvailable) BOOL payloadAvailable;                    //@synthesize payloadAvailable=_payloadAvailable - In the implementation block
@property (getter=isPayloadRequested) BOOL payloadRequested;                    //@synthesize payloadRequested=_payloadRequested - In the implementation block
@property (assign) BOOL active;                                                 //@synthesize active=_active - In the implementation block
@property (getter=isUniversalLink) BOOL universalLink;                          //@synthesize universalLink=_universalLink - In the implementation block
@property (retain) SFPeerDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (copy) NSString * peerDeviceType;                                     //@synthesize peerDeviceType=_peerDeviceType - In the implementation block
@property (copy) NSString * bundleIdentifier;                                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) UAUserActivityAnalyticsInfo * wasContinuedInfo;              //@synthesize wasContinuedInfo=_wasContinuedInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)encodedInfoToOldEncodedInfo:(id)arg1 ;
-(BOOL)active;
-(BOOL)isDirty;
-(NSString *)activityType;
-(void)setUniversalLink:(BOOL)arg1 ;
-(void)setContentUserAction:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSSet *)keywords;
-(BOOL)eligibleForPublicIndexing;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setEncodingOptions:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)referrerURL;
-(void)setPayloads:(NSDictionary *)arg1 ;
-(void)setEligibleForReminders:(BOOL)arg1 ;
-(BOOL)wasResumedOnAnotherDeviceWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)eligibleForReminders;
-(id)userActivityString;
-(id)payloadForIdentifier:(id)arg1 ;
-(id)logString;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)dynamicActivityType;
-(NSString *)bundleIdentifier;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(BOOL)eligibleForPrediction;
-(id)initWithArchivedUserActivityInfo:(id)arg1 ;
-(void)setEligibleForHandoff:(BOOL)arg1 ;
-(UAUserActivityAnalyticsInfo *)wasContinuedInfo;
-(NSURL *)webpageURL;
-(NSDictionary *)options;
-(NSString *)peerDeviceType;
-(BOOL)requestPayloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDate *)expirationDate;
-(id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
-(void)fetchAllNearbyAppSuggestions:(/*^block*/id)arg1 ;
-(NSDictionary *)payloads;
-(NSString *)title;
-(id)initWithUserActivityInfo:(id)arg1 ;
-(BOOL)requestPayloadWithCompletionHandlerEvenIfClean:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setWasContinuedInfo:(UAUserActivityAnalyticsInfo *)arg1 ;
-(void)setEligibleForPublicIndexing:(BOOL)arg1 ;
-(NSError *)error;
-(NSDate *)lastInterestingTime;
-(void)setError:(NSError *)arg1 ;
-(void)setPayloadRequested:(BOOL)arg1 ;
-(void)_createUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3 ;
-(void)setTargetContentIdentifier:(NSString *)arg1 ;
-(BOOL)isPayloadRequested;
-(unsigned long long)type;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(void)setEncodedUserInfoError:(NSError *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setEligibleForPrediction:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)contentUserAction;
-(BOOL)eligibleForSearch;
-(void)setPeerDeviceType:(NSString *)arg1 ;
-(NSSet *)requiredUserInfoKeys;
-(NSUUID *)uuid;
-(void)setType:(unsigned long long)arg1 ;
-(id)statusString;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isUniversalLink;
-(NSError *)encodedUserInfoError;
-(NSString *)targetContentIdentifier;
-(BOOL)eligibleForHandoff;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSDate *)when;
-(void)clearPayload;
-(void)setDynamicActivityType:(NSString *)arg1 ;
-(BOOL)eligibleToAdvertise;
-(SFPeerDevice *)peerDevice;
-(void)setLastInterestingTime:(NSDate *)arg1 ;
-(id)secondaryUserActivityString;
-(BOOL)eligibleToAlwaysAdvertise;
-(id)optionalUserActivityData;
-(void)setWhen:(NSDate *)arg1 ;
-(BOOL)setPayload:(id)arg1 identifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPeerDevice:(SFPeerDevice *)arg1 ;
-(void)setPayloadAvailable:(BOOL)arg1 ;
-(void)setEligibleForSearch:(BOOL)arg1 ;
-(id)description;
-(NSDictionary *)encodingOptions;
-(id)payloadIdentifiers;
-(NSString *)persistentIdentifier;
-(BOOL)isPayloadAvailable;
-(id)archiveUserActivityInfo;
@end

