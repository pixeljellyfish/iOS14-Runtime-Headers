/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@interface NFLPremiumHeadlineCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes {

	double _shadowRadius;
	double _shadowOpacity;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) double shadowRadius;               //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;               //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowOpacity;              //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
-(CGSize)shadowOffset;
-(double)shadowOpacity;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
-(void)setShadowOpacity:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

