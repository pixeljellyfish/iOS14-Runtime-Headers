/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NMSModelRecommendationsLibraryRequest;

@interface NMSModelRecommendationsLibraryRequestOperation : MPAsyncOperation {

	NMSModelRecommendationsLibraryRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NMSModelRecommendationsLibraryRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(NMSModelRecommendationsLibraryRequest *)request;
-(void)setRequest:(NMSModelRecommendationsLibraryRequest *)arg1 ;
-(void)execute;
-(void)_requestPlaylistsEntries;
-(void)_requestSongs;
-(void)_requestAlbums;
-(void)_requestPlaylists;
-(id)_mpIdentifierSetsFromStringIdentifiers:(id)arg1 ;
-(void)_requestContainerWithClass:(Class)arg1 ;
-(id)_modelObjectWithCachedArtworkFromModelObject:(id)arg1 ;
@end

