/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXHomeScreenEvent, ATXSuggestionLayout, NSDate;

@interface ATXStackState : NSObject <NSSecureCoding> {

	ATXHomeScreenEvent* _stackCreationEvent;
	ATXHomeScreenEvent* _lastStackRotationEvent;
	ATXHomeScreenEvent* _lastUserScrollStackRotationEvent;
	ATXSuggestionLayout* _layoutForLastStalenessRotation;
	NSDate* _dateOfLastStalenessRotation;

}

@property (nonatomic,retain) ATXHomeScreenEvent * stackCreationEvent;                            //@synthesize stackCreationEvent=_stackCreationEvent - In the implementation block
@property (nonatomic,retain) ATXHomeScreenEvent * lastStackRotationEvent;                        //@synthesize lastStackRotationEvent=_lastStackRotationEvent - In the implementation block
@property (nonatomic,retain) ATXHomeScreenEvent * lastUserScrollStackRotationEvent;              //@synthesize lastUserScrollStackRotationEvent=_lastUserScrollStackRotationEvent - In the implementation block
@property (nonatomic,retain) ATXSuggestionLayout * layoutForLastStalenessRotation;               //@synthesize layoutForLastStalenessRotation=_layoutForLastStalenessRotation - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastStalenessRotation;                               //@synthesize dateOfLastStalenessRotation=_dateOfLastStalenessRotation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(ATXHomeScreenEvent *)stackCreationEvent;
-(ATXHomeScreenEvent *)lastStackRotationEvent;
-(ATXHomeScreenEvent *)lastUserScrollStackRotationEvent;
-(ATXSuggestionLayout *)layoutForLastStalenessRotation;
-(NSDate *)dateOfLastStalenessRotation;
-(void)setStackCreationEvent:(ATXHomeScreenEvent *)arg1 ;
-(void)setLastStackRotationEvent:(ATXHomeScreenEvent *)arg1 ;
-(void)setLastUserScrollStackRotationEvent:(ATXHomeScreenEvent *)arg1 ;
-(void)setLayoutForLastStalenessRotation:(ATXSuggestionLayout *)arg1 ;
-(void)setDateOfLastStalenessRotation:(NSDate *)arg1 ;
@end
