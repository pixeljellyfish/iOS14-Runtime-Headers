/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INDeleteTimerIntentExport.h>

@class INTimer, NSNumber, NSString;

@interface INDeleteTimerIntent : INIntent <INDeleteTimerIntentExport>

@property (nonatomic,copy,readonly) INTimer * targetTimer; 
@property (nonatomic,copy,readonly) NSNumber * deleteMultiple; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(NSNumber *)deleteMultiple;
-(INTimer *)targetTimer;
-(void)setDeleteMultiple:(NSNumber *)arg1 ;
-(void)setTargetTimer:(INTimer *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setDomain:(id)arg1 ;
-(id)initWithTargetTimer:(id)arg1 deleteMultiple:(id)arg2 ;
@end

