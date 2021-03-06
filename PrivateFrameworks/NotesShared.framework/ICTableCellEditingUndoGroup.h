/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/TTMergeableStringUndoGroup.h>

@class NSUUID, ICTableAttachmentSelection, ICTableUndoTarget;

@interface ICTableCellEditingUndoGroup : TTMergeableStringUndoGroup {

	NSUUID* _columnID;
	NSUUID* _rowID;
	ICTableAttachmentSelection* _tableSelection;
	ICTableUndoTarget* _undoTarget;

}

@property (nonatomic,readonly) NSUUID * columnID;                                        //@synthesize columnID=_columnID - In the implementation block
@property (nonatomic,readonly) NSUUID * rowID;                                           //@synthesize rowID=_rowID - In the implementation block
@property (nonatomic,readonly) ICTableAttachmentSelection * tableSelection;              //@synthesize tableSelection=_tableSelection - In the implementation block
@property (nonatomic,readonly) ICTableUndoTarget * undoTarget;                           //@synthesize undoTarget=_undoTarget - In the implementation block
-(NSUUID *)rowID;
-(id)init;
-(id)initWithColumn:(id)arg1 row:(id)arg2 selection:(id)arg3 undoTarget:(id)arg4 ;
-(ICTableAttachmentSelection *)tableSelection;
-(ICTableUndoTarget *)undoTarget;
-(NSUUID *)columnID;
@end

