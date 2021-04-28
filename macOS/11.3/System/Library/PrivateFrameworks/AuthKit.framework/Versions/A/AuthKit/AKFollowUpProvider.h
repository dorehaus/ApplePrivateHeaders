/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKFollowUpProvider <NSObject>
@required
-(id)pendingFollowUpItems:(id*)arg1;
-(char)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(char)removeAllFollowUpItems:(id*)arg1;
-(char)addFollowUpItems:(id)arg1 error:(id*)arg2;
-(char)removeFollowUpItems:(id)arg1 error:(id*)arg2;
-(char)clearNotificationsForItem:(id)arg1 error:(id*)arg2;

@end
