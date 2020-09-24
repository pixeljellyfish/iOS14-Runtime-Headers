/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier {

	id _ecKeySpecifierInternal;

}

@property (assign) long long curve; 
+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(long long)curve;
-(void)setCurve:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCurve:(long long)arg1 ;
-(id)description;
@end
