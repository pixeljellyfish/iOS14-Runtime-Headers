/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUExportResult.h>

@class NSURL, NUImageGeometry, NSString;

@interface _NUExportResult : _NURenderResult <NUExportResult> {

	NSURL* _destinationURL;
	NUImageGeometry* _geometry;

}

@property (retain) NSURL * destinationURL;                           //@synthesize destinationURL=_destinationURL - In the implementation block
@property (retain) NUImageGeometry * geometry;                       //@synthesize geometry=_geometry - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(NUImageGeometry *)geometry;
@end

