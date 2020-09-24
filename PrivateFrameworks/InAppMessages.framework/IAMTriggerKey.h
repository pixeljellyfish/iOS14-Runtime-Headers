/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InAppMessages/InAppMessages-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IAMTriggerKey : NSObject <NSCopying> {

	NSString* _name;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * nameSpacedKeyName; 
+(id)nameSpacedKeyNameForName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(NSString *)nameSpacedKeyName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
@end
