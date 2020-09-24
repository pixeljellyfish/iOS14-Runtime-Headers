/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSString, NSDictionary;

@interface ACDKeychainItem : NSObject {

	NSMutableDictionary* _properties;
	NSMutableSet* _dirtyProperties;
	const CFDataRef _persistentRef;

}

@property (nonatomic,readonly) const CFDataRef persistentRef;                     //@synthesize persistentRef=_persistentRef - In the implementation block
@property (nonatomic,copy) NSString * account; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSString * accessGroup; 
@property (nonatomic,copy) NSString * accessibility; 
@property (assign,nonatomic) BOOL synchronizable; 
@property (nonatomic,readonly) BOOL useDataProtectionKeychain; 
@property (nonatomic,readonly) SecAccessControlRef accessControlRef; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (assign,nonatomic) long long version; 
+(id)new;
-(void)reload;
-(BOOL)save:(id*)arg1 ;
-(long long)version;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)_clearDirtyProperties;
-(NSDictionary *)metadata;
-(void)setAccount:(NSString *)arg1 ;
-(id)debugDescription;
-(void)setVersion:(long long)arg1 ;
-(void)dealloc;
-(NSString *)account;
-(NSString *)accessibility;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(id)init;
-(void)_reloadProperties;
-(NSString *)service;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(const CFDataRef)persistentRef;
-(void)setAccessibility:(NSString *)arg1 ;
-(id)description;
-(SecAccessControlRef)accessControlRef;
-(void)setService:(NSString *)arg1 ;
-(id)initWithPersistentRef:(const CFDataRef)arg1 properties:(id)arg2 ;
-(id)_modifiedProperties;
-(id)_metadataWithError:(id*)arg1 ;
-(BOOL)synchronizable;
-(BOOL)_setMetadata:(id)arg1 withError:(id*)arg2 ;
-(id)initWithPersistentRef:(const CFDataRef)arg1 ;
-(void)migrateToKeyBagFromLegacy;
-(BOOL)useDataProtectionKeychain;
-(void)setSynchronizable:(BOOL)arg1 ;
@end
