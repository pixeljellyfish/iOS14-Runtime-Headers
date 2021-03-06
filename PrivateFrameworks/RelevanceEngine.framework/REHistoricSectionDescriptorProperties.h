/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet;


@protocol REHistoricSectionDescriptorProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL invertsRanking; 
@property (nonatomic,readonly) long long maxElementCount; 
@property (nonatomic,readonly) NSSet * rules; 
@required
-(NSSet *)rules;
-(NSString *)name;
-(long long)maxElementCount;
-(BOOL)invertsRanking;

@end

