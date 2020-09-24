/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MAAssetDiff : NSObject <NSSecureCoding> {

	unsigned long long _diffRaw;
	unsigned long long _diff;
	unsigned long long _mask;
	NSString* _description;
	NSString* _assessment;

}
+(id)allowEverythingDifferent;
+(BOOL)supportsSecureCoding;
+(id)requireSameAssetTypeAndAssetId;
+(id)requireSameAssetTypeAndDownloadContent;
+(id)requireSameAssetTypeAndAllAttributes;
-(id)initDifferentAssetType:(BOOL)arg1 assetId:(BOOL)arg2 attributes:(BOOL)arg3 assetIdAttributes:(BOOL)arg4 dynamicAssetId:(BOOL)arg5 nonIdAttributes:(BOOL)arg6 content:(BOOL)arg7 url:(BOOL)arg8 policy:(BOOL)arg9 ;
-(id)initFromDiff:(unsigned long long)arg1 ;
-(id)initFromInverseOfCategories:(unsigned long long)arg1 ;
-(BOOL)isAnythingDifferent;
-(BOOL)isSameAssetType;
-(BOOL)isSameForAllAttributes;
-(BOOL)isSameAssetId;
-(BOOL)isSameForNonAssetIdAttributes;
-(BOOL)isSameDownloadContent;
-(BOOL)isSameDownloadUrl;
-(BOOL)isSameDownloadPolicy;
-(BOOL)hasOnlyAllowedDifferences:(id)arg1 ;
-(id)summary;
-(unsigned long long)category;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
