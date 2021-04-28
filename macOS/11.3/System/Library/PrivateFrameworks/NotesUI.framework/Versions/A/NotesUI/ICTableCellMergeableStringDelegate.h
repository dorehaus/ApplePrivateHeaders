/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringDelegate.h>

@protocol ICTableCellMergeableStringObserving;
@class NSUUID, NSMutableArray, NSString;

@interface ICTableCellMergeableStringDelegate : NSObject <TTMergeableStringDelegate> {

	id<ICTableCellMergeableStringObserving> _changeObserver;
	NSUUID* _columnID;
	NSUUID* _rowID;
	unsigned long long _editingCount;
	NSMutableArray* _undoCommands;

}

@property (nonatomic,__weak,readonly) id<ICTableCellMergeableStringObserving> changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,readonly) NSUUID * columnID;                                                          //@synthesize columnID=_columnID - In the implementation block
@property (nonatomic,readonly) NSUUID * rowID;                                                             //@synthesize rowID=_rowID - In the implementation block
@property (assign,nonatomic) unsigned long long editingCount;                                              //@synthesize editingCount=_editingCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * undoCommands;                                                //@synthesize undoCommands=_undoCommands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginEditing;
-(void)endEditing;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(NSMutableArray *)undoCommands;
-(char)wantsUndoCommands;
-(void)addUndoCommand:(id)arg1 ;
-(id<ICTableCellMergeableStringObserving>)changeObserver;
-(NSUUID *)rowID;
-(NSUUID *)columnID;
-(unsigned long long)editingCount;
-(void)setEditingCount:(unsigned long long)arg1 ;
-(void)setUndoCommands:(NSMutableArray *)arg1 ;
-(id)initWithTableCellChangeObserver:(id)arg1 columnID:(id)arg2 rowID:(id)arg3 ;
@end

