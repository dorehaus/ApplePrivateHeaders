/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/Versions/A/IntlPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSTableViewDataSource <NSObject>
@optional
-(long long)numberOfRowsInTableView:(id)arg1;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
-(void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
-(id)tableView:(id)arg1 pasteboardWriterForRow:(long long)arg2;
-(void)tableView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(CGPoint)arg3 forRowIndexes:(id)arg4;
-(void)tableView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 operation:(unsigned long long)arg4;
-(void)tableView:(id)arg1 updateDraggingItemsForDrag:(id)arg2;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
-(id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;

@end

