/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class UISDisplayContext, UISDeviceContext, NSSet, FBSSceneIdentityToken, NSString;

@interface UISApplicationInitializationContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSXPCSecureCoding> {

	UISDisplayContext* _displayContext;
	UISDeviceContext* _deviceContext;
	NSSet* _persistedSceneIdentifiers;
	FBSSceneIdentityToken* _defaultSceneToken;

}

@property (nonatomic,readonly) UISDisplayContext * displayContext;                     //@synthesize displayContext=_displayContext - In the implementation block
@property (nonatomic,readonly) UISDeviceContext * deviceContext;                       //@synthesize deviceContext=_deviceContext - In the implementation block
@property (nonatomic,readonly) NSSet * persistedSceneIdentifiers;                      //@synthesize persistedSceneIdentifiers=_persistedSceneIdentifiers - In the implementation block
@property (nonatomic,readonly) FBSSceneIdentityToken * defaultSceneToken;              //@synthesize defaultSceneToken=_defaultSceneToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)defaultContext;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)initWithDisplayContext:(id)arg1 deviceContext:(id)arg2 persistedSceneIdentifiers:(id)arg3 ;
-(id)initWithUISApplicationInitializationContext:(id)arg1 ;
-(UISDeviceContext *)deviceContext;
-(UISDisplayContext *)displayContext;
-(NSSet *)persistedSceneIdentifiers;
-(FBSSceneIdentityToken *)defaultSceneToken;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

