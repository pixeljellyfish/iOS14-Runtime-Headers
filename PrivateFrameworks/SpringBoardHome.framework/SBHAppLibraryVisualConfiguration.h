/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHAppLibraryVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	double _searchContinuousCornerRadius;
	UIEdgeInsets _appSearchTextFieldLayoutInsets;

}

@property (assign,nonatomic) double searchContinuousCornerRadius;                      //@synthesize searchContinuousCornerRadius=_searchContinuousCornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets appSearchTextFieldLayoutInsets;              //@synthesize appSearchTextFieldLayoutInsets=_appSearchTextFieldLayoutInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIEdgeInsets)appSearchTextFieldLayoutInsets;
-(double)searchContinuousCornerRadius;
-(void)setAppSearchTextFieldLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)setSearchContinuousCornerRadius:(double)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)hash;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end
