/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoComplicationSettings/NanoComplicationSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NCSComplication : NSObject <NSCopying> {

	BOOL _cannotBeDisabled;
	BOOL _active;
	NSString* _name;
	NSString* _appBundleIdentifier;
	NSString* _complicationBundleIdentifier;
	NSString* _sockPuppetIdentifier;
	unsigned long long _installState;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                       //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * complicationBundleIdentifier;              //@synthesize complicationBundleIdentifier=_complicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sockPuppetIdentifier;                      //@synthesize sockPuppetIdentifier=_sockPuppetIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * complicationIdentifier; 
@property (assign,nonatomic) BOOL cannotBeDisabled;                              //@synthesize cannotBeDisabled=_cannotBeDisabled - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                        //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) unsigned long long installState;                    //@synthesize installState=_installState - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled; 
-(unsigned long long)installState;
-(void)setInstallState:(unsigned long long)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isActive;
-(NSString *)appBundleIdentifier;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isInstalled;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)complicationIdentifier;
-(NSString *)sockPuppetIdentifier;
-(NSString *)complicationBundleIdentifier;
-(void)setComplicationBundleIdentifier:(NSString *)arg1 ;
-(BOOL)cannotBeDisabled;
-(void)setCannotBeDisabled:(BOOL)arg1 ;
-(void)setSockPuppetIdentifier:(NSString *)arg1 ;
@end
