/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <FileProvider/FPOperation.h>
#import <libobjc.A.dylib/FPOperationProgressDelegate.h>

@class NSArray, FPItemManager, NSOperationQueue, NSMutableArray, NSString;

@interface FPFetchThumbnailsOperation : FPOperation <FPOperationProgressDelegate> {

	NSArray* _items;
	CGSize _desiredSize;
	double _screenScale;
	FPItemManager* _itemManager;
	NSOperationQueue* _subOperationQueue;
	NSMutableArray* _subOperations;
	/*^block*/id _perThumbnailCompletionBlock;
	/*^block*/id _thumbnailsFetchCompletionBlock;

}

@property (nonatomic,copy) id perThumbnailCompletionBlock;                 //@synthesize perThumbnailCompletionBlock=_perThumbnailCompletionBlock - In the implementation block
@property (nonatomic,copy) id thumbnailsFetchCompletionBlock;              //@synthesize thumbnailsFetchCompletionBlock=_thumbnailsFetchCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(id)init;
-(void)operation:(id)arg1 didReceiveProgressInfo:(id)arg2 error:(id)arg3 ;
-(void)_perItemCompletionBlockFor:(id)arg1 thumbnail:(id)arg2 contentType:(id)arg3 error:(id)arg4 ;
-(id)thumbnailsFetchCompletionBlock;
-(void)setThumbnailsFetchCompletionBlock:(id)arg1 ;
-(id)perThumbnailCompletionBlock;
-(id)initWithItems:(id)arg1 desiredSize:(CGSize)arg2 screenScale:(double)arg3 itemManager:(id)arg4 ;
-(void)setPerThumbnailCompletionBlock:(id)arg1 ;
-(void)main;
@end
