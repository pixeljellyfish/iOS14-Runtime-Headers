/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SALocalSearchMapItem;

@interface SALocalSearchShareLocationWithExternalAccessory : SADomainCommand

@property (nonatomic,retain) SALocalSearchMapItem * mapItem; 
@property (assign,nonatomic) BOOL useNavigationDestination; 
+(id)shareLocationWithExternalAccessory;
+(id)shareLocationWithExternalAccessoryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(BOOL)useNavigationDestination;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
-(void)setUseNavigationDestination:(BOOL)arg1 ;
-(SALocalSearchMapItem *)mapItem;
@end

