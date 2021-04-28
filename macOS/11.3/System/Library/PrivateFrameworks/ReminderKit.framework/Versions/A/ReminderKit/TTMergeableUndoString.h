/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/TTMergeableString.h>

@interface TTMergeableUndoString : TTMergeableString
-(void)deleteSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *>>*)arg1 withCharacterRanges:(vector<_NSRange, std::__1::allocator<_NSRange>>Ref)arg2 ;
-(TopoIDRange)insertAttributedString:(id)arg1 after:(TopoSubstring*)arg2 before:(TopoSubstring*)arg3 ;
-(void)addUndoCommand:(id)arg1 ;
-(void)applyUndoCommand:(id)arg1 ;
-(void)undeleteSubstrings:(vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *>>>*)arg1 ;
@end

