/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/ICRDNoteSectionIdentifier.h>

@class NSManagedObjectID;

@interface ICRDNoteFolderSectionIdentifier : ICRDNoteSectionIdentifier {

	NSManagedObjectID* _noteContainerObjectID;

}

@property (nonatomic,retain) NSManagedObjectID * noteContainerObjectID;              //@synthesize noteContainerObjectID=_noteContainerObjectID - In the implementation block
-(id)init;
-(void)setNoteContainerObjectID:(NSManagedObjectID *)arg1 ;
-(NSManagedObjectID *)noteContainerObjectID;
@end
