/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson, NSArray;

@interface SADPDeviceDetail : SADomainObject <SAAceSerializable>

@property (assign,nonatomic) BOOL canPlaySound; 
@property (nonatomic,copy) NSString * deviceClass; 
@property (nonatomic,copy) NSString * deviceId; 
@property (nonatomic,copy) NSString * deviceLocality; 
@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) NSString * emoji; 
@property (assign,nonatomic) BOOL foundNearby; 
@property (nonatomic,retain) SAPerson * owner; 
@property (nonatomic,copy) NSString * productName; 
@property (nonatomic,copy) NSArray * productTypes; 
@property (assign,nonatomic) BOOL thisDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceDetail;
+(id)deviceDetailWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)deviceName;
-(NSString *)emoji;
-(SAPerson *)owner;
-(id)encodedClassName;
-(NSString *)deviceClass;
-(void)setProductName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setOwner:(SAPerson *)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(NSString *)productName;
-(BOOL)thisDevice;
-(void)setEmoji:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)canPlaySound;
-(void)setCanPlaySound:(BOOL)arg1 ;
-(NSString *)deviceLocality;
-(void)setDeviceLocality:(NSString *)arg1 ;
-(BOOL)foundNearby;
-(void)setFoundNearby:(BOOL)arg1 ;
-(NSArray *)productTypes;
-(void)setProductTypes:(NSArray *)arg1 ;
-(void)setThisDevice:(BOOL)arg1 ;
-(NSString *)deviceId;
-(void)setDeviceClass:(NSString *)arg1 ;
@end
