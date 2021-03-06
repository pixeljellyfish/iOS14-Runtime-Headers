/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPOperation.h>

@class FPXSpotlightIndexer, FPXDomainContext, FPXIndexState, NSArray, NSData, NSError;

@interface FPXFetchOneBatchFromWorkingSetOperation : FPOperation {

	FPXSpotlightIndexer* _indexer;
	FPXDomainContext* _domainContext;
	FPXIndexState* _indexState;
	BOOL _hasMore;
	NSArray* _updatedItems;
	NSArray* _deletedItemIDs;
	NSData* _nextAnchor;
	NSError* _error;

}

@property (nonatomic,retain) NSArray * updatedItems;                //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,retain) NSArray * deletedItemIDs;              //@synthesize deletedItemIDs=_deletedItemIDs - In the implementation block
@property (nonatomic,retain) NSData * nextAnchor;                   //@synthesize nextAnchor=_nextAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasMore;                          //@synthesize hasMore=_hasMore - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
-(BOOL)hasMore;
-(NSError *)error;
-(NSArray *)updatedItems;
-(void)setUpdatedItems:(NSArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSData *)nextAnchor;
-(id)initWithIndexer:(id)arg1 queue:(id)arg2 ;
-(NSArray *)deletedItemIDs;
-(void)setDeletedItemIDs:(NSArray *)arg1 ;
-(void)setNextAnchor:(NSData *)arg1 ;
-(void)main;
-(id)observerItemID;
-(void)setHasMore:(BOOL)arg1 ;
-(void)handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(BOOL)arg3 state:(id)arg4 error:(id)arg5 ;
-(void)_indexOnePageFromPage:(id)arg1 ;
-(void)_indexOneChangesBatchFromChangeToken:(id)arg1 ;
@end

