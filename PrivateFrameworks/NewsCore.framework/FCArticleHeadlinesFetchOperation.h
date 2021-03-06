/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@protocol FCCoreConfiguration, FCContentContext;
@class NSArray;

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation {

	BOOL _overrideArticleCachePolicy;
	BOOL _overrideTagCachePolicy;
	BOOL _shouldFilterHeadlinesWithoutSourceChannels;
	id<FCCoreConfiguration> _configuration;
	unsigned long long _articleCachePolicy;
	double _articleMaximumCachedAge;
	unsigned long long _tagCachePolicy;
	double _tagMaximumCachedAge;
	id<FCContentContext> _context;
	NSArray* _articleIDs;
	NSArray* _ignoreCacheForArticleIDs;
	NSArray* _resultHeadlines;

}

@property (nonatomic,retain) id<FCContentContext> context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * articleIDs;                                         //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,retain) NSArray * ignoreCacheForArticleIDs;                           //@synthesize ignoreCacheForArticleIDs=_ignoreCacheForArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * resultHeadlines;                                    //@synthesize resultHeadlines=_resultHeadlines - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL overrideArticleCachePolicy;                                        //@synthesize overrideArticleCachePolicy=_overrideArticleCachePolicy - In the implementation block
@property (assign) unsigned long long articleCachePolicy;                                  //@synthesize articleCachePolicy=_articleCachePolicy - In the implementation block
@property (assign) double articleMaximumCachedAge;                                         //@synthesize articleMaximumCachedAge=_articleMaximumCachedAge - In the implementation block
@property (assign) BOOL overrideTagCachePolicy;                                            //@synthesize overrideTagCachePolicy=_overrideTagCachePolicy - In the implementation block
@property (assign) unsigned long long tagCachePolicy;                                      //@synthesize tagCachePolicy=_tagCachePolicy - In the implementation block
@property (assign) double tagMaximumCachedAge;                                             //@synthesize tagMaximumCachedAge=_tagMaximumCachedAge - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels;              //@synthesize shouldFilterHeadlinesWithoutSourceChannels=_shouldFilterHeadlinesWithoutSourceChannels - In the implementation block
-(NSArray *)articleIDs;
-(void)setArticleMaximumCachedAge:(double)arg1 ;
-(void)setArticleCachePolicy:(unsigned long long)arg1 ;
-(void)setOverrideArticleCachePolicy:(BOOL)arg1 ;
-(void)setTagCachePolicy:(unsigned long long)arg1 ;
-(BOOL)overrideTagCachePolicy;
-(unsigned long long)articleCachePolicy;
-(id)fetchRecordsWithCompletion:(/*^block*/id)arg1 ;
-(double)tagMaximumCachedAge;
-(BOOL)shouldFilterHeadlinesWithoutSourceChannels;
-(BOOL)overrideArticleCachePolicy;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(NSArray *)resultHeadlines;
-(id)init;
-(void)setArticleIDs:(NSArray *)arg1 ;
-(void)setOverrideTagCachePolicy:(BOOL)arg1 ;
-(id<FCContentContext>)context;
-(void)setResultHeadlines:(NSArray *)arg1 ;
-(NSArray *)ignoreCacheForArticleIDs;
-(void)setIgnoreCacheForArticleIDs:(NSArray *)arg1 ;
-(id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3 ;
-(double)articleMaximumCachedAge;
-(id<FCCoreConfiguration>)configuration;
-(void)setShouldFilterHeadlinesWithoutSourceChannels:(BOOL)arg1 ;
-(void)setTagMaximumCachedAge:(double)arg1 ;
-(id)determineAppropriateFetchStepsWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchConfigWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)tagCachePolicy;
-(id)completeFetchOperation;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
@end

