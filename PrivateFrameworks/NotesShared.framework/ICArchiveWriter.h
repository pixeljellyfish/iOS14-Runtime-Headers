/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSString, NSURL;

@interface ICArchiveWriter : NSObject {

	archiveRef _archive;
	BOOL _usesCompression;
	BOOL _flatten;
	NSString* _flattenFolderName;
	NSURL* _destinationURL;
	NSString* _basePath;

}

@property (nonatomic,retain) NSURL * destinationURL;                    //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) NSString * basePath;                       //@synthesize basePath=_basePath - In the implementation block
@property (assign,nonatomic) BOOL usesCompression;                      //@synthesize usesCompression=_usesCompression - In the implementation block
@property (assign,nonatomic) BOOL flatten;                              //@synthesize flatten=_flatten - In the implementation block
@property (nonatomic,retain) NSString * flattenFolderName;              //@synthesize flattenFolderName=_flattenFolderName - In the implementation block
-(NSString *)basePath;
-(BOOL)finish:(id*)arg1 ;
-(void)dealloc;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)setBasePath:(NSString *)arg1 ;
-(BOOL)writeURL:(id)arg1 isDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(void)setFlatten:(BOOL)arg1 ;
-(BOOL)writeURLs:(id)arg1 error:(id*)arg2 ;
-(BOOL)usesCompression;
-(NSString *)flattenFolderName;
-(id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2 ;
-(void)setUsesCompression:(BOOL)arg1 ;
-(void)setFlattenFolderName:(NSString *)arg1 ;
-(NSURL *)destinationURL;
-(BOOL)open:(id*)arg1 ;
-(BOOL)flatten;
@end

