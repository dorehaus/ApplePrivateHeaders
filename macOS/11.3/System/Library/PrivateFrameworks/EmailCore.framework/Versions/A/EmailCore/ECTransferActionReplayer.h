/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/ECLocalActionReplayer.h>

@interface ECTransferActionReplayer : ECLocalActionReplayer
-(id)replayAction;
-(id)failActionWithError:(id)arg1 ;
-(id)_downLoadSourceMessagesInAction:(id)arg1 ;
-(id)_appendMessagesInAction:(id)arg1 ;
-(id)_transferItemsInAction:(id)arg1 isMove:(char)arg2 ;
-(id)_deleteItemsInAction:(id)arg1 ;
-(id)_allCopyItemsBySourceRemoteIDsForAction:(id)arg1 failedItems:(id*)arg2 ;
@end
