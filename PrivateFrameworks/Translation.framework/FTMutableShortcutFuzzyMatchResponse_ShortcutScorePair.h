/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTShortcutFuzzyMatchResponse_ShortcutScorePair.h>

@class NSString;

@interface FTMutableShortcutFuzzyMatchResponse_ShortcutScorePair : FTShortcutFuzzyMatchResponse_ShortcutScorePair

@property (nonatomic,copy) NSString * shortcut; 
@property (assign,nonatomic) double similarity_score; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)similarity_score;
-(void)setSimilarity_score:(double)arg1 ;
-(void)setShortcut:(NSString *)arg1 ;
-(id)init;
-(NSString *)shortcut;
@end
